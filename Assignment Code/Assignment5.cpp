//Marc Hayek
//200902319
#include <iostream>
using namespace std;
#include <cmath>
#include <string>
void main()
{
		//Excersise 1(general)
	string s;
	string::size_type length1;
	cout<<"Please enter a sentence:"<<endl<<endl;
	getline(cin, s);
	string str1;
	string str2;
	cout<<"Please enter the word you want to replace:"<<endl;
	getline(cin,str1);
	cout<<"Please enter the word to replace with:"<<endl;
	getline(cin,str2);

	length1=str1.length();
	
	int i;
	string::size_type p;
	p=s.find(str1);
	
	
	for(i=0;p!=string::npos;i++)
	{	
		
		s.replace(p,length1,str2);
		
		p=s.find(str1,p);
		
	}
	
	cout<<"\nThe number of occurences of\""<<str1<<"\" in the sentence is: "<<i<<endl;
	cout<<"\nThe modified sentence is:"<<endl<<endl;
	cout<<s<<endl<<endl;

	////Excersise 1(specific)
	//string s;
	//cout<<"Please enter a sentence containing the word \"is\":"<<endl<<endl;
	//getline(cin, s);
	//string str1 = "is";
	////string str2 = "at";
	//int i;
	//int f=0;
	//string::size_type p;
	//p=s.find(str1);
	//
	//
	//for(i=0;p!=string::npos;i++)
	//{	
	//	f=p;
	//	s[f]='a';
	//	s[(f+1)]='t';
	//	
	//	
	//	p=s.find(str1,f);
	//	
	//}
	//
	//cout<<"\nThe number of occurences of \"is\" in the sentence is: "<<i<<endl;
	//cout<<"\nThe modified sentence is:"<<endl<<endl;
	//cout<<s<<endl<<endl;

	//Excersise 2
	
	
	//cout<<"Enter the number of students in the class: ";

	
	/*
	const int SIZE=5;
	int i=0;
	
	double quiz1[SIZE]={0};
	double quiz2[SIZE]={0};
	double finalExam[SIZE]={0};

	

	cout<<"Enter the grades of quiz 1: "<<endl;
	for(i=0;i<SIZE;i++)
		cin>>quiz1[i];
	
	cout<<"\nEnter the grades of quiz 2: "<<endl;
	for(i=0;i<SIZE;i++)
		cin>>quiz2[i];
	
	cout<<"\nEnter the grades of final exam: "<<endl;
	for(i=0;i<SIZE;i++)
		cin>>finalExam[i];
	
	double finalgrade[SIZE]={0};
	for(i=0;i<SIZE;i++)
		finalgrade[i]=((quiz1[i]*0.2)+(quiz2[i]*0.2)+(finalExam[i]*0.6));

	double lowest=101;
	for(i=0;i<SIZE;i++)
	{if(finalgrade[i]<lowest)
	lowest=finalgrade[i];}
	
	double highest=0;
	for(i=0;i<SIZE;i++)
	{if(finalgrade[i]>highest)
	highest=finalgrade[i];}
	
	double average,sum=0;
	for(i=0;i<SIZE;i++)
		sum=sum+finalgrade[i];
	average=(sum/SIZE);

	cout<<"\nThe lowest grade is: "<<lowest<<endl;
	cout<<"The highest grade is: "<<highest<<endl;
	cout<<"The class average is: "<<average<<endl;

	for(i=0;i<SIZE;i++)
		finalgrade[i] = 100.0 * pow(   (finalgrade[i]/100.0), log(78/100.0)/log(average/100.0)   );
	
	double newaverage;
	sum=0;
	for(i=0;i<SIZE;i++)
		sum=sum+finalgrade[i];
	newaverage=(sum/SIZE);

	cout<<"The new average is: "<<newaverage<<endl;

	

*/

	

     

}
	