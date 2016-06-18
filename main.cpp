#include <cstdlib>
#include <iostream>

using namespace std;
int menu();
void initFees(int classNum);

int main()
{
	menu();
	return 0;
}
int menu()
{
	int classNum, choice;
	bool exit=false;

	do
	{
	cout<<"*** Menu ***\n";
	cout<<"(1) Grip Initiation\n";
	cout<<"(2) Crafts Service Initiation\n";
	cout<<"(3) Medic Initiation\n";
	cout<<"(4) Marine Initiation\n";
	cout<<"(5) WSS Initiation\n";
	cout<<"(6) Redisplay menu.\n";
	cout<<"(7) Quit\n";
	cin>>choice;
	cout<<endl;

	switch(choice)
	{
	case(1):
		initFees(classNum=1);
		break;
		
	case(2):
		initFees(classNum=2);
		break;
	case(3):
		initFees(classNum=3);
		break;

	case(4):
		initFees(classNum=4);
		break;

	case(5):
		initFees(classNum=5);
		break;

	case(6):
		continue;  //redisplay menu
		break;

	case(7):
		exit=true;
		break;
	}  // end switch
	} while(exit!=true);  //end do...while

	return 0;
}  //end menu


void initFees(int classNum)
{
	int year;

		cout<<"Please enter the current year: ";
		cin>>year;

		//cout<<"Please enter the classification # (grip=1, cs=2, med=3, marine=4, wss=5): ";  //class. determines which func. to use
		//cin>>classNum;
		cout<<"\n\n";

		if (classNum==1)
		{
			cout<<"Grip: \t";
			cout<<"Current Initiation Fees = $"<<(((year-2010)*100)+4100)<<"\n";					//current yr - start yr(2010)
																									//* increase of $100/yr =
																									//$ amount increase since the start yr
																									//+ $4100 = Init Fee for current yr

			cout<<"\t12 monthly payments = $"<<((((year-2010)*100)+4100)/12)<<"\n\n\n\n";			//current initiation fees divided by 12 = monthly payments
		}

		if (classNum==2)
		{
			cout<<"C/S: \t";
			cout<<"Current Initiation Fees = $"<<(((year-2010)*100)+3900)<<"\n";					//current yr - start yr(2010)
																									//* increase of $100/yr =
																									//$ amount increase since the start yr
																									//+ $3900 = Init Fee for current yr

			cout<<"\t12 monthly payments = $"<<((((year-2010)*100)+3900)/12)<<"\n\n\n\n";			//current initiation fees divided by 12 = monthly payments
		}

		if (classNum==3)
		{
			if (year==2013)
			{
				cout<<"Medic: \t";
				cout<<"Current Initiation Fees = $2600\n";
				cout<<"\t12 monthly payments = $"<<(2600/12)<<"\n\n\n\n";
			}

			if (year>2013)
			{
				cout<<"Medic: \t";
				cout<<"Current Initiation Fees = $"<<(((year-2014)*100)+4300)<<"\n";					//current yr - start yr(2014)
																										//* increase of $100/yr =
																										//$ amount increase since the start yr
																										//+ $4300 = Init Fee for current yr
	
				cout<<"\t12 monthly payments = $"<<((((year-2014)*100)+4300)/12)<<"\n\n\n\n";			//current initiation fees divided by 12 = monthly payments
			}
			else
			{
				cout<<"\tThe Iniation Fee for Set Medics only covers from 2013-future. Please re-enter the year.\n\n\n\n";
			}
		}

		if (classNum==4)
		{
			cout<<"Marine: \t";
			cout<<"Current Initiation Fees = $"<<(((year-2010)*100)+3000)<<"\n";					//current yr - start yr(2010)
																									//* increase of $100/yr =
																									//$ amount increase since the start yr
																									//+ $3000 = Init Fee for current yr

			cout<<"\t12 monthly payments = $"<<((((year-2010)*100)+3000)/12)<<"\n\n\n\n";			//current initiation fees divided by 12 = monthly payments
		}

		if (classNum==4)
		{
			cout<<"WSS: \t";
			cout<<"Current Initiation Fees = $"<<(((year-2010)*100)+800)<<"\n";						//current yr - start yr(2010)
																									//* increase of $100/yr =
																									//$ amount increase since the start yr
																									//+ $800 = Init Fee for current yr

			cout<<"\t12 monthly payments = $"<<((((year-2010)*100)+800)/12)<<"\n\n\n\n";			//current initiation fees divided by 12 = monthly payments
		}
	
}