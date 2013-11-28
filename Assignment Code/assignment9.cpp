//Marc Hayek
//200902319
#include <iostream>
using namespace std;
#include <cmath>
#include <string>
#include <iomanip>

////Excersise 1
//
//void combine(double a[],double b[],double c[],int sizea,int sizeb,int sizec);
//
//void main()
//{   int sizea=0,sizeb=0,sizec=0;
//	double *a;
//	double *b;
//
//	cout<<"Please enter the size of array a: "<<endl;
//	cin>>sizea;
//	cout<<"\nPlease enter the size of array b: "<<endl;
//	cin>>sizeb;
//	a=new double[sizea];
//	b=new double[sizeb];
//	cout<<"Please enter the values of array a: "<<endl;
//	for(int i=0;i<sizea;i++)
//		cin>>a[i];
//	cout<<"Please enter the values of array b: "<<endl;
//	for(int i=0;i<sizeb;i++)
//		cin>>b[i];
//
//	sizec=sizea+sizeb;
//	double *c;
//	c=new double[sizec];
//
//	combine(a,b,c,sizea,sizeb,sizec);
//
//	cout<<"The components of array c are: "<<endl<<endl;
//
//	    for (int i = 0; i < sizec; i++)
//		{ cout << c[i] << " ";
//
//       
//    }
//cout<<endl<<endl;
//
//}
//
//void combine(double a[],double b[],double c[],int sizea,int sizeb,int sizec)
//{
//	int i=0;
//	sizec= sizea + sizeb;
//	//c=new double[sizec];
//	
//	for(i=0;i<sizea;i++)
//		c[i]=a[i];
//	for(i=0;i<sizeb;i++)
//		c[i+sizea]=b[i];
//
//}

////Excersise 1(simple)
//
//void combine(double a[],double b[],double c[],int sizea,int sizeb,int sizec);
//
//void main()
//{  const int sizea=5,sizeb=5; 
//	const int sizec=10;
//	double a[sizea];
//	double b[sizeb];
//	
//	cout<<"Please enter the values of array a: "<<endl;
//	for(int i=0;i<sizea;i++)
//		cin>>a[i];
//	cout<<"Please enter the values of array b: "<<endl;
//	for(int i=0;i<sizeb;i++)
//		cin>>b[i];
//
//	
//	double c[sizec];
//
//	combine(a,b,c,sizea,sizeb,sizec);
//
//	cout<<"The components of array c are: "<<endl<<endl;
//
//	    for (int i = 0; i < sizec; i++)
//		{ cout << c[i] << " ";
//
//       
//    }
//cout<<endl<<endl;
//
//}
//
//void combine(double a[],double b[],double c[],int sizea,int sizeb,int sizec)
//{
//	int i=0;
//	sizec= sizea + sizeb;
//	for(i=0;i<sizea;i++)
//		c[i]=a[i];
//	for(i=0;i<sizeb;i++)
//		c[i+sizea]=b[i];
//
//}

////Excersise 2
//double f1(double a, double x);
//void main()
//{	
//	double a;
//	cout<<"Enter the value of a :"<<endl;
//	cin>>a;
//	double sum=0;
//	double i=0;
//	for(i=0;i<=1;i=i+0.01)
//	{sum=sum+f1(a,i);
//	 
//	}
//	cout<<"\nThe sum is :"<<sum<<endl<<endl;
//	
//	int counter=0;
//	if (f1(a,i)==0)
//		cout<<"The roots are: "<<endl;
//	for(double i=0;i<=1;i+=0.01)
//	{
//		if (f1(a,i)==0)
//		{counter++;
//		cout<<i<<endl;}
//
//		if((f1(a,i)*f1(a,i+0.01))<0)
//		{counter++;
//		cout<<"There is a root between "<<i<<" and "<<i+0.01<<endl<<endl;}}
//
//	cout<<"The number of roots are: "<<counter<<endl;
//
//	double minimum=0;
//
//	counter=0;
//
//	for(double i=0.01;i<1;i+=0.01)
//	{
//		if(((f1(a,i)<f1(a,i-0.01)))&&( f1(a,i)<f1(a,i+0.01)))
//		{   
//			cout<<"\nA minima is :"<<"("<<i<<","<<f1(a,i)<<")"<<endl;
//			counter++;
//		 
//		}
//	}
//	cout<<"\nThe number of minima is :"<<counter<<endl<<endl;
//
//
//
//}
//
//
//double f1(double a, double x)
//{
//	if (x==0)
//		return a;
//	else return(sin((a*x))/x);
//}

//Excersise 3
class smartA
{
public:
	int *p;
	int size;
	smartA();
	smartA(int *, int);
	~smartA(){};
	smartA getsmart(int [], int &);
	void setsmart( const int [],int); 
	void copysmart( int *, int);
	smartA addsmart (const smartA&);
	void printsmart ();
	void getsize();
	smartA addint(int);
	int removal();
	void removef(int k);
	smartA(const smartA& r) { size=r.size; p=r.p;};
	void print();
	
};

void main()
{
	int a,b,c;
	int *d,*f,*g;

	smartA smart;

	cout<<"Size at initiation is :"<<endl;
	smart.getsize();
	
	cout<<"Enter the size of SmartA Object 1: "<<endl;

	cin>>a;
	d=new int [a];
	cout<<"Please enter the components of SmartA Object 1: "<<endl;
	for(int j=0;j<a;j++)
		cin>>d[j];

	cout<<"Please enter the size of the array of SmartA Object 2: "<<endl;
	cin>>b;
	cout<<"Please enter the components of the array of SmartA Object 2: "<<endl;
	f=new int [b];
	for(int j=0;j<b;j++)
		cin>>f[j];

	smart.setsmart(d,a);

	smartA smartb;
	smartb.setsmart(f,b);
	
	smartA added;
	added=smart.addsmart(smartb);
	
	cout<<"\nAfter adding the two smartA objects, the result is: "<<endl;
	added.printsmart();

	cout<<"\nPlease enter the integer you wish to add to SmartA Object 1: "<<endl;
	int s;
	cin>>s;
	smartA sam;
	sam=smart.addint(s);
	sam.printsmart();

	cout<<"\nThe last element removed of  SmartA Object 1 is: ";
	cout<<smart.removal()<<endl;

	cout<<"\nAfter removing from SmartA Object 1, we get: ";
	smart.printsmart();

	cout<<"Enter the size of SmartA Object 3: "<<endl;

	cin>>c;
	g=new int [c];
	cout<<"Please enter the components of SmartA Object 3: "<<endl;
	for(int j=0;j<c;j++)
		cin>>g[j];

	smartA test;
	test.setsmart(g,c);
	
	int j;
	cout<<"Please enter the position of the component you wish to ommit"<<endl;
	cin>>j;
	j--;
	test.removef(j);

	cout<<"After omitting, SmartA Object 3 becomes: "<<endl;
	test.printsmart();


	int kl;
	int *ma;

	cout<<"Please enter the size of the array of SmartA Object 4 which is greater that 10: "<<endl;
	cin>>kl;
	ma=new int [kl];
	cout<<"Please enter the components of the array of SmartA Object 4: "<<endl;
	for(int j=0;j<kl;j++)
		cin>>ma[j];

	smartA mmm;
	mmm.setsmart(ma,kl);

	mmm.print();


}

smartA::smartA()
{size=10;}

smartA::smartA(int *a,int x)
{size=x;
 a=new int[x];
 for(int i=0;i<size;i++)
	 p[i]=a[i];}



smartA smartA::getsmart(int a[], int &sizea)
{   smartA s;
	for (int i = 0; i < sizea; i++)
		{ p[i]=a[i];
			}
	return s;
}

void smartA::setsmart(const int a[],int x)
{
	size=x;
	p= new int[size];
	for(int j=0;j<x;j++)
		p[j]=a[j];
}

void smartA::copysmart( int *a, int x)
{	a= new int [x];
	
	for(int j=0;j<x;j++)
		a[j]=p[j];
}

smartA smartA::addsmart (const smartA& r)
{
	smartA c;
	c.size=size+r.size;
	c.p= new int [c.size];
	for(int j=0;j<size;j++)
		c.p[j]=p[j];
	for(int j=0;j<r.size;j++)
		c.p[j+size]=r.p[j];
	return c;
}


void smartA::printsmart()
{
	cout<<"The size of the array is: "<<size<<endl;

	cout<<"The components of the array are: "<<endl;
	for(int j=0;j<size;j++)
		cout<<p[j]<<" ";
	cout<<endl;
}

void smartA::getsize()
{
	cout<<"The size is: "<<size<<endl;
}

smartA smartA::addint(int x)
{
	smartA c;
	c.size=size+1;
	c.p= new int [c.size];
	for(int j=0;j<size;j++)
		c.p[j]=p[j];

	c.p[c.size-1]=x;
	return c;
}

int smartA::removal()
{	int u;
	u= p[size-1];
	p[size-1]='/0';
	size=size-1;
	return u;
} 

void smartA::removef(int k)
{	if(k<=size)
{p[k]='/0';
	size=size-1;
	for(int j=k;j<size;j++)
		p[j]=p[j+1];}
if(k>size)
{
	cout<<"Invalid entry"<<endl;}
}


void smartA::print()
{	int counter=0;
	cout<<"The size of the array is: "<<size<<endl;

	cout<<"The components of the array are: "<<endl;
	for(int j=0;j<size;j++)
	{cout<<p[j]<<" ";
	counter++;
	if(counter%5==0)
	cout<<endl;
	}
	cout<<endl;
}




