////Marc Hayek
////200902319
#include<iostream>
using namespace std;
#include<cmath>
#include<fstream>
#include<string>


class student
{
	public:
	int id;
	double average;
	string major;

	student()
	{	id=0;
		average=0;
		major='\0';
	}

	student(int x, double y, string z)
	{
		id=x;
		average=y;
		major=z;


	}
	
};


// The Dictionary abstract class.  KEComp compares a key
// and an element. EEComp compares two elements.  
template <class Key, class Elem, class KEComp, class EEComp>
class  Dictionary { 
public:
  // Reinitialize dictionary
  virtual void clear() = 0;
  // Insert an element.  Return true if insert is
  // successful, false otherwise.
  virtual bool insert(const Elem&) = 0;
  // Remove some element matching Key.  Return true if such
  // exists, false otherwise.  If multiple entries match
  // Key, an arbitrary one is removed.
  virtual bool remove(const Key&, Elem&) = 0;
  // Remove and return an arbitrary element from dictionary.
  // Return true if some element is found, false otherwise.
  virtual bool removeAny(Elem&) = 0;
  // Return a copy of some Elem matching Key.  Return true
  // if such exists, false otherwise.  If multiple elements
  // match Key, return an arbitrary one.
  virtual bool update(const Key&, Elem&, double k) const = 0;
  // Return the number of elements in the dictionary.
  virtual int size() = 0;
};


// Binary tree node abstract class
template <class Elem> 
class BinNode {
public:
  // Return the node's element
  virtual Elem& val() = 0;
  // Set the node's element
  virtual void setVal(const Elem&) = 0;
  //
  virtual void updateval(double l)=0;
  // Return the node's left child
  virtual BinNode* left() const = 0;
  // Set the node's left child
  virtual void setLeft(BinNode*) = 0;
  // Return the node's right child
  virtual BinNode* right() const = 0;
  // Set the node's right child
  virtual void setRight(BinNode*) = 0;
  // Return true iff the node is a leaf
  virtual bool isLeaf() = 0;
};

// Binary tree node class
template <class Elem>
class BinNodePtr : public BinNode<Elem> {
private:
  Elem it;                     // The node's value
  BinNodePtr* lc;              // Pointer to left child
  BinNodePtr* rc;              // Pointer to right child
public:
  // Two constructors -- with and without initial values
  BinNodePtr() { lc = rc = NULL; }
  BinNodePtr(Elem e, BinNodePtr* l =NULL,
                     BinNodePtr* r =NULL)
    { it = e; lc = l; rc = r; }
  ~BinNodePtr() {}             // Destructor
  Elem& val() { return it; }
  void setVal(const Elem& e) { it = e; }
  void updateval(double l) { it.average = l; }
  inline BinNode<Elem>* left() const { return lc; }
  void setLeft(BinNode<Elem>* b) { lc = (BinNodePtr*)b; } //conversion must be explicit
  inline BinNode<Elem>* right() const { return rc; }
  void setRight(BinNode<Elem>* b) { rc = (BinNodePtr*)b; }
  bool isLeaf() { return (lc == NULL) && (rc == NULL); }
};


// Binary Search Tree implementation for the Dictionary ADT
template <class Key, class Elem, class KEComp, class EEComp>
class BST : public Dictionary<Key, Elem, KEComp, EEComp> {
private:
  BinNode<Elem>* root;   // Root of the BST
  int nodecount;         // Number of nodes in the BST
  // Private "helper" functions
  void clearhelp(BinNode<Elem>*);
  BinNode<Elem>* inserthelp(BinNode<Elem>*, const Elem&);
  BinNode<Elem>* deletemin(BinNode<Elem>*, BinNode<Elem>*&);
  BinNode<Elem>* removehelp(BinNode<Elem>*, const Key&,
                            BinNode<Elem>*&);
  bool findhelp(BinNode<Elem>*, const Key&, Elem&,double ) const;
 // bool updatehelp(BinNode<Elem>*&, const Key&, Elem&, double,BinNode<Elem>*&);
  void printhelp(BinNode<Elem>*, int) const;
  void preorder(BinNode<Elem>*,string s)const;
public:
  BST() { root = NULL; nodecount = 0; }  // Constructor
  ~BST() { clearhelp(root); }            // Destructor
  void clear()
    { clearhelp(root); root = NULL; nodecount = 0; }
  bool insert(const Elem& e) {
    root = inserthelp(root, e);
    nodecount++;
    return true;
  }
  bool remove(const Key& K, Elem& e) {
    BinNode<Elem>* t = NULL;
    root = removehelp(root, K, t);
    if (t == NULL) return false;  // Nothing found
    e = t->val();
    nodecount--;
    delete t;
    return true;
  }
  bool removeAny(Elem& e) { // Delete min value
    if (root == NULL) return false; // Empty tree
    BinNode<Elem>* t;
    root = deletemin(root, t);
    e = t->val();
    delete t;
    nodecount--;
    return true;
  }
  bool update(const Key& K, Elem& e,double a) const
    { return findhelp(root, K, e, a); }
 
  
  int size() { return nodecount; }

 /* bool update(const Key& K, Elem& e, double l)
  {
	  BinNode<Elem>* t = NULL;
	  return updatehelp(root,K,e,l,t);
  }*/
 
  void print() const {
    if (root == NULL) cout << "The BST is empty.\n";
    else printhelp(root, 0);
  }

  void searchall(string s)
  {
	  return preorder(root,s);


  }

  





  
};

template <class Key, class Elem, class KEComp, class EEComp>
void BST<Key, Elem, KEComp, EEComp>::
clearhelp(BinNode<Elem>* subroot) {
  if (subroot == NULL) return;
  clearhelp(subroot->left());
  clearhelp(subroot->right());
  delete subroot;
}

template <class Key, class Elem, class KEComp, class EEComp>
BinNode<Elem>* BST<Key, Elem, KEComp, EEComp>::
inserthelp(BinNode<Elem>* subroot, const Elem& val) {
  if (subroot == NULL)            // Empty tree: create node
    return (new BinNodePtr<Elem>(val, NULL, NULL));
  if (EEComp::lt(val, subroot->val())) // Insert on left
    subroot->setLeft(inserthelp(subroot->left(), val));
  else subroot->setRight(inserthelp(subroot->right(), val));
  return subroot;  // Return subtree with node inserted
}

template <class Key, class Elem, class KEComp, class EEComp>
BinNode<Elem>* BST<Key, Elem, KEComp, EEComp>::
deletemin(BinNode<Elem>* subroot, BinNode<Elem>*& min) {
  if (subroot->left() == NULL) { // Found min
    min = subroot;
    return subroot->right();
  }
  else {                         // Continue left
    subroot->setLeft(deletemin(subroot->left(), min));
    return subroot;
  }
}

template <class Key, class Elem, class KEComp, class EEComp>
BinNode<Elem>* BST<Key, Elem, KEComp, EEComp>::
removehelp(BinNode<Elem>* subroot, const Key& K,
           BinNode<Elem>*& t) {
  if (subroot == NULL) return NULL; // Val is not in tree
  else if (KEComp::lt(K, subroot->val())) // Check left
    subroot->setLeft(removehelp(subroot->left(), K, t));
  else if (KEComp::gt(K, subroot->val())) // Check right
    subroot->setRight(removehelp(subroot->right(), K, t));
  else {                           // Found it: remove it
    BinNode<Elem>* temp;
    t = subroot;
    if (subroot->left() == NULL)       // Only a right child
      subroot = subroot->right();      //  so point to right
    else if (subroot->right() == NULL) // Only a left child
      subroot = subroot->left();       //  so point to left
    else {                    // Both children are non-empty
      subroot->setRight(deletemin(subroot->right(), temp)); //temp:inorder successor
															// returns a pointer to subroot->right()
      Elem te = subroot->val();  // remember value of node to remove
      subroot->setVal(temp->val());
      temp->setVal(te);
      t = temp;
    }
  }
  return subroot;
}

template <class Key, class Elem, class KEComp, class EEComp>
bool BST<Key, Elem, KEComp, EEComp>:: findhelp(
      BinNode<Elem>* subroot, const Key& K, Elem& e, double k) const {
  if (subroot == NULL) return false;         // Empty tree
  else if (KEComp::lt(K, subroot->val()))    // Check left
    return findhelp(subroot->left(), K, e,k);
  else if (KEComp::gt(K, subroot->val()))    // Check right
    return findhelp(subroot->right(), K, e,k);
  else { //e = subroot->val();
	//  cout<<endl;
	  //cout<<subroot->val().id<<endl;
	//cout<<subroot->val().major<<endl;
//cout<<subroot->val().average;
		(subroot->val()).average=k;
//cout<<subroot->val().average;
		cout<<endl;
		
		
		cout<<endl;
		
  return true; } // Found it
}


//template <class Key, class Elem, class KEComp, class EEComp>
//bool BST<Key, Elem, KEComp, EEComp>:: updatehelp(
//      BinNode<Elem>*& subroot, const Key& K, Elem& e, double l,BinNode<Elem>*& t)  {
//  if (subroot == NULL) return false;         // Empty tree
//  else if (KEComp::lt(K, subroot->val()))    // Check left
//  {
//	  t=subroot->left();
//	  return updatehelp((t), K, e,l,t);}
//  else if (KEComp::gt(K, subroot->val()))    // Check right
//  {   t=subroot->right();
//	  return updatehelp(t, K, e,l,t);}
//  else {  
//			//subroot->val().average=l;
//			cout<<subroot->val().average<<endl;
//			t->val().average=l;
//			subroot->val().average=t->val().average;
//			e = subroot->val(); 
//			cout<<endl;
//			cout<<subroot->val().average<<endl;
//			cout<<"Found it!"<<endl;
//			return true; } // Found it
//}






template <class Key, class Elem, class KEComp, class EEComp>
void BST<Key, Elem, KEComp, EEComp>::
printhelp(BinNode<Elem>* subroot, int level) const {
  if (subroot == NULL) return;          // Empty tree
  printhelp(subroot->left(), level+1);  // Do left subtree
  //for (int i=0; i<level; i++)           // Indent to level
  //  cout << "  ";
  cout<<"ID: " << subroot->val().id << "\n";
  cout<<"Average: " << subroot->val().average << endl<<endl;
  //cout<<subroot->val().average<<endl;// Print node value
  printhelp(subroot->right(), level+1); // Do right subtree
}

template <class Key, class Elem, class KEComp, class EEComp>
void BST<Key, Elem, KEComp, EEComp>::
preorder(BinNode<Elem>* subroot, string s) const {
 
  if (subroot == NULL) return;  // Empty
  if(subroot->val().major==s)
	  cout<<subroot->val().id<<endl;// Perform some action
  preorder(subroot->left(),s); // Even if empty child 
  preorder(subroot->right(),s);
}




class IDCompare 
{
	public:	

static bool lt(const student& x, const student& y)
     { return x.id < y.id; }
   
static bool gt(const student& x,const  student& y)
     { return x.id > y.id; }

static bool eq(const student& x, const student& y)
     { return x.id == y.id; }

};

class IDstudentCompare 
{
	public:	

static bool lt(int i,student& x )
     { return  i<x.id ; }
   
static bool gt(int i,student& x )
     { return  i> x.id; }

static bool eq(int i,student& x )
     { return  i==x.id ; }

};







void main()
{
	BST<int,student,IDstudentCompare,IDCompare> tree;



	for(int i=1;i<=3;i++)
	{student a(i,70+i,"ece");
	tree.insert(a);
	}

	tree.print();

	//student a(1,80,"ece");
	//student b(2,89,"ece");
	//student c(3,90,"agr");
	//student d(4,34,"ece");
	//student e(5,67,"ece");
	//student f(6,87,"cce");
	//student g(7,93,"agr");
	//student h(8,57,"math");
	//student i(9,47,"math");
	//student j(10,67,"civil");	
	//student o;
	//
	//
	//tree.insert(b);
	//
	//tree.insert(d);
	//tree.insert(e);
	//tree.insert(f);
	//tree.insert(g);
	//tree.insert(h);
	//tree.insert(a);
	//tree.insert(j);
	//tree.insert(c);
	//tree.insert(i);

	//tree.remove(2,o);
	//tree.remove(3,o);
	//tree.remove(10,o);

	//tree.update(8,o,70);
	////cout<<endl;
	////cout<<a.average<<endl;
	////cout<<o.average;
	//
	//cout<<"Search all:"<<endl;
	//tree.searchall("ece");

	//cout<<endl<<endl;
	//
	//tree.print();
	

	
	

	












}
