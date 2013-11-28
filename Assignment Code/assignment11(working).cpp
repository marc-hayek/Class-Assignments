//Marc Hayek
//200902319
#include <iostream>
using namespace std;
#include <cmath>
#include <string>

////Part 1
//
//class fine
//{
//
// public:
// int x;
// int y;
// fine();
// fine(int r, int s);
// void setfine(int a,int b);
// int getx();
// int gety();
// fine ( const fine &r){*this=r;}
//
//	bool operator==(const fine& c) const
//	{return(x*y)==((c.x)*(c.y));}
//	
//	 bool operator!=(const fine& c) const
//	{return(x*y)!=((c.x)*(c.y));}	
//
//	 bool operator>=(const fine& c) const
//	{return(x*y)>=((c.x)*(c.y));}
//
//	 bool operator<=(const fine& c) const
//	{return(x*y)<=((c.x)*(c.y));}
//
//	 bool operator>(const fine& c) const
//	{return(x*y)>((c.x)*(c.y));}
//
//	 bool operator<(const fine& c) const
//	{return(x*y)<((c.x)*(c.y));}
//
//
//	 fine operator+(const fine & c) const 
//   		 {return fine ((x+c.y),(y+c.x));} 
//	 
//	 fine operator-(const fine & c) const 
//   		 {return fine ((x-c.y),(y-c.x));}
//
//	 fine operator*(const fine & c) const 
//   		 {return fine ((x*c.y),(y*c.x));}
//	 
//	 fine operator/(const fine & c) const 
//   		 {return fine ((x/c.y),(y/c.x));}
//
//	
//     fine& operator=(const fine& c)
//	{    if (this != &c)  
//		{ x=c.x; y=c.y;}
//         return *this;  }
//
//	    
//     fine operator++()  
//   	 {++x; ++y; return *this;}
//
//	  
//     fine operator++(int i)  
//   		 {fine t;
//	      t=*this;
//		  x++; y++; return t;}
//
//	
//	 
//
//};
//
//ostream& operator<< (ostream& osObject, const fine& c)
//	{osObject<<"("<<c.x<<", " <<c.y<<")"; 
//		return osObject;}
//
//istream& operator>> (istream& isObject, fine &c)
//	{	char ch;
//		isObject>>ch   >>c.x>>ch>>c.y  >>ch;       
//		return isObject; }
//
//
//
//void main()
//{	
//	fine u(4,3);
//	fine v(2,1);
//
//	cout<<"Enter the corresponding values of fine number u and v in the form (a,b): "<<endl;
//
//	cin>>u>>v;
//	
//	cout<<"You entered: "<<endl<<endl;
//	cout<<u<<endl<<endl;
//	cout<<v<<endl;
//
//	
//
//	fine sum;
//	
//	/*fine mult(1,1);
//	for(int i=1;i<=9;i++)
//	{	
//		int j;
//		j=0;
//		for(j=1;j<=i;j++)
//		{	
//			mult=(mult*((u)/(v)));
//		}
//
//		sum=sum+mult;
//
//	}*/
//fine n(1,1), m(1,1);
//
//	for (int i=0; i<=8; i++)
//	{
//		
//		n=n*u;
//		m=m*v;
//		sum=sum+n/m;
//	}
//
//
//	
//	cout<<endl<<endl;
//	cout<<sum;
//	cout<<endl<<endl;
//
//}
//
//fine::fine()
//{ x=0;
//  y=0;
//}
//
//fine::fine(int r, int s)
//{ x=r;
//  y=s;
//}
//
//void fine::setfine(int a,int b)
//{x=a;
// y=b;
//}
// 
//int fine::getx()
//{ return x;}
//
//int fine::gety()
//{return y;}



//Part 2

class book
{  private:
	int isbn;
	int ncopies;
	int nout;
	int *students;
	

	public:
	book();
	book (int is,int nc);
	~book(){};
	book(const book& r) { *this=r;};
	int getisbn();
	int getncopies();
	int getnout();
	void getstudents(int s[]);
	void setisbn(int x);
	void setncopies(int n);
	void print();
	void reset();
	void borrow(int id);
	void breturn(int id);
};


void main()
{
	cout<<"Key:   |"<<endl<<"----   |"<<endl<<"y=Yes  |"<<endl<<"n=No   |"<<endl<<"========"<<endl<<endl;
	
	cout<<"\nWelcome:"<<endl;
	cout<<"========"<<endl<<endl;
	string y="y";
	string n="n";
	string s;

	const int size=5;
	book a[size];

	a[0].setisbn(1);
	a[0].setncopies(5);

    a[1].setisbn(2);
	a[1].setncopies(5);

	a[2].setisbn(3);
	a[2].setncopies(5);

	a[3].setisbn(4);
	a[3].setncopies(5);

	a[4].setisbn(5);
	a[4].setncopies(5);
	
	int studentid;

	int whil=0;
	int num=0;
	cout<<"Please enter the number of students using the system: "<<endl;
	cin>>num;
	cout<<endl;
	while(whil!=num)

	{cout<<"\nPlease enter your ID number: ";
	cin>>studentid;
	
	cout<<"\nDo you want to borrow a book? [y/n] : "<<endl;
	
	cin>>s;
	
	while((s!=y)&&(s!=n))
	{	
		cout<<"Invalid entry, please enter y or n"<<endl;
		cin>>s;
	}

	if(s==y)
	{cout<<"\nHow many books do you want to borrow? ";
	int y;
	cin>>y;
	for(int i=1;i<=y;i++)
	{cout<<"\n\nPlease pick which book you want to borrow: ";
	cout<<"\n\n1.Book 1"<<endl<<"2.Book 2"<<endl<<"3.Book 3"<<endl<<"4.Book 4"<<endl<<"5.Book 5"<<endl<<endl;
	int x;
	cin>>x;
	
	for(int l=1;l<2;l++)
	{
	if((x<=0)||(x>size))
		{cout<<"Invalid selection, please enter another selection: "<<endl;
		cin>>x;
		l--;
	}
	}

	if((a[x-1].getnout())==(a[x-1].getncopies()))
	{	cout<<"\nBook not available"<<endl;
		
		cout<<"\nDo you want to end your transaction? [y/n]"<<endl;
		cin>>s;
		
	 while((s!="y")&&(s!="n"))
	{	
		cout<<"Invalid entry, please enter y or n"<<endl;
		cin>>s;
	}
		if(s==n)
			i--;
		else
			break;
		}

	a[x-1].borrow(studentid);
	
	}
	}

	cout<<"\nDo you want to return a book? [y/n] : "<<endl;
	
	cin>>s;
	
	while((s!=y)&&(s!=n))
	{	
		cout<<"Invalid entry, please enter y or n"<<endl;
		cin>>s;
	}
	
	
	if(s==y)
	{cout<<"\nHow many books do you want to return? ";
	int y;
	cin>>y;
	for(int i=1;i<=y;i++)
	{cout<<"\n\nPlease pick which book you want to return: ";
	cout<<"\n\n1.Book 1"<<endl<<"2.Book 2"<<endl<<"3.Book 3"<<endl<<"4.Book 4"<<endl<<"5.Book 5"<<endl<<endl;
	int x;
	cin>>x;
	
	for(int l=1;l<2;l++)
	{
	if((x<=0)||(x>size))
		{cout<<"Invalid selection, please enter another selection: "<<endl;
		cin>>x;
		l--;
	}
	}

	if((a[x-1].getnout())==0)
		{	cout<<"\nBook already returned"<<endl;
		
		cout<<"\nDo you want to end your transaction? [y/n]"<<endl;
		cin>>s;
		
	 while((s!="y")&&(s!="n"))
	{	
		cout<<"Invalid entry, please enter y or n"<<endl;
		cin>>s;
	}
		
		if(s==n)
			i--;
		else
			break;
		
	}

	
	a[x-1].breturn(studentid);
	
	}
	}



	cout<<"\nDo you want to view information about a book? [y/n] : "<<endl;
	
	cin>>s;
	
	while((s!="y")&&(s!="n"))
	{	
		cout<<"Invalid entry, please enter y or n"<<endl;
		cin>>s;
	}


	if(s==y)
	{
		cout<<"\nWhich book would you like to view?: ";
		int y;
		cin>>y;
		if((y<=0)||(y>size))
		{cout<<"Invalid selection, please enter another selection: "<<endl;
		cin>>y;}
		a[y-1].print();
	
	
		for(int f=0;f<1;f++)
	{
	cout<<"Would you like to view another book's information? [y/n] :"<<endl;
		cin>>s;
	
	while((s!="y")&&(s!="n"))
	{	
		cout<<"Invalid entry, please enter y or n"<<endl;
		cin>>s;
	}


	if(s=="y")
	{
		cout<<"\nWhich book would you like to view?: ";
		int y;
		cin>>y;
		if((y<=0)||(y>size))
		{cout<<"Invalid selection, please enter another selection: "<<endl;
		cin>>y;}
		a[y-1].print();
		f--;
	}
	
	else
		f++;


	}
	
	}

	book *pa;
	pa=a;
	int w;

	cout<<"\nDo you want to search for a book by ISBN? [y/n] : "<<endl;
	
	cin>>s;
	
	while((s!="y")&&(s!="n"))
	{	
		cout<<"Invalid entry, please enter y or n"<<endl;
		cin>>s;
	}

	if(s==y)
	{


	for(int p=0;p<1;p++)
	{cout<<"\n\nEnter the ISBN you would like to search for:";
	
	
	
	cin>>w;
	int countert=0;
	for (int i=0; i<size; i++)
	{
		if (pa[i].getisbn()==w)
		{
			cout<<"The book with the desired ISBN is book #"<<i+1<<endl<<endl;
			countert++;
		}
		
	}
	if(countert==0)  
	{cout<<"The book with the desired ISBN does not exist!"<<endl<<endl;
		
	cout<<"Would you like to search for another ISBN? [y/n] :"<<endl;
		cin>>s;
	
	while((s!="y")&&(s!="n"))
	{	
		cout<<"Invalid entry, please enter y or n"<<endl;
		cin>>s;
	}


	if(s=="y")
	{
		p--;

	}

	}
		else
		{cout<<"Would you like to search for another ISBN? [y/n] :"<<endl;
			cin>>s;
		
		while((s!="y")&&(s!="n"))
		{	
			cout<<"Invalid entry, please enter y or n"<<endl;
			cin>>s;
		}

		if(s=="y")
			{
			p--;

			}
		}
		
		
		}
		}
		
	whil++;
	}

	cout<<"\nThank you!"<<endl<<endl;


	}

	book::book()
	{ isbn=0;
	  ncopies=0;
	  nout=0;
	  students=new int[nout];

	}
	book::book (int is,int nc)
	{
		isbn=is;
		ncopies=nc;
		nout=0;
		students=new int[nout];

	}

	int book::getisbn()
	{
		return isbn;

	}

	int book::getncopies()
	{return ncopies;
	}

	int book::getnout()
	{
		return nout;

	}

void book::getstudents(int s[])
{ 
	
	for(int i=0;i<nout;i++)
		students[i]=s[i];

}

void book::setisbn(int x)
{
	isbn=x;
}

void book::setncopies(int n)
{
	ncopies=n;
}

void book::print()
{
	cout<<"\nThe ISBN of the book is: "<<isbn<<endl<<endl;
	cout<<"The total number of copies available of the book is: "<<ncopies<<endl<<endl;
	cout<<"The total number of copies that are currently borrowed of the book is: "<<nout<<endl<<endl;
	
	if(nout==0)
	{	cout<<"The id numbers of the students who have borrowed a copy of the book are: "<<endl<<endl;
		cout<<"No IDs available"<<endl<<endl;
	}
	else
	{cout<<"The id numbers of the students who have borrowed a copy of the book are: "<<endl<<endl;
	
	for(int i=0;i<nout;i++)
		cout<<students[i]<<" ";
	cout<<endl<<endl;}
}

void book::reset()
{
	delete []students;
	nout=0;
	students=new int[nout];

}

void book::borrow(int id)
{ 
	if((ncopies-nout)!=0)
	{	int *p;
		p=new int[nout];
		for(int i=0;i<nout;i++)
			p[i]=students[i];
		delete []students;
		nout++;
		students=new int[nout];
		for(int i=0;i<(nout-1);i++)
			students[i]=p[i];
		students[nout-1]=id;
	}


	}

void book::breturn(int id)	
{	int counter=0;
	for(int i=0;i<nout;i++)
	{if(id==students[i])
		counter++;
	}

	if(counter!=0)
	{
	if(nout!=0)
	{int *p;
		p=new int[nout];
		for(int i=0;i<nout;i++)
			p[i]=students[i];
	delete[]students;
	int pos=0;
	for(int i=0;i<nout;i++)
	{	
		if(p[nout-1-i]==id)
		{pos=(nout-1-i);
		break;}
	}
	
	nout--;
	students=new int[nout];

	for(int i=0;i<pos;i++)
		students[i]=p[i];
	int j=pos;
	for(int i=pos+1;j<nout;j++,i++)
		students[j]=p[i];
	}
	}
}
	
	



