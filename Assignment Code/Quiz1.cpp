//Marc Hayek
//200902319
#include<iostream>
using namespace std;
#include<cmath>
#include<fstream>
#include<string>

//Excersise 2
double CtoF( double c)
{ 
  return((1.8*c)+32);
}

//Excersise 3
double FtoC( double f)
{ 
  return((f-32)/1.8);
}

	
void main()
{	//Excersise 1
	double c;
	
	cout<<"Please enter the temperature in celcius to convert to farenheit: ";
	cin>>c;
	cout<<"The temperature in farenheit is: "<<((1.8*c)+32)<<endl<<endl;

    
	//Excersise 4

	cout<<"Please enter the temperatures in Celcius of the last 10 days:\n";
    int cold=0;
	int hot=0;
	int days=0;
	double sum=0;
	int i;
	double averagec;
	
	for(i=1;i<=10;i++)
	{cin>>days;
	 sum=sum+days;
	    if(days<10)
			cold++;
		else if(days>30)
			hot++;}

   cout<<"The number of hot days is = "<<hot<<endl;
   cout<<"The number of cold days is = "<<cold<<endl<<endl;

   averagec=((sum)/10);

   cout<<"The average temperature in celcius is = "<<averagec<<endl;
   cout<<"The average temperature in farenheit is = "<<(CtoF(averagec))<<endl<<endl;

   //Excersise 5

   ofstream outTemp;
   double temp;
   int counter;
   for(counter=1;counter<=1000;counter++)
   {
	temp=(3*counter%40);
	outTemp.open("C:\\Users\\Marc\\Documents\\Documents\\AUB\\EECE 230\\Module 2\\circle.txt",ios::app);
	outTemp<<temp<<endl;
	outTemp.close();
   }

   //Excersise 6

   ifstream inTemp;
   int m;
   double t;
   double sumtwo=0;
   int coldtwo=0;
   int hottwo=0;
   double averagectwo;
   string s;


     
	 if(inTemp==0)
			cout<<"Error opening temperature.tmp file\n";
	 else
	 {inTemp.open("C:\\Users\\Marc\\Documents\\Documents\\AUB\\EECE 230\\Module 2\\circle.txt",ios::in);
	 	for(m=1;m<=1000;m++)			
	 {
			inTemp>>t;
			getline(inTemp,s);
			
			sumtwo=sumtwo+t;

	    if(t<10)
			coldtwo++;
		else if(t>30)
			hottwo++;
	 }
	 }
	 
	inTemp.close();

			
	

   cout<<"The number of hot days is = "<<hottwo<<endl;
   cout<<"The number of cold days is = "<<coldtwo<<endl<<endl;

   averagectwo=((sumtwo)/1000);

   cout<<"The average temperature in celcius is = "<<averagectwo<<endl;
   cout<<"The average temperature in farenheit is = "<<(CtoF(averagectwo))<<endl<<endl;

  // Excersise 7
	   int temperature;

       
       cout<< "Enter the Temperatures in celcius" << endl
            << "Enter the EOF character to end input." << endl;
    
      cin>>temperature;
    // while((temperature)!=(EOF)){ // while (  (temperature= cin.get())!= EOF ) {
	  //while((temperature)!=(EOF)){
	  while ( !cin.eof()){

          switch ( temperature ) {  
    
             case 12:       
             case 16:
			 case 17:
			 case 2:
			 case 6:
			 case 7:
				 cout<<"The letter corresponding to that temperature is: A"<<endl;    
                break;       
    
             case 22:       
             case 26:
			 case 27:    
                cout<<"The letter corresponding to that temperature is: B"<<endl ; 
                break;       
    
             case 21:       
             case 14:
			 case 37: 
               cout<<"The letter corresponding to that temperature is: J" <<endl;    
                break; 


    
             default:         
                cout<<"The letter corresponding to that temperature is: X"<<endl;
                break;        
				
		  }
			cin>>temperature;
		}
	 
//   //cin>>temperature;
//       } 
//double temp1;
//	int x1;
//	cin>>temp1;
//     
//        while ( !cin.eof())
//		{	
//			x1=floor(temp1);
//			switch ( x1 ) 
//		  {  
//			case 12:
//			case 16:
//			case 17:
//				cout<<"A"<<endl;
//				break;
//			
//			case 22:
//			case 26:
//			case 27:
//				cout<<"B"<<endl;
//				break;
//			
//			case 2:
//			case 6:
//			case 7:
//				cout<<"A"<<endl;
//				break;
//			
//			case 21:
//			case 14:
//			case 37:
//				cout<<"J"<<endl;
//				break;
//			
//			default:
//				cout<<"X"<<endl;
//				break;    
//		  }
//		  cin>>temp1;
//		}
//
//	return 0;
    

      







   
	    
	    

}

		