#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

const double LITERS_PER_GALLON = 3.78;

double milesPerGallon(int liters, int numberOfMiles);
// Precondition: liters and numberOfMiles are non-zero, non-negative variables.
// Returns the miles per gallon delivered by the user's car.

//void erase();
// Clears the console screen.

int main(int argc, char* argv[])
{
	char ans;
	do
	{
	   int liters, miles;
	   cout<<"Enter the number of liters consumed by your car: ";
	   cin>> liters;
	   cout<<endl;
	   cout<<"Enter the number of miles driven by your car: ";
	   cin>>miles;
	   cout<<endl;
	   cout<<"Your car has delivered ";
	   cout.setf(ios::fixed);
	   cout.setf(ios::showpoint);
	   cout.precision(2);
	   cout<<milesPerGallon(liters, miles)<<" miles per gallon."<<endl;
	   cout<<endl;
	   cout<<"Start over? ";
	   cin>>ans;

	   if (ans == 'y' || ans == 'Y')
            cout<<"\n\n";
    }while(ans == 'y' || ans == 'Y');

	return 0;
	system("PAUSE");
}

double milesPerGallon(int liters, int numberOfMiles)
{
	if(liters <= 0 || numberOfMiles <= 0)
	{
		cout<<"Fatal Error: Exiting program.\n";
		exit(1);
	}
	double gallons = liters/LITERS_PER_GALLON;
	return (numberOfMiles/gallons);
}

/*
void erase()
{
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
*/
