#include "std_lib_facilities.h"

int main()
{
	string sign;
	vector<double> number;
	while (sign != "|" ){
		cout<< "To exit type in (|)\n";
		cin>>sign;
		 if (sign=="|")
			 {break;}
		cout<<"Enter a number, then enter a mesurment(cm,m,in,ft)\n";
		double a;
		cin>>a>>sign;
		
			if (sign=="cm"){
				a = a/100;
				number.push_back(a);}
			else if (sign=="m"){
				number.push_back(a);}
			else if (sign=="in"){
				a = a/39.39;
				number.push_back(a);}
			else if (sign=="ft"){
				a = a/3.28;
				number.push_back(a);}
			else {
				cout<< "Wrong mesurment.\n";
				return 0; }
	


		cout<<"The value entered "<<a<<" m\n"; //éppen bevitt érték
			if (a<number[0]){
				cout<<a<<"m the smallest so far\n";}
		
		sort(number);		

	
		cout<<"The smaller value is: "<<number[0]<<"m\n";
		cout<<"The larger value is: "<<number.back()<<"m\n";
		
		
}	
		int sum = 0;
		 for (int i = 0; i < number.size(); i++) 
			sum += number[i];
			cout<<sum<<"m sum\n";		
		for (int i=0;i<number.size();i++){
			cout<<number[i]<<"m\t";}
			cout<<"\n";	

}
