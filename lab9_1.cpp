#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double Loan;
double Interest, x;
double Payment;
double PrevBalance;
double Total;
double NewBalance;
int YearLeft = 1;

int main(){	
	cout << "Enter initial loan: ";
	cin >> Loan;
	cout << "Enter interest rate per year (%): ";
	cin >> x;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	PrevBalance = Loan;
	Total = PrevBalance;
	Interest = PrevBalance*(x/100);
	Total += Interest;
	if(Total < Payment){
			Payment = Total;
		}
	NewBalance = Total - Payment;

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << YearLeft; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	
	YearLeft++;

	while (NewBalance > 0){

		
		PrevBalance = NewBalance;
		Interest = PrevBalance*(x/100);
		Total = PrevBalance;
		Total += Interest;
		if(Total < Payment){
			Payment = Total;
		}

		NewBalance = Total - Payment;
		
		

		//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << YearLeft; 
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << Interest;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";	
		
	


		YearLeft++;
	}
	
	
	
	return 0;
}
