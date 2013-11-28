//Marc Hayek
//200902319
#include <iostream>
using namespace std;
#include <cmath>
#include <string>

////Excersise 1
//
//class complex
//{
//	private:
//	double real;
//	double image;
//
//	public:
//	complex () { real=0.0; image=0.0;}
//		complex(double x, double y) 
//			{ real=x; image=y;}
//	complex add(const complex f)
//	{complex temp((real +f.real),(image+f.image));
//	return temp;}
//	complex sub(const complex f)
//	{complex temp((real -f.real),(image-f.image));
//	return temp;}
//
//	void print()
//	{cout<<"("<<real<<","<<image<<")";}
//
//
//};
//
//void main()
//{	double l,i,p,r;
//	
//	
//
//	cout<<"Please enter the real part of a number followed by its imaginary part: "<<endl;
//	cin>>l;
//	cin>>i;
//	complex a(l,i);
//	cout<<"\nThe complex number you entered is:"<<endl;
//	a.print();
//	cout<<endl<<endl;
//
//	cout<<"Please enter the real part of another number followed by its imaginary part: "<<endl;
//	cin>>p;
//	cin>>r;
//	cout<<"\nThe complex number you entered is:"<<endl;
//	complex b(p,r);
//	b.print();
//	cout<<endl<<endl;
//	
//	
//	
//	complex c;
//	
//	c=a.add(b);
//
//	cout<<"The sum of the two complex numbers is:"<<endl;
//
//	a.print();
//	cout<<"+";
//	b.print();
//	cout<<"=";
//	c.print();
//	cout<<endl<<endl;
//
//
//	c=a.sub(b);
//
//	cout<<"The difference of the two complex numbers is:"<<endl;
//
//	a.print();
//	cout<<"-";
//	b.print();
//	cout<<"=";
//	c.print();
//	cout<<endl<<endl;
//
//}

//Excersise 2
class EECE230Student
{
private:
	int id, section, quiz1, quiz2, finalExam;
	static int counter;
public:
	EECE230Student();
	EECE230Student(int x, int y);
	~EECE230Student(){counter--;}
	EECE230Student(const EECE230Student &r){ id=r.id ; section=r.section; quiz1=r.quiz1; quiz2=r.quiz1; finalExam=r.finalExam; counter++;}
	static int getcounter();
	int getId ();
	void setId (int x);
	int getSection ();
	void setSection (int x);
	int getQuiz1 ();
	void setQuiz1 (int x, int& i);
	int getQuiz2 ();
	void setQuiz2 (int x, int& i);
	int getFinalExam ();
	void setFinalExam (int x, int& i);
	double quizAverage ();
	double finalGrade ();
	void displayGrade ();
	
};

int EECE230Student::counter=0;
void bubblesort(EECE230Student [],int );
double classaverage(EECE230Student [],int );
void main()
{
	const int size=4;
	int x;
	int j=0;
	EECE230Student ast[size];
	for(j=0;j<4;j++)
	{
	
	
	
	cout<<"Enter ID: ";
	cin>>x;
	ast[j].setId(x);
//	ast[j].getId(x);
	cout<<endl;
	
	cout<<"Enter Section: ";
	cin>>x;
	ast[j].setSection(x);
	//ast[j].getSection(x);
	cout<<endl;
	
	cout<<"Enter Quiz 1 grade: ";
	int i=0;
	while (i<1)
	{cin>>x;
	ast[j].setQuiz1(x, i);}
	//ast[j].getQuiz1(x);
	cout<<endl;
	
	cout<<"Enter Quiz 2 grade: ";
	i=0;
	while (i<1)
	{cin>>x;
	ast[j].setQuiz2(x, i);}
	//ast[j].getQuiz2(x);
	cout<<endl;
	
	cout<<"Enter Final Exam grade: ";
	i=0;
	while (i<1)
	{cin>>x;
	ast[j].setFinalExam(x, i);}
	//ast[j].getFinalExam(x);
	cout<<endl;
	
	cout<<"Quiz Average: "<<ast[j].quizAverage()<<endl<<endl;
	
	ast[j].displayGrade();
	cout<<endl;

	

	}
	bubblesort(ast,size);

	cout<<"After sorting, the final grades in ascending order are:"<<endl<<endl;
    
	for(j=0;j<size;j++)
		cout<<ast[j].finalGrade()<<" ";
	cout<<endl<<endl;

	cout<<"The class average is: "<<classaverage(ast,size)<<endl<<endl;
	

	cout<<"The number of objects created are: "<<EECE230Student::getcounter()<<endl<<endl;
}

EECE230Student::EECE230Student()
{
	id=0; section=0; quiz1=0; quiz2=0; finalExam=0; counter++;
}

EECE230Student::EECE230Student(int x, int y)
{
	id=x;
	section=y;
	counter++;
}
int EECE230Student::getId ()
{
	return id;
}

void EECE230Student::setId(int x)
{

	id=x;
}

int EECE230Student::getSection ()
{
	return section;
}

void EECE230Student::setSection (int x)
{

	section=x;
}

int EECE230Student::getQuiz1 ()
{
	return quiz1;
}

void EECE230Student::setQuiz1(int x, int& i)
{
	if (x<0 || x>100)
		{
			cout<<"This is an invalid entry! Enter a new one."<<endl;
			i=0;
		}
	else {i=1; quiz1=x;}
}

int EECE230Student::getQuiz2()
{
	return quiz2;
}

void EECE230Student::setQuiz2(int x, int& i)
{
if (x<0 || x>100)
		{
			cout<<"This is an invalid entry! Enter a new one."<<endl;
			i=0;
		}
else {i=1; quiz2=x;}
}

int EECE230Student::getFinalExam ()
{
	return finalExam;
}

void EECE230Student::setFinalExam(int x, int& i)
{
if (x<0 || x>100)
		{
			cout<<"This is an invalid entry! Enter a new one."<<endl;
			i=0;
		}
else {finalExam=x; i=1;}
}

double EECE230Student::quizAverage()
{
	double average;
	average=(quiz1+quiz2)/2.0;
	return average;
}

double EECE230Student::finalGrade()
{
	double finalGrade;
	finalGrade=(quizAverage()+finalExam)/2.0;
	return finalGrade;
}

void EECE230Student::displayGrade()
{
	cout<<"ID: "<<id<<endl;
	cout<<"Final Grade: "<<EECE230Student::finalGrade()<<endl;
}

int EECE230Student::getcounter()
{ 
	return counter;
}

void bubblesort(EECE230Student a[],int size)

{	EECE230Student hold; 
         
       for ( int pass = 0; pass < size - 1; pass++ )     
          for ( int j = 0; j < size-pass- 1; j++ )           
 			  if ( (a[j].finalGrade()) > (a[j + 1].finalGrade()) ) 
			  {                     
				   hold = (a[j]);                                
				  (a[j]) = (a[j + 1]);                          
				  (a[j + 1]) = hold;  

			  }
}

double classaverage(EECE230Student a[],int size)
{
   int i;
   double sum=0;

   for(i=0;i<size;i++)
   { sum=sum+(a[i].finalGrade());}

   double average;
   average=(sum/size);
   return average;
   }


