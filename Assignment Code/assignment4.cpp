//Marc Hayek
//200902319
//#include<iostream>
//using namespace std;
//#include<cmath>

////Excersise 1
//
//double distance(double, double, double, double);
//
//void main()
//{ double x1, x2 , y1 ,y2,d;
//  cout<<"Please enter the coordinates of the first point seperated by a space\n";
//  cin>>x1>>y1;
//  cout<<"please enter the coordinates of the second point seperated by a space\n";
//  cin>>x2>>y2;
//  d=distance(x1,x2,y1,y2);
//  cout<<"The distance between the two points is:"<<d<<endl;
//}
//
//double distance(double x1, double x2, double y1, double y2)
//{ double x;
//  double y;
//  double d;
//  x=(x2)-(x1);
//  y= (y2)-(y1);
//  d= sqrt((x*x)+(y*y));
//
//  return d;
//
//}




////Excersise 2
//
//int prime(int);
//
//void main()
//{	int n;
//	int i=0;
//	for(n=2;n<=10000;n++)
//		if ((prime(n))==1)
//		{cout<<n<<endl;
//		 i++;}
//	cout<<"The number of prime numbers between 2 and 10,000 is: "<<i<<endl;
//	
//		
//			
//}
//
//int prime(int n)
//{
//	int m;
//	int i=0;
//	for(m=1;m<=n;m++)
//	
//	{
//		if(n%m==0)
//			i++;
//		
//	}
//
//	if(i==2)
//		return 1;
//	else
//		return 0;
//}
//
////Excersise 3
//
//int gcd(int,int);
//
//void main()
//{ int x;
//  int y;
//  cout<<"Please enter 2 integers: ";
//  cin>>x>>y;
//  cout<<"The greatest common divisor of the 2 integers is: "<<gcd(x,y)<<endl;
//}
//
//int gcd(int x, int y)
//{
//	if(y==0)
//		return x;
//	else
//		return gcd(y,x%y);
//}



//Excersise 4

//void doit(int &, int &, int &, int &);
//
//void main()
//{int a,b,c,d;
//cout<<"Enter 4 integers"<<endl;
//
//cout<<"a = ";
//cin>>a;
//cout<<endl;
//
//cout<<"b = ";
//cin>>b;
//cout<<endl;
//
//cout<<"c = ";
//cin>>c;
//cout<<endl;
//
//cout<<"d = ";
//cin>>d;
//cout<<endl;
//
//doit(a,b,c,d);
//
//cout<<"The new values are:"<<endl;
//
//cout<<"a = "<<a<<endl<<endl<<"b = "<<b<<endl<<endl<<"c = "<<c<<endl<<endl<<"d = "<<d<<endl<<endl;
//}
//
//
//void doit(int & a, int & b, int & c, int &  d)
//{   
//	int smallest;
//	smallest=a;
//	if(b<smallest)
//		smallest=b;
//	if(c<smallest)
//		smallest=c;
//    if(d<smallest)
//		smallest=d;
//	
//
//    if(a==smallest)
//		a=a*2;
//	if(b==smallest)
//		b=b*2;
//	if (c==smallest)
//		c=c*2;
//	if (d==smallest)
//		d=d*2;
//	
//}

