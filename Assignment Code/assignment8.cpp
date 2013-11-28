//Marc Hayek
//200902319
#include <iostream>
using namespace std;
#include <cmath>
#include <string>

const double PI=3.1415;

class container
{
	protected:
	int percent_loaded;
	
	public:
	virtual void display_name();

	container();
	container(double x);
};

	class cylinder:public container
{
	private:
	double radius;
	double height;
	static int counter;
	
	public:
	cylinder();
	cylinder(double x, double y);
	~cylinder(){counter--;}
	cylinder(const cylinder &r) { *this=r; counter++;}
	void setradius(double x);
	double getradius();
	void setheight(double x);
	double getheight();
	void setdiameter(double x);
	double getdiameter();
	double volume();
	void print();
	void display_name();
	static int getcounter();

};
void bubblesort(cylinder [],int );
void bubblesortpointers(cylinder *[], int n);
int cylinder::counter=0;
void main()
{
	const int size=5;
	cylinder n[size];
	int i;
	for(i=0;i<5;i++)
	{	
		cout<<"Cylinder "<<i+1<<": "<<endl;
		double x;
		cout<<"Please enter a value for the radius: ";
		cin>>x;
		n[i].setradius(x);
		cout<<"\nPlease enter a value for the height: ";
		cin>>x;
		n[i].setheight(x);
		cout<<endl<<endl;
	}
	
	bubblesort(n,5);

	cout<<"The volumes in ascending order are: "<<endl<<endl;

	for(i=0;i<5;i++)
		cout<<n[i].volume()<<", ";
	cout<<endl<<endl;

	cout<<"The number of objects created is: "<<cylinder::getcounter()<<endl<<endl;

	cylinder y;
	cout<<"Test 1"<<endl;
	y.display_name();
	
	cout<<endl<<endl;
	cout<<"Test 2"<<endl;
	container l;
	l.display_name();

	container *r=&y;
	r->display_name();
	cout<<endl<<endl;

	cylinder *p[size];
	for(i=0;i<size;i++)
		p[i]=&n[i];
	bubblesortpointers(p,size);
	cout<<"\nThe sorted heights of the array are: "<<endl;
	for(i=0;i<size;i++)
		cout<<p[i]->getheight()<<" ";
	cout<<endl;
	 
	
}

cylinder::cylinder()
{ radius=1;
  height=1;
  counter++;
}

cylinder::cylinder(double x, double y)
{ 
	if((x>0)&(x<=20))
		radius=x;
	else
		radius=1;
	if((y>0)&(y<=20))
		height=y;
	else
		height=1;
	counter++;
}

container::container()
{percent_loaded=1;}

container::container(double x)
{ if(x>=0&&x<=100)
	percent_loaded=x;
	else
		percent_loaded=1;}

void cylinder::setradius(double x)
{ if((x>0)&(x<=20))
		radius=x;
	else
		radius=1;}

double cylinder::getradius()
{ return radius;}

void cylinder::setheight(double x)
{ if((x>0)&(x<=20))
		height=x;
	else
		height=1;}

double cylinder::getheight()
{return height;}

void cylinder::setdiameter(double x)
{ radius=(x/2);}

double cylinder::getdiameter()
{ return 2*radius;}

double cylinder::volume()
{ return PI*radius*radius*height;}

void cylinder::print()
{ cout<<"\nThe radius of the cylinder is: "<<radius<<endl;
  cout<<"The diameter of the cylinder is: "<<2*radius<<endl;
  cout<<"The height of the cylinder is: "<<height<<endl;
}

void cylinder::display_name()
{ cout<<"Cylinder"<<endl;}


void bubblesort(cylinder n[],int size)

{	cylinder hold; 
         
       for ( int pass = 0; pass < size - 1; pass++ )     
          for ( int j = 0; j < size-pass- 1; j++ )           
			  if ( (n[j].volume()) > (n[j + 1].volume()) ) 
			  {                     
				   hold = (n[j]);                                
				  (n[j]) = (n[j + 1]);                          
				  (n[j + 1]) = hold;  

			  }
}

void bubblesortpointers(cylinder *n[],int size)

{	cylinder *hold; 
         
       for ( int pass = 0; pass < size - 1; pass++ )     
          for ( int j = 0; j < size-pass- 1; j++ )           
			  if ( (n[j]->getheight()) > (n[j + 1]->getheight()) ) 
			  {                     
				   hold = (n[j]);                                
				  (n[j]) = (n[j + 1]);                          
				  (n[j + 1]) = hold;  

			  }
}
int cylinder::getcounter()
{ return counter;}

void container::display_name()
{ cout<<"Container"<<endl;}

////part 2
//class rectangle
//{
//	private:
//	double length, width;
//	public:
//		rectangle(){length=1;width=1;}
//		rectangle(double x, double y)
//		{ if(x>0)
//			length=x;
//		else
//			length=1;
//		  if(y>0)
//			  width=y;
//		  else
//			  width=1;
//		}
//		void setlength(double x){length=x;}
//		double getlength(){return length;}
//		void setwidth(double x){width=x;}
//		double getwidth(){return width;}
//		double area(){return length*width;}
//};
//void main()
//{   int x,y,z;
//	const int size=3;
//	rectangle *p;
//	int i=0;
//	p=new rectangle[size];
//	rectangle *pa[3];
//	double length[size];
//	double width[size];
//	double area[size];
//	
//	for (int i=0; i<size; i++)
//	{
//		cout<<"Enter the length and width of rectangle #"<<i+1<<endl;
//		cout<<"length:";
//		cin>>x;
//		cout<<"width:";
//		cin>>y;
//		p[i].setlength(x); 
//		p[i].setwidth(y);
//		pa[i]=&p[i];
//	}
//	
//	for(i=0;i<size;i++)
//	{
//		
//		length[i]=p[i].getlength();
//		width[i]=p[i].getwidth();
//		area[i]=p[i].area();
//	}
//	
//	cout<<"Enter the area you would like to search for: ";
//	cin>>z;
//	int counter=0;
//	while(z!=0)
//	{{for(i=0;i<size;i++)
//		{if(z==p[i].area())
//		counter++;}
//	}
//	if(counter>0)
//		cout<<"The area you are looking for exists";
//	else
//		cout<<"The area you are looking for does not exist";
//	counter=0;
//	cout<<"\nEnter the area you would like to search for, press 0 to exit"<<endl<<endl;
//	cin>>z;
//	
//	}
//
//	cout<<"\nEnter the length you would like to search for: ";
//	cin>>z;
//	
//	while(z!=0)
//	{{for(i=0;i<size;i++)
//		{if(z==p[i].getlength())
//		counter++;}
//	}
//	if(counter>0)
//		cout<<"The length you are looking for exists";
//	else
//		cout<<"The length you are looking for does not exist";
//	counter=0;
//	cout<<"\nEnter the length you would like to search for, press 0 to exit"<<endl<<endl;
//	cin>>z;
//	
//	}
//	cout<<"\nEnter the width you would like to search for: ";
//	cin>>z;
//	
//	while(z!=0)
//	{{for(i=0;i<size;i++)
//		{if(z==p[i].getwidth())
//		counter++;}
//	}
//	if(counter>0)
//		cout<<"The width you are looking for exists";
//	else
//		cout<<"The width you are looking for does not exist";
//	counter=0;
//	cout<<"\nEnter the width you would like to search for, press 0 to exit"<<endl<<endl;
//	cin>>z;
//	
//	}
//
//	}
//	



