

#include<iostream>
#include<string>
using namespace std;

double total_price; // for grand total
int number_of_tickets=0; // for total number of tickets
double price; // price of individual ticket
string destination; // for destination type
char roundtrip; // for roundtrip price
char student; // for student discount price
int b = 0; //validation of string


int main()
{
	//user information about how to use the program
	cout<<"***********************************************************************\n"
		<<"Enter the information for each ticket.\n"
		<<"When there are no more tickets to enter, type 'Done' for destination.\n"
		<<"***********************************************************************\n\n";

	do {

		while ( b == 0 ) 
		{
			cout<<"Enter Destination:"<<endl;
			cin>>destination;

	//destination prices &
				if ((destination=="Boston")||destination=="boston"){
						price = 350.00;
						b = 1;
					}
				else if ((destination=="London")||(destination=="london")){
						price = 600.00;
						b = 1;
					}
				else if ((destination=="Paris")||(destination=="paris")){
						price = 700.00;
						b = 1;
					}
				else if ((destination=="Tokyo")||(destination=="tokyo")){
						price = 800.00;
					}
				else if ((destination=="Done")||(destination=="done")) {
						b = 2;
						break;
				}
				else{
						b = 0;
					 }
		}
		if (b == 2) {break;}
	//roundtrip prices
			cout<<"Round Trip? [Y/N]:"<<endl;
			cin>>roundtrip;

				if ((roundtrip =='Y')||(roundtrip == 'y')){
						price += price *.6;
						cout<<"in if statement"<<endl;
					}
				else if ((roundtrip == 'N')||(roundtrip == 'n')){
						price = price;
					}
				else{
						cout<<"You've entered an invalid code."<<endl;
						continue;
					}
	//student dicount price
			cout<<"Student Discount? [Y/N]:"<<endl;
			cin>>student;

				if ((student =='Y')||(student == 'y')){
						price-= (price * .20);
						//price+=
					}
				else if ((student == 'N')||(student == 'n')){
						price = price;
				}
				else{
						cout<<"You've entered an invalid code.";
						continue;
					}

	//incrementing the # of tickets & the total price
			number_of_tickets++;
			total_price+=price;
			b = 0;
		}

	while ((destination != "Done")||(destination == "done"));
	
	//two decimal place precison + print result
	if(number_of_tickets>0){
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
	cout<<"------------------------------------------------------------------"<<endl
		<<"\t"<<number_of_tickets<<" tickets sold for a total price of: $ "<<total_price<<endl
		<<"------------------------------------------------------------------"<<endl;
	}
	return (0);
}