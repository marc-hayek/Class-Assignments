//Marc Hayek
//200902319
#include<iostream>
using namespace std;
#include<cmath>

#include<string>
#include <iomanip>

//Excersise 1
//a)
//int capitalcount(string s);
//
//void main()
//{ 
//	string s1;
//	cout<<"Please enter a sentence: "<<endl<<endl;
//	getline(cin,s1);
//	cout<<"The number of capital letters in your sentence is: "<<capitalcount(s1)<<endl<<endl;
//}
//
//int capitalcount(string s)
//{ int i=0;
//  int j=0;
//  string::size_type length1;
//  length1=s.length();
//
//  for(i=1;i<=length1;i++)
//  {
//   if ((s[i]>='A')&&(s[i]<='Z'))
//	   j++;}
//   return j;}

////b
//void main()
//{	
//	string str;
//	string s1="fun";
//	string::size_type length1;
//	cout<<"Enter a sentencee containing the word \"fun\": "<<endl<<endl;
//	getline(cin,str);
//	int i=0;
//	length1=str.length();
//
//
//	string::size_type p;
//	p=str.find(s1);
//
//	cout<<p<<endl;
//	cout<<length1<<endl;
//
//
//	if(p==string::npos)
//		cout<<"\nThe string does not contain the word fun"<<endl;
//	else if(str==s1)
//	{	cout<<"\nThe string does contain the word fun"<<endl<<endl;
//	cout<<"It is a seperate word"<<endl<<endl;}
//	else
//	{cout<<"The sentence does contain the word fun"<<endl<<endl;
//
//	if((p==0)&&(str[3]!=' '))
//		cout<<"It is part of a bigger word"<<endl;
//	else if((p==0)&&(str[3]==' '))
//		cout<<"It a seperate word"<<endl;
//	else if(((str[p-1]!=' ')||(str[p+3]!=' '))&&(p!=length1-3))
//		cout<<"It is part of a bigger word"<<endl;
//	else if(((str[p-1]!=' ')&&(p=length1-3)))
//		cout<<"It is part of a bigger word"<<endl;
//	else
//		cout<<"It is a seperate word"<<endl;
//}
////
//}
//
////c
//
//void reverseString(string &s);
//
//void main()
//{
//	string s;
//	cout<<"Please enter a sentence: ";
//	getline(cin,s);
//	cout<<endl;
//	reverseString(s);
//	cout<<"The string you entered in reverse is: "<<endl<<endl;
//	cout<<s<<endl;
//	cout<<endl;
//}
//
//void reverseString(string &s)
//{
//	string::size_type length1;
//	string str1=s;
//	length1=s.length();
//	int i=0;
//	for(i=0;i<length1;i++)
//	{ str1[i]=s[length1-i-1];}
//
//	s=str1;
//}
//
////Excersise 2
//
//double product(double a[], double b[],int size);
//double module(double a[],int size);
//
//void main()
//{	
//	const int size=3;
//	double a0[size];
//	double a1[size];
//
//	int i=0;
//	cout<<"Enter the respective coordinates of the first vector: "<<endl<<endl;
//	for(i=0;i<size;i++)
//		cin>>a0[i];
//	cout<<"Enter the respective coordinates of the second vector: "<<endl<<endl;
//	for(i=0;i<size;i++)
//		cin>>a1[i];
//	cout<<"The product of the two vectors is: "<<endl<<endl;
//
//	cout<<product(a0,a1,size)<<endl<<endl;
//
//	cout<<"The module of the first vector is: "<<endl<<endl;
//
//	cout<<module(a0,size)<<endl<<endl;
//
//	
//	cout<<"The module of the second vector is: "<<endl<<endl;
//
//	cout<<module(a1,size)<<endl<<endl;
//
//	const int row=5;
//	const int column=3;
//	double A[row][3];
//	int j=0;
//
//	cout<<"Enter the values for the two dimensional array A: "<<endl<<endl;
//
//	for(i = 0; i < row; i++)
//	    for(j = 0; j < column; j++)
//	    	    cin>>A[i][j];
//
//	cout<<"\nThe elements of the array A are: "<<endl<<endl;
//	
//	
//
//    for (i = 0; i < row; i++)
//    {
//        for (j = 0; j < column; j++)
//	      cout << setw(5) << A[i][j] << " ";
//
//        cout << endl;
//    }
//
//	double large=module(A[0],size);
//	int f=1;
//	for(i=1;i<5;i++)
//	{	if(module(A[i],size)>large)
//		{large=module(A[i],size);
//			f=i+1;}
//	}
//
//	cout<<"\nThe largest module is that of row "<<f<<" with a module of: "<<large<<endl<<endl;
//
//
//
//}
//	 
//double product(double a[], double b[], int size)
//{
//	int j=0;
//	double sum=0;
//	for(j=0;j<size;j++)
//	{ sum= sum + a[j]*b[j];}
//	return sum;}
//
//double module(double a[],int size)
//{
//	int j=0;
//	double sum=0;
//	for(j=0;j<size;j++)
//		sum=sum+ a[j]*a[j];
//	return sqrt(sum);
//}
//
//
////Excersise 3
//
//class Vector
//{
//	private:
//	double x;
//	double y;
//	double z;
//	
//	public:
//	Vector();
//	Vector(double x, double y, double z);
//	Vector(const Vector &r) { *this=r;}
//	
//	Vector sum(Vector b);
//	double product(Vector b);
//	double module();
//	void print()
//	{cout<<"("<<x<<","<<y<<","<<z<<")";}
//
//};
//
//void main()
//{
//	Vector a(1,2,3);
//	Vector b(2,3,4);
//	Vector c;
//
//	c=a.sum(b);
//	cout<<"The sum of the 2 vectors is: "<<endl;
//	c.print();
//	cout<<endl<<endl;
//
//	cout<<"The product of the 2 vectors is: "<<endl;
//
//	cout<<a.product(b)<<endl<<endl;
//
//	if(a.module()>b.module())
//		cout<<"The module of vector a is larger and is = "<<a.module();
//	if(b.module()>a.module())
//		cout<<"The module of vector b is larger and is = "<<b.module();
//
//	cout<<endl<<endl;
//
//    
//
//
//
//
//}
//
//Vector::Vector()
//{
//	x=0;y=0;z=0;
//}
//
//Vector::Vector(double i, double j, double f)
//{
//	x=i;
//	y=j;
//	z=f;
//}
//
//Vector Vector::sum(Vector b)
//{ Vector temp(((x+b.x)),(y+b.y),(z+b.z));
//  return temp;
//}
//
//  double Vector::module()
//{
//	return sqrt(((x)*(x))+((y)*(y))+((z)*(z)));}
//
//double Vector::product(Vector b)
//{
//	return(((x)*(b.x))+((y)*(b.y))+((z)*(b.z)));
//}
//
//  
//
//
//
//
