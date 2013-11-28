////Marc Hayek
////200902319
#include<iostream>
using namespace std;
#include<cmath>
#include<fstream>
#include<string>
#include <iomanip>


////Excersise 1
//
//void copyArray(int a[], int b[], int size)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<size;i++)
//		b[size-i-1]=a[i];
//
//}
//
//void main()
//{
//	const int size=7;
//	int a[size]={15,4,88,75,6,13,20};
//	int b[size];
//	copyArray(a,b,size);
//	for(int i=0;i<size;i++)
//		cout<<b[i]<<" ";
//
//
//}

////Excersise 2
//
//void f(int k,int &a, int &b)
//{
//	if(a!=b)
//		if(a<b)
//		{a=a+k;
//	b=b-k;}
//		else
//		{b=b+k;
//			a=a-k;
//	}
//}
//
//void main()
//{
//	int a=5;
//	int b=8;
//	f(2,a,b);
//	cout<<"a= "<<a;
//	cout<<" ";
//	cout<<"b= "<<b;
//	cout<<endl;
//
//
//
//}

////Excersise 3
//
// double mysum(int n)
// {
//	double sum=0;
//	int i=0;
//    for(i=1;i<=n;i++)
//	sum = sum + ((1)/(5.0*i));
//	return sum;
// }
//
//
// void main()
// {
//	int n=40;
//	cout<<mysum(n);
//	cout<<endl;
//
// }

 //Excersise 4

class student
	
{	
	
	public:
	string name;
	int id;
	
	int ncourse;
	int listsize;
	string *courses;
	student();
	int *grades;
	void add(string s, int a);
	double average();
	void setid(int x);
	~student(){};
	



};

void sort(student a);




ostream& operator<<(ostream& os, student c)
 {	 
	 os<<"Name: "<<c.name<<endl;
	 os<<"Id: "<<c.id<<endl;
	 os<<"Number of courses taken: "<<c.ncourse<<endl;
	 for(int i=0;i<c.ncourse;i++)
		 os<<"Course:"<<c.courses[i]<<"   "<<"Grade: "<<c.grades[i]<<endl;
	
	 os<<"\nAverage: "<<c.average()<<endl;

	 os<<endl;
 return os;
 } 


void main()
{
	student a;
	string names;
	string courset;
	int gradet;
	cout<<"Enter your name:"<<endl;
	getline(cin, names);
	

	a.name=names;

	cout<<"Enter ID"<<endl;
	int x;
	cin>>x;
	a.setid(x);

	cout<<"Enter number of courses you wish to add"<<endl;
	int y;
	cin>>y;
	for(int i=0;i<y;i++)
	{		
		
		cout<<"Enter the grade of  course #"<<i+1<<endl;
			cin>>gradet;
		
			cout<<"Enter the name of  course #"<<i+1<<endl;
			getline(cin, courset);
			getline(cin, courset);
			
			
			
			a.add(courset,gradet);
	}

	cout<<"\nStudent information before sorting:"<<endl;
	cout<<a;

	cout<<"\nStudent information after sorting:"<<endl;
	sort(a);
	cout<<a;


}






student::student()
{
	ncourse=0;
	listsize=5;
	courses= new string[listsize];
	grades= new int[listsize];

}


void student::setid(int x)
{
	id=x;
}

void student::add(string s, int a)
{	
	
	if((ncourse)==listsize)
	{listsize=listsize+5;
	string *k;
	int *t;
	 k=new string[listsize];
	 t=new int[listsize];
	 for(int i=0;i<listsize-5;i++)
	 {k[i]=courses[i];
	 t[i]=grades[i];}
	  delete []grades;
	  delete []courses;
	  grades=new int[listsize];
	  courses=new string[listsize];
	 
		
	 for(int i=0;i<listsize-5;i++)
	 {courses[i]=k[i];
	  grades[i]=t[i];
	 }
	}
	courses[ncourse]=s;
	grades[ncourse]=a;
	ncourse=ncourse+1;



}


double student::average()
{
	double sum=0;
	if(ncourse!=0)
	{for(int i=0;i<ncourse;i++)
		sum=sum+grades[i];

	double average=(sum/ncourse);
	
return average;
	
}
	


}


void sort(student a)
{	int hold;
    string holdl;
         
for ( int pass = 0; pass < a.ncourse - 1; pass++ )     
	for ( int j = 0; j < a.ncourse-pass- 1; j++ )           
		if ( (a.grades[j] < (a.grades[j+1] ) ))
			  {                     
				  hold = (a.grades[j]);
				  holdl=(a.courses[j]);
				  (a.grades[j]) = (a.grades[j + 1]);
				  (a.courses[j])=(a.courses[j+1]);
				  
				  (a.grades[j + 1]) = hold;  
				  (a.courses[j+1])=holdl;

	}
}