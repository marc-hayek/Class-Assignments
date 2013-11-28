//Marc Hayek
//200902319
#include <iostream>
using namespace std;
#include <cmath>
#include <string>

////Excersise 1
//void main()
//{
//	const int size=10;
//	const int size2=20;
//	int a[size]={0};
//	int b[size]={0};
//	int i;
//	int j;
//	int m;
//	int sum=0;
//
//	cout<<"Please enter 10 integers for array a:";
//	for(i=0;i<size;i++)
//		cin>>a[i];
//	for(i=0;i<size;i++)
//		sum=sum+a[i];
//	cout<<"\nThe sum of the elements of array 'a' is= "<<sum<<endl;
//
//	int large=a[0];
//	for(i=1;i<size;i++)
//	{	if(a[i]>large)
//			large=a[i];
//	}
//	
//	int small=a[0];
//	for(i=1;i<size;i++)
//	{
//		if(a[i]<small)
//			small=a[i];
//	}
//	cout<<"\nThe largest element in array 'a' is: "<<large<<endl;
//	cout<<"\nThe smallest element in array 'a' is: "<<small<<endl;
//
//	for(i=(size-1),j=0;i>=0&&(j<size);i--,j++)
//		b[j]=a[i];
//	cout<<"\nThe elements in array 'b' are listed as:"<<endl<<endl;
//	for(i=0;i<size;i++)
//		cout<<b[i]<<" ";
//	int c[size2]={0};
//	/*for(i=0,j=1,m=0;i<size2&&j<size2&&m<size2;i=(i+2),j=(j+2),m++)
//	{ c[i]=a[m];
//	  c[j]=b[m];
//	}*/
//	for(i=0;i<size;i++)
//		{c[(2*i)]=a[i];
//		c[(2*i+1)]=b[i];}
//	
//	cout<<"\n\nThe elements in array 'c' are listed as:"<<endl<<endl;
//	for(i=0;i<size2;i++)
//		cout<<c[i]<<" ";
//	cout<<endl<<endl;
//
//}

////Excersise 2
//void sort (int a[],int size);
//void main()
//{
//const int size=200;
//const int size2=400;
//int i;
//int a[size]={0};
//int b[size]={0};
//for(i=0;i<size;i++)
//{
//	a[i]=(i%13+i*i)%98;
//	b[i]=(i%11+i*i)%91; 
//}
//
//sort(a,size);
//
//cout<<"After sorting, the value of the 101 element in array 'a' is: "<<a[100]<<endl<<endl;
//
//int c[size2]={0};
//
//for(i=0;i<size;i++)
//{	c[i]=a[i];
//	c[(i+size)]=b[i];
//}
//sort(c,size2);
//
//int counter1=0;
//int counter2=0;
//int j;
//
//cout<<"After sorting, the value of the 201 element in array 'c' is: "<<c[200]<<endl<<endl;
//for(i=0;i<size2;i++)
//{	for(j=i;j>=0;j--)
//	{if(c[i]==c[j])
//	counter1++;}
//	 if(counter1==1)
//		 counter2++;
//
//	counter1=0;	
//}
//cout<<"The number of different elements in array 'c' is: "<<counter2<<endl<<endl;
//}
//
//void sort (int a[],int size)
//
//{	int hold; 
//         
//       for ( int pass = 0; pass < size - 1; pass++ )     
//          for ( int j = 0; j < size-pass- 1; j++ )           
//            if ( a[ j ] > a[ j + 1 ] ) {                     
//                hold = a[ j ];                                
//                a[ j ] = a[ j + 1 ];                          
//               a[ j + 1 ] = hold;   
//
//			}
//}

////Excersise 3
//void capitalize( char s1[]); 
//
//void main()
//{	
//	char s1[45]/*="/0"*/;
//	cout<<"Please enter a word so that the program changes all of its letters into capital letters:"<<endl<<endl;
//
//	cin.get(s1,45);
//	cout<<"\nThe capitilized word you entered is: "<<endl<<endl;
//
//	capitalize(s1);
//
//	cout<<s1<<endl<<endl;
//
//}
//
//
//void capitalize(char s1[])
//{	//string::size_type length1;
//	//string s;
//	//s=s1;
//	//length1=s.length();
//	int i=0;
//	for(i=0;i<45;i++)
//	{	
//		if((s1[i]>='a')&&(s1[i]<='z'))
//			s1[i]=(s1[i])+('A'-'a');
//	}
//}

////Excersise 4.1
//void main()
//{
//	const int size=20;
//	double a[size]={0};
//	cout<<"Please enter 20 numbers that are between 10 and 100 inclusive:"<<endl;
//	int x;
//	int i;
//	int j;
//	int n=0;
//	for(i=0;i<size;i++)
//	{ cin>>x;
//	  if((x<10)||(x>100))
//	  {cout<<"The number you entered is invalid! Please enter another number\n\n";
//	  i--;}
//	  else
//	  {
//		  a[i]=x;
//		  int counter1=0;
//		  int counter2=0;
//				for(j=i;j>=0;j--)
//				{if(a[j]==x)
//				counter1++;}
//				 if(counter1==1)
//					cout<<"The number you entered is: "<<x<<endl;
//				 else
//					 cout<<"The number has already been used"<<endl;
//				 n++;
//				  cout<<"Number of entries so far: "<<n<<endl<<endl;
//
//				counter1=0;	
//			}
//			
//
//	}
//}


////Excersise 4.2
//void main()
//{
//	const int size=20;
//	double a[size]={0};
//	cout<<"Please enter 20 numbers that are between 10 and 100 inclusive:"<<endl;
//	int x;
//	int i;
//	int j;
//	int n=0;
//	for(i=0;i<size;i++)
//	{ cin>>x;
//	  if((x<10)||(x>100))
//	  {cout<<"The number you entered is invalid! Please enter another number\n\n";
//	  i--;}
//	  else
//	  {
//		  
//		  int counter1=0;
//				for(j=i;j>=0;j--)
//				{if(a[j]==x)
//				counter1++;}
//				 if(counter1==0)
//				 {cout<<"The number you entered is: "<<x<<endl;
//				 n++;
//				 cout<<"Number of entries so far: "<<n<<endl<<endl;
//				 a[i]=x;}
//				 else
//				 {cout<<"The number has already been used, please enter another number:"<<endl<<endl;
//				 i--;}
//
//				counter1=0;	
//			}
//			
//
//	}
//}
//

//Excersise 4.3
void main()
{
	const int size=20;
	double a[size]={0};
	cout<<"Please enter 20 numbers that are between 10 and 100 inclusive:"<<endl<<endl;
	int x;
	int i;
	int j;
	int n=0;
	int m=0;
	for(i=0;i<size;i++)
	{ cin>>x;
	  if((x<10)||(x>100))
	  {cout<<"The number you entered is invalid! Please enter another number\n\n";
	  i--;}
	  else
	  {
		  
		  int counter1=0;
				for(j=i;j>=0;j--)
				{if(a[j]==x)
				counter1++;}
				 if(counter1==0)
				 {cout<<"The number you entered is: "<<x<<endl;
				 n++;
				 m++;
				 cout<<"Number of accepted entries so far: "<<n<<endl;
				 cout<<"Numbers entered: "<<m<<endl<<endl;
				 a[n-1]=x;}
				 else
				 {cout<<"The number has already been used, please enter another number:"<<endl;
				 m++;
				 cout<<"Numbers entered: "<<m<<endl<<endl ;}

				counter1=0;	
	  }
			

	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}


