#include <iostream>
using namespace std;
int main()
{ 
int initialAmount,amounttosubtract,amounttoadd,total,diff,transfer,account,balance; // Initial amount of money
char choice;
string orignalpassword,enteredpassword;
cout << "Enter your Balance: ";
 cin >> initialAmount;
cout << endl;
cout<< "Welcome to the ATM Machine!" << endl; 
cout<<"create your password:";
cin>>orignalpassword;

bool ispasswordcorrect=false;
while(!ispasswordcorrect)
{
	cout<<"enter your password:\n";
	cin>>enteredpassword;
	if(orignalpassword==enteredpassword)
	{
		ispasswordcorrect=true;
	}
	else
	{
		cout<<"You have entered incorrect password please try again"<<" "<<endl;
	}
}
cout << "Initial balance: " << initialAmount << endl;
while (true)
{
	cout << "Menu:" << endl;
	cout << "1. deposit money" << endl;
 	cout << "2. withdraw Money" << endl; 
  	cout<<"3.transfer Money" <<endl;
	  cout << "4. Exit" << endl; 
  	cout << "Enter your choice: "; 
  	cin >> choice;
switch (choice)
{
case '1':
	cout<<"enter the amount you want to deposit: \n";
	cin>>amounttoadd;
total=initialAmount + amounttoadd;
cout << "Deposited"<<" "<<amounttoadd<<" "<<"to your Current balance: \n" << total << endl; 
break;
case '2':
	cout<<"enter the amount you want to withdraw:\n";
	cin>>amounttosubtract;
if (initialAmount > 0)
{
diff=initialAmount - amounttosubtract;
cout << "Withdrawn"<<" "<<amounttosubtract<<" "<< "From your balance:\n" <<diff<< endl;
}
else
{
cout << "Not enough balance to Withdraw"<< endl;
}
break;
case '3':
	cout<<"Enter the amount you want to transfer:\n";
	cin>>transfer;
	if(initialAmount<transfer)
	{
		cout<<"The amount you entered is incorrect try again later:\n";
	}
	else
	{
		
	cout<<"Enter the account number, you want to transfer money to:\n";
	cin>>account;
	balance= initialAmount-transfer;
	cout<<transfer<<" "<<"has been transfered to"<<" "<<account<<endl;
}
	break;
case '4':
cout << "Exiting the ATM. Thank you for using our service!" << endl;
return 0; 
default:
cout << "Invalid choice. Please try again."<<endl;
}
}
return 0;
}
