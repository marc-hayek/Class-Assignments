//Marc Hayek
//200902319
//#include<iostream>
//using namespace std;
//#include<cmath>
//#include<fstream>
//#include<string>
//void main()
//{
////	Excersise 1:
//
//	double radius;
//	double pi;
//	double diam;
//	double circum;
//	double areacirc;
//	ofstream outDatacirc;
//	pi=3.14159;
//
//	cout<<"Please enter the value of the radius of the circle:";
//	cin>>radius;cout<<endl;
//
//	diam=2*radius;
//	areacirc=pi*(pow(radius,2));
//	circum=pi*diam;
//	
//
//	cout<<"The area of the circle is = "<<areacirc<<endl;
//	cout<<"The diameter of the cirlce is = "<<diam<<endl;
//	cout<<"The circumferance of the circle is = "<<circum<<endl<<endl;
//
//	outDatacirc.open("C:\\Users\\Marc\\Documents\\Documents\\AUB\\EECE 230\\Module 2\\circle.txt",ios::out);
//	outDatacirc<<"The area of the circle is:"<<areacirc<<endl;
//	outDatacirc<<"The diameter of the cirlce is:"<<diam<<endl;
//	outDatacirc<<"The circumferance of the circle is:"<<circum<<endl;
//	outDatacirc.close();

	////Excersise 2:
	//
	//double width;
	//double length;
	//double perim;
	//double arearec;
	//ofstream outDatarec;

	//cout<<"Please enter the value of the length of the rectangle:";
	//cin>>length;
	//cout<<"Please enter the value of the width of the rectangle:";
	//cin>>width;cout<<endl;

	//arearec=length*width;
	//perim=(2*length)+(2*width);

	//cout<<"The area of the rectangle is = "<<arearec<<endl;
	//cout<<"The perimeter of the rectangle is = "<<perim<<endl<<endl;

	//outDatarec.open("C:\\Users\\Marc\\Documents\\Documents\\AUB\\EECE 230\\Module 2\\rectangle.txt",ios::out);
	//outDatarec<<"The area of the rectangle is:"<<arearec<<endl;
	//outDatarec<<"The perimeter of the rectangle is:"<<perim<<endl;
	//outDatarec.close();

//	//Excersise 3:
//		
//	ifstream inDatacirc;
//	ifstream inDatarec;
//	string s;
//	double areacirc,arearec,circum,perim;
//	inDatacirc.open("C:\\Users\\Marc\\Documents\\Documents\\AUB\\EECE 230\\Module 2\\circle.txt",ios::in);
//	 if (inDatacirc==0)
//			cout<<"Error opening circle.txt file\n";
//	 else
//	 {		
//	 getline(inDatacirc,s,':');
//	
//	 inDatacirc>>areacirc;
//getline(inDatacirc,s);
//	 getline(inDatacirc,s,':');
// 
//			inDatacirc>>circum;
//	 
//			inDatacirc.close();
//	}	
//	 
//	inDatarec.open("C:\\Users\\Marc\\Documents\\Documents\\AUB\\EECE 230\\Module 2\\rectangle.txt",ios::in);
//	 if (inDatarec==0)
//			cout<<"Error opening rectangle.txt file\n";
//	 else
//	 {					getline(inDatarec,s,':');
//			inDatarec>>arearec;
//		 getline(inDatarec,s,':');
//			inDatarec>>perim;
//	 
//			inDatarec.close();
//	}	
//
//	 cout<<"The area of the circle is = "<<areacirc<<endl;
//	 cout<<"The area of the rectangle is = "<<arearec<<endl<<endl;
//
//	 if (areacirc>arearec)
//
//		 cout<<"The area of the circle is larger than the area of the rectangle\n\n";
//	 else if (arearec>areacirc)
//		 
//		 cout<<"The area of the rectangle is larger than the area of the circle\n\n";
//	 else
//		 cout<<"The areas of the circle and rectangle are equal\n\n";
//		
//	 
//	 cout<<"The circumference of the circle is = "<<circum<<endl;
//	 cout<<"The perimeter of the rectangle is = "<<perim<<endl<<endl;
//
//	 if (circum>perim)
//		 
//		 cout<<"The circumference of the circle is larger than the perimeter of the rectangle\n\n";
//	 else if(perim>circum)
//		cout<<"The perimeter of the rectangle is larger than the circumference of the circle\n\n";
//	 else
//		cout<<"The perimeter of the rectangle and the circumference of the circle are equal\n\n";
//
//
//
//
//
//
//
//}