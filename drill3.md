#include "std_lib_facilities.h"	

int main()
{
	cout << "Enter the first name of the person you want to write to\n";     
	string name;
	cin >> name;
	cout << "Dear, " << name << '\n';
	
	cout << "How are you?\n I am fine. I miss you.\n Etc.\n Etc.\n";   
	
	cout << "Enter one of your friends name\n";
	string friend_name;
	cin >> friend_name;
	cout <<"Have you seen "<< friend_name <<" lately?\n"; 
	
	cout<< "The sex of your friend (f-female/m-male)\n";
	char friend_sex=0;
	cin >>friend_sex;
	if  (friend_sex=='m') {
	  cout<< "If you see "<<friend_name<<" please ask him to call me.\n"; }
	else if  (friend_sex=='f') {
	  cout << "If you see "<<friend_name<<" please ask her to call me.\n";}   

	cout << "Please enter "<<friend_name<<" age\n";
	int age;
	cin >> age;
	if (age<=0 or age>=110) {
		simple_error("you're kidding!");}
	cout <<"I hear you just had a birthday and you are "<<age<<" years old.\n";

	if (age>=1 and age<=12) {
		cout << "Next year you will be "<<age+1<<".\n"; }
	else if (age==17) {
		cout << "Next year you will be able to vote.\n"; }
	else if (age>70) {
		cout << "I hope you are enjoying retirement.\n"; }

	cout<< "Yours sincerely, \n \n Butcovan George\n";

	
}
