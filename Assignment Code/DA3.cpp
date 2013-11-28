////Marc Hayek
////200902319
#include<iostream>
using namespace std;
#include<cmath>
#include<fstream>
#include<string>
////Part 1
//template <class Elem> class Link 
//{
//	public:
//  	Elem element; 
//  	Link *next;   
//  	
//		Link(const Elem& elemval,
//       	Link* nextval =NULL)
//     { element = elemval;  next = nextval; }
//  	
//		
//		Link(Link* nextval =NULL)
//    	{ next = nextval; }
//};
//
//template <class Elem> 
//class LStack          
//{
// private:
//   Link<Elem>* top; // Pointer to first elem
//   int size;        // Count number of elems
//
// public:
//
//  LStack()
//    { top = NULL; size = 0; }
//
//  bool push(const Elem& item) 
//  {
//    top = new Link<Elem>(item, top);
//    size++;
//    return true;
//  }
// bool pop(Elem& it) 
// {
//    if (size == 0) return false;
//    it = top->element;
//    Link<Elem>* ltemp = top->next;
//    delete top;
//    top = ltemp;
//    size--;
//    return true;
// }
//
// bool topValue(Elem& it) const 
// {
//    if (size == 0) return false;
//    it = top->element;
//    return true;
// }
//
// bool empty()
// {
//	 if(size==0)
//		 return true;
//	 else
//		 return false;
//
// }
//};
//
//bool compare(char a, char b)
//{
//	if((a=='+'))
//		if((b=='+'))
//			return true;
//		else
//			return false;
//	if((a=='-'))
//		if((b=='+')||(b=='-'))
//			return true;
//		else
//			return false;
//
//	if((a=='*')||(a=='/'))
//		return true;
//
//
//
//
//}
//
//void calculate(char x, int y, int z, LStack<int> &numbers)
//{int o;
//	if(x=='+')
//			{		
//				o=z+y;
//				numbers.push(o);
//		}
//		
//		else if(x=='-')
//			{		
//				o=y-z;
//				numbers.push(o);
//		}
//		
//		else if(x=='*')
//			{		
//				o=y*z;
//				numbers.push(o);
//		}
//		
//		else if(x=='/')
//			{		
//				o=y/z;
//				numbers.push(o);
//		}
//
//
//}
//
//void main()
//{
//	LStack<int> numbers;
//	LStack<char> operators;
//	string s;
//	char x;
//	int z,y,o,j,i;
//	cout<<"Please enter an equation:"<<endl;
//	getline(cin,s);
//	string::size_type length;
//	length=s.length();
//	
//	for(i=0;i<length;i++)
//	{
//		
//		if((i%2)!=0)
//		
//		{
//			
//			if(i>=2)
//			{	char e;
//				operators.topValue(e);
//				if(compare(s[i],e))
//				{
//					operators.push(s[i]);
//				}
//				else
//				{	while((!compare(s[i],e))&&!operators.empty())
//					{numbers.pop(z);
//					numbers.pop(y);
//					operators.pop(x);
//					calculate(x,y,z,numbers);
//					
//					operators.topValue(e);
//					}
//					operators.push(s[i]);
//				}
//			}
//			else
//			{//cout<<s[i]<<endl<<endl;
//			operators.push(s[i]);}
//			
//				
//
//
//		}
//		
//		else
//			numbers.push((static_cast<int>(s[i]-48)));
//
//
//
//
//	}
//	
//	while(!operators.empty())
//	{numbers.pop(z);
//	numbers.pop(y);
//	operators.pop(x);
//	calculate(x,y,z,numbers);
//	
//	
//	}
//	numbers.pop(o);
//    cout<<endl;
//	cout<<s<<" = "<<o<<endl<<endl;
//
//
//}

//Part 2
class student
{
 public:
 int id;
 string year;
 student()
 {id=0;
  year='\0';
 }
student(int x,string s)
{
	id=x;
	year=s;
}

void print()
{
	cout<<"ID: "<<id<<endl;
	cout<<"Major: "<<year<<endl<<endl;

}


};

template <class Elem> class Link 
{
	public:
  	Elem element; 
  	Link *next;   
  	
		Link(const Elem& elemval,
       	Link* nextval =NULL)
     { element = elemval;  next = nextval; }
  	
		
		Link(Link* nextval =NULL)
    	{ next = nextval; }
};



template <class Elem> 
class Queue {
public:

  virtual void clear() = 0;
  virtual bool enqueue(const Elem&) = 0;
  virtual bool dequeue(Elem&) = 0;
  virtual bool frontValue(Elem&) const = 0;
  virtual int length() const = 0;
};



template <class Elem> 
class LQueue: public Queue<Elem> {
private:
  Link<Elem>* front;     // Pointer to front queue node
  Link<Elem>* rear;      // Pointer to rear queue node
  int size;              // Number of elements in queue
public:
  LQueue()  // Constructor 
    { front = NULL;  rear = NULL; size = 0; }
  ~LQueue() { clear(); } // Destructor
  void clear() {         // Clear queue
    Link<Elem>* temp;   
	while(front != NULL) { // Delete each link node
      temp = front;
      front = front->next;
      delete temp;
    }
    rear = NULL;
    size = 0;
  }
  bool enqueue(const Elem& it) {
    if (rear == NULL)   // Empty queue
      front = rear = new Link<Elem>(it, NULL);
    else {              // Append new node
      rear->next = new Link<Elem>(it, NULL);
      rear = rear->next;
    }
    size++;
    return true;
  }
  bool dequeue(Elem& it) { // Remove Elem from front
    if (size == 0) return false;    // Empty
    it = front->element;            // Store dequeued value
    Link<Elem>* ltemp = front;      // Hold dequeued link
    front = front->next;            // Advance front
    delete ltemp;                   // Delete link
    if (front == NULL) rear = NULL; // Dequeued last element
    size --;
    return true;                    // Return element value
  }
  bool frontValue(Elem& it) const {
    if (size == 0) return false;
    it = front->element;
    return true;
  }
  int length() const { return size; }

};



bool compare(string f, string h)
{


	if((f=="Sophomore"))
			return false;
	if((f=="Junior"))
		if((h=="Sophomore"))
			return true;
		else
			return false;

	if((f=="Senior"))
		if((h=="Senior"))
			return false;
		else
		return true;


}


void selectsort(LQueue<student> &b)
{
	student x;
	string small;
	int y,z;
	int counter;
	int	index;
	LQueue<student> a;
	int	jj;
	jj=b.length();
	for(int l=0;l<jj;l++)
	{
		
	b.dequeue(x);
	small=x.year;
	b.enqueue(x);



	counter=1;
	index=1;
	for(int i=0;i<(b.length()-1);i++)
	{counter++;
		b.dequeue(x);
		if(!compare(small,x.year))
		{
			small=x.year;
			index=counter;
		}
		b.enqueue(x);
	

	}

	for(int j=0;j<(index-1);j++)
	{b.dequeue(x);
	b.enqueue(x);}
	b.dequeue(x);
	a.enqueue(x);
	


	}

	int nn;
	nn=a.length();
	for(int kk=0;kk<nn;kk++)
	{a.dequeue(x);
	b.enqueue(x);}


}




void main()
{

	LQueue<student> line;

	student a(1,"Junior");
	student b(2,"Junior");
	student c(3,"Senior");
	student d(4,"Senior");
	student e(5,"Sophomore");
	student f(6,"Sophomore");
	student g(7,"Sophomore");
	student h(8,"Senior");
	student me(9,"Junior");

	
	line.enqueue(b);
	
	line.enqueue(c);
	line.enqueue(a);
	line.enqueue(d);
	line.enqueue(e);
	line.enqueue(f);
	line.enqueue(g);
	line.enqueue(h);
	line.enqueue(me);

	

	student x;
	cout<<"Removed Students: "<<endl;
	line.dequeue(x);
	x.print();

	line.dequeue(x);
	x.print();

	line.dequeue(x);
	x.print();

	line.dequeue(x);
	x.print();
	
	cout<<"\n\nAfter Sorting: "<<endl;
    selectsort(line);

	int size=(line.length());

	for(int i=0;i<size;i++)
	{line.dequeue(x);
	x.print();}
}


