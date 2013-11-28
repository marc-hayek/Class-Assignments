//Marc Hayek
//200902319
#include <iostream>
using namespace std;

//class time
//{friend int timeinseconds( int hours, int minutes, int seconds);
//
// friend void bubbleSort(time t[], int x);
//private:
//	int hr, min, sec;
//public:
//	time();
//	time(int x, int y, int z);
//	time (int x);
//	time (const time& c) {*this=c;}
//	void setHr(int x);
//	int getHr();
//	void setMin(int x);
//	int getMin();
//	void setSec(int x);
//	int getSec();
//	void print();
//	time add(time t);
//	bool compare(time t);
//
//	
//	
//    bool operator==(const time& c) const
//	{return(timeinseconds(hr,min,sec)==timeinseconds(c.hr,c.min,c.sec));}
//	
//	 bool operator!=(const time& c) const
//	{return(timeinseconds(hr,min,sec)!=timeinseconds(c.hr,c.min,c.sec));}	
//
//	 	 bool operator>=(const time& c) const
//	{return(timeinseconds(hr,min,sec)>=timeinseconds(c.hr,c.min,c.sec));}
//
//	 	 bool operator<=(const time& c) const
//	{return(timeinseconds(hr,min,sec)<=timeinseconds(c.hr,c.min,c.sec));}
//
//	 	 bool operator>(const time& c) const
//	{return(timeinseconds(hr,min,sec)>timeinseconds(c.hr,c.min,c.sec));}
//
//	 	 bool operator<(const time& c) const
//	{return(timeinseconds(hr,min,sec)<timeinseconds(c.hr,c.min,c.sec));}
//
//	
//	
//
//
//	
//};
//int timeinseconds( int hours, int minutes, int seconds);
//void bubbleSort(time t[], int x);
//
//
//  
//	
//
//int main()
//{
//	int x;
//	cout<<"Enter a time in seconds:"<<endl;
//	cin>>x;
//	int h=(x/3600)%24;
//	int m=(x/60)%60;
//	int s=x%60;
//	cout<<"The time you entered is (h:m:s):  "<<h<<":"<<m<<":"<<s<<endl;
//	cout<<"Enter time:"<<endl<<"h: ";
//	int h1, m1, s1;
//	cin>>h1;
//	cout<<"m: ";
//	cin>>m1;
//	cout<<"s: ";
//	cin>>s1;
//	cout<<"The time in seconds is: "<<timeinseconds(h1, m1, s1)<<endl;
//	
//	const int size=10;
//	time t[10];
//	int hr, min, sec;
//	cout<<"Enter the duration required to complete "<<size<<" tasks, not exceeding 3 hours:"<<endl<<endl;
//	for (int i=0; i<size; i++)
//	{
//		cout<<"Task #"<<i+1<<":"<<endl;
//		cout<<"hr: ";
//		cin>>hr;
//		cout<<"min: ";
//		cin>>min;
//		cout<<"sec: ";
//		cin>>sec;
//		if(timeinseconds(hr,min,sec)>3*60*60)
//		{cout<<"Invalid entry, please reenter values: ";
//		i--;}
//		else
//		t[i].setHr(hr);
//		t[i].setMin(min);
//		t[i].setSec(sec);
//		cout<<endl<<endl;
//	}
//	time sum(0, 0, 0);
//	for(int i=0; i<size; i++)
//		sum=sum.add(t[i]);
//	cout<<"The sum is:"<<endl;
//	sum.print();
//	cout<<endl;
//	bubbleSort(t, size);
//	cout<<"\nThe highest 2 are:"<<endl;
//	for (int i=size-1; i>size-3; i--)
//		t[i].print();
//
//	time f(4,5,7);
//	time g(4,5,7);
//	if(f==g)
//		cout<<"\n\nThey are equal"<<endl<<endl;
//	
//
//	time p(4,5,6);
//	time l(4,5,7);
//	if(p!=l)
//		cout<<"They are not equal"<<endl<<endl;
//	if(p<l)
//		cout<<"It is less"<<endl<<endl;
//	if(l>p)
//		cout<<"It is greater"<<endl<<endl;
//	if(p<=l)
//		cout<<"It is less or equal "<<endl<<endl;
//	if(l>=p)
//		cout<<"It is greater or equal "<<endl<<endl;
//
//
//	return 0;
//
//
//
//	
//	
//}
//int timeinseconds(int hours, int minutes, int seconds)
//{
//	return (hours*3600)+(minutes*60)+seconds;
//}
//time::time()
//{
//	hr=0; min=0; sec=0;
//}
//time::time(int x, int y, int z)
//{
//	if (x<24)
//		hr=x;
//	else hr=x%24;
//	if (y<60)
//		min=y;
//	else {min=y%60; hr+=y/60;}
//	if (z<60)
//		sec=z;
//	else {sec=z%60; min+=z/60;}
//}
//time::time(int x)
//{
//	hr=(x/3600)%24;
//	min=(x/60)%60;
//	sec=x%60;
//}
//int time::getHr()
//{return hr;}
//void time::setHr(int x)
//{
//	hr=x%24;
//}
//int time::getMin()
//{return min;}
//void time::setMin(int x)
//{
//	hr=hr+x/60;
//	min=x%60;
//}
//int time::getSec()
//{return sec;}
//void time::setSec(int x)
//{
//	min=min+x/60;
//	sec=x%60;
//	hr=hr+min/60;
//	min=min%60;
//}
//void time::print()
//{cout<<hr<<":"<<min<<":"<<sec<<endl;}
//time time::add(time t)
//{
//	time c;
//	c.hr=hr+t.hr;
//	c.hr=c.hr%24;
//	c.min=min+t.min;
//	c.hr=c.hr+(c.min)/60;
//	c.min=c.min%60;
//	c.hr=c.hr%24;
//	c.sec=sec+t.sec;
//	c.min=c.min+(c.sec)/60;
//	c.sec=c.sec%60;
//	c.hr=c.hr+(c.min)/60;
//	c.min=c.min%60;
//	return c;
//}
//bool time::compare(time t)
//{
//	if (hr>t.hr)
//		return true;
//	else if (hr==t.hr)
//	{
//		if (min>t.min)
//			return true;
//		else if (min==t.min)
//		{
//			if (sec>t.sec)
//				return true;
//			else return false;
//		}
//		else return false;
//	}
//	else return false;
//}
//
//void bubbleSort(time t[], int x)
//{
//	time hold;
//    for ( int pass = 0; pass < x - 1; pass++ )     
//		for ( int j = 0; j < x -pass- 1; j++ )           
//			if ( t[j].hr> t[j+1].hr ) 
//			{                     
//				hold = t[ j ];                                
//                t[j] = t[j+1];                          
//				t[j+1] = hold; 
//			}
//			else
//			if(t[j].hr== t[j+1].hr && t[j].min> t[j+1].min)
//				{                     
//				hold = t[ j ];                                
//                t[j] = t[j+1];                          
//				t[j+1] = hold; 
//			}
//			else
//				if(t[j].hr== t[j+1].hr && t[j].min== t[j+1].min && t[j].sec> t[j+1].sec)
//				{                     
//				hold = t[ j ];                                
//                t[j] = t[j+1];                          
//				t[j+1] = hold; 
//			}
//
//
//
//}

////part 1
//class smartA
//{
//	friend ostream& operator<< (ostream&,const smartA& ); 
//
//	friend istream& operator>> (istream&,smartA& );
//public:
//	int *p, size;
//	smartA (int x=10){size=x;p=new int[size];} 
//	smartA (int a[], int x=10 ) {size =x; for (int i=0; i<size; i++) p[i]=a[i];}
//	smartA (const smartA &a) {*this=a;}
//
//	void getsmartA(int a[], int &sizea) {sizea=size; for (int i=0; i<size; i++){a[i]=p[i];}}
//	void setsmartA( const int a[],int sizea) {size=sizea; delete []p; p=new int [sizea]; for (int i=0; i<size; i++) p[i]=a[i];}
//	void printsmart ();
//	
//	void operator=(const smartA& c)
//{
//	size=c.size;
//	p= new int [size];
//
//	for(int j=0;j<size;j++)
//		p[j]=c.p[j];
//}
//
//	
//
//smartA operator+(int x)
//{
//	smartA c;
//	c.size=size+1;
//	c.p= new int [c.size];
//	for(int j=0;j<size;j++)
//		c.p[j]=p[j];
//
//	c.p[c.size-1]=x;
//	return c;
//}
//
//	smartA operator+ (const smartA& r)
//{
//	smartA c;
//	c.size=size+r.size;
//	c.p= new int [c.size];
//	for(int j=0;j<size;j++)
//		c.p[j]=p[j];
//	for(int j=0;j<r.size;j++)
//		c.p[j+size]=r.p[j];
//	return c;
//}
//
//
//
//
//
//
//};
//
//istream& operator>>(istream& is,smartA& c)
//{ int s;
//  int *z;
// is >>s;
// z= new int [s];
// for(int j=0;j<s;j++)
// { is>>z[j];}
//
// c=smartA(z,s);
// return is;
// } 
//
//
//ostream& operator<<(ostream& os,const smartA& c)
// {	 int counter=0;
//	 os<<"The size of the array is: "<< c.size <<endl<<"The array is: "<<endl;
//	 for(int j=0;j<c.size;j++)
//	{os<<c.p[j]<<" ";
//	counter++;
//	}
//	os<<endl;
// return os;
// } 
//
//int main ()
//{
//	int c[5]={1, 2, 3, 4, 5};
//	int c1[3]={1,2,3};
//	smartA a,b;
//	a.setsmartA (c, 5);
//	b.setsmartA (c1, 3);
//	smartA d;
//	d=a;
//	cout<<d;
//
//	cout<<endl;
//	smartA e,f;
//	e=a+b;
//	cout<<endl;
//	cout<<e;
//	
//	cout<<endl;
//	a=d;
//	
//	cout<<endl;
//	f=a+8;
//	cout<<f;
//
//	/*smartA k;
//	cout<<"Enter the components of the array : "<<endl;
//	
//	cin>>k;
//	
//	cout<<k;*/
//
//	return 0;
//
//}
//
//void smartA::printsmart()
//{
//	cout<<"The size of the array is: "<<size<<endl;
//
//	cout<<"The components of the array are: "<<endl;
//	for(int j=0;j<size;j++)
//		cout<<p[j]<<" ";
//	cout<<endl;
//}

