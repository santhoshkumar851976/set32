#include<iostream>
#include<cstdlib>
#include<cstring>
class set31
{
   private:
   	string name;
   	char type[10];
   	long long accnum;
   	long long amt=0;
   	long long tot=0;
   	int pin;
   public:
     void setvalue()
	 {
	 	cout<<"\nEnter the name:";
	 	cin.ignore();
	 	getline(cin,name);
	 	
	 	cout<<"\nEnter the account number: ";
	 	cin>>accnum;
	 	if(accnum<=0)
	 	{
	 		cout<<"\nInvalid A/C num. Enter positive number";
	 		return;
		 }
		
		cout<<"\nEnter the account type: ";
		cin>>type;
		
		cout<<"\nEnter the 4-digit PIN number: ";
		cin>>pin;
		if(pin<1000 || pin>9999)
		{
			cout<<"\nEnter 4 digit pin";
		}
		
		cout<<"\nEnter the Balance: ";
		cin>>tot;
		 }	
		 
		void dep()
		{
			int opin;
			cout<<"\nEnter the pin number: ";
			cin>>opin;
			if(opin!=pin)
			{
				cout<<"Invalid pin";
				return;
			}
			cout<<"\nEnter the deposit amount: ";
			cin>>amt;
			if(amt<=0)
	 	{
	 		cout<<"\nEnter positive amount";
	 		return;
		 }
		 tot+=amt;
		 cout<<"\nDeposited successfully and total bal is "<<tot;
		}
		void withdraw()
		{
			int opin;
			cout<<"\nEnter the pin number: ";
			cin>>opin;
			if(opin!=pin)
			{
				cout<<"Invalid pin";
				return;
			}
			cout<<"\nEnter the withdrawal amount: ";
			cin>>amt;
			if(amt<=0 || amt>tot)
	 	{
	 		cout<<"\nInsufficient bal";
	 		return;
		 }
		 tot-=amt;
		 cout<<"\nwithdrawal successfully and total bal is "<<tot;
		}
		void bal()
		{
		    int opin;
			cout<<"\nEnter the pin number: ";
			cin>>opin;
			if(opin!=pin)
			{
				cout<<"Invalid pin";
				return;
			}
			cout<<"\nName: "<<name;
			cout<<"\nBalance: "<<tot;	
		}
		void changepin()
		{
			int opin,npin;
			cout<<"\nEnter the old pin number: ";
			cin>>opin;
			if(opin!=pin)
			{
				cout<<"Invalid pin";
				return;
			}
			cout<<"\nEnter the new pin: ";
			cin>>npin;
				if(npin<1000 || npin>9999)
		{
			cout<<"\nEnter 4 digit pin";
		}
		pin=npin;
		cout<<"\nPin changed successfully";
		}
}
int main()
{
	int choice;
	set31 b;
	while(1)
	{
		cout<<"\nWelcome";
		cout<<"\n1.Enter the bank details: ";
		cout<<"\n2.Deposit";
		cout<<"\n3.Withdraw";
		cout<<"\n4.Balance enquiry";
		cout<<"\nEnter the choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				b.setvalue();
				break;
			case 2:
				b.dep();
				break;
			
			case 5:
				b.changepin();
				break
			default:
				cout<<"Enter the appropriate choice";
				break;
		}
	}
	return 0;
}
