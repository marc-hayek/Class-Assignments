 ////Marc Hayek
////200902319
#include<iostream>
using namespace std;
#include<cmath>
#include<fstream>
#include<string>
//Part 1
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
class LStack          
{
 private:
   Link<Elem>* top; // Pointer to first elem
   int size;        // Count number of elems

 public:

  LStack()
    { top = NULL; size = 0; }

  bool push(const Elem& item) 
  {
    top = new Link<Elem>(item, top);
    size++;
    return true;
  }
 bool pop(Elem& it) 
 {
    if (size == 0) return false;
    it = top->element;
    Link<Elem>* ltemp = top->next;
    delete top;
    top = ltemp;
    size--;
    return true;
 }

 bool topValue(Elem& it) const 
 {
    if (size == 0) return false;
    it = top->element;
    return true;
 }

 bool empty()
 {
	 if(size==0)
		 return true;
	 else
		 return false;

 }
};

bool compare(char a, char b)
{
	if((a=='+'))
		if((b=='+'))
			return true;
		else
			return false;
	if((a=='-'))
		if((b=='+')||(b=='-'))
			return true;
		else
			return false;

	if((a=='*')||(a=='/'))
		return true;


}

void calculate(char x, int y, int z, LStack<int> &numbers)
{int o;
	if(x=='+')
			{		
				o=z+y;
				numbers.push(o);
		}
		
		else if(x=='-')
			{		
				o=y-z;
				numbers.push(o);
		}
		
		else if(x=='*')
			{		
				o=y*z;
				numbers.push(o);
		}
		
		else if(x=='/')
			{		
				o=y/z;
				numbers.push(o);
		}


}

void main()
{
	LStack<int> numbers;
	LStack<char> operators;
	string s;
	char x;
	int z,y,o,j,i;
	string p;
	cout<<"Please enter an equation:"<<endl;
	getline(cin,s);
	p=s;
	string::size_type length;
	length=s.length();
	int n=0;
	if(s[0]=='-')
	{
		operators.push(s[0]);
		numbers.push(s[1]-48);
		operators.pop(x);
		numbers.pop(z);
		calculate(x,0,z,numbers);
		n=1;
		string f=s;
		f[length-1]='\0';
		for(i=0;i<length-1;i++)
			f[i]=s[i+1];

		s=f;
		

	}
	
	for(i=n;i<length-n;i++)
	{
		if((i%2)!=0)
		
		{
			
			if(i>=2)
			{	char e;
				operators.topValue(e);
				if(compare(s[i],e))
				{
					operators.push(s[i]);
					operators.topValue(x);
					cout<<endl;
					cout<<x;
				}
				else
				{	while((!compare(s[i],e))&&!operators.empty())
					{numbers.pop(z);
					numbers.pop(y);
					operators.pop(x);
					calculate(x,y,z,numbers);
					
					operators.topValue(e);
					}
					operators.push(s[i]);
				}
			}
			else
			{//cout<<s[i]<<endl<<endl;
			operators.push(s[i]);
			operators.topValue(x);
					cout<<endl;
					cout<<x;}
			

		}
		
		else
		{numbers.push((static_cast<int>(s[i]-48)));
		numbers.topValue(y);
		cout<<endl;
		cout<<y;}




	}
	
	while(!operators.empty())
	{numbers.pop(z);
	numbers.pop(y);
	operators.pop(x);
	calculate(x,y,z,numbers);
	numbers.topValue(y);
	cout<<endl;
	cout<<y;
	
	}
	numbers.pop(o);
    cout<<endl;
	s=p;
	cout<<s<<" = "<<o<<endl<<endl;


}