#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

struct Zoo
    {
        string animal;
        double food;
        double cost;
        
    }z[15];


int main()
{
    string filename;
    char choice;
    double Dailycost = 0, Dailyfood = 0, monthlyCost = 0, monthlyFood = 0;
   
    do
    {
        cout << "\n**********************************************************************"<<endl;
        cout<<"Welcome the UNLV CS Free Range Wild Animal Park!"<<endl;
        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"<<endl;
        l:
        cout<<"\nPlease enter an input filename: "<<endl;
        cout<<"***** ";
        cin >> filename;
        ifstream in(filename);
        if(!in)
        {
            cout << "File can't be opened! " <<endl;
            goto l;
        }

        int i = 0;
        while(!in.eof())
        {
            in >>z[i].animal>> z[i].food >>z[i].cost;
            i++;
        }

        cout<<"+--------------------------------------------------------+"<<endl;
        cout <<left<< setw(20)<< "Animal"<<left<<setw(20)<<"Food\'lbs\'"<<left <<setw(20)<<"Cost\'$\'"<< endl;
        cout<<"+------------------------------------------------------------+"<<endl;
        for(int i = 0; i< 15; i++)
        {
            if(z[i].animal == "" && z[i].cost == 0.0 && z[i].food == 0.0)
            {
                continue;
            }
            cout <<left<< setw(20)<< z[i].animal;
            cout << std::fixed;
            cout << std::setprecision(2)<<left<<setw(20) <<z[i].food;
            cout << std::setprecision(2)<<"$"<<left<<setw(20)<<z[i].cost<<"\n";
            Dailyfood += z[i].food;
            Dailycost += z[i].cost;
        }

        monthlyCost =  Dailycost * 30;
        monthlyFood = Dailyfood * 30;
        cout<<"+------------------------------------------------------------+\n\n"<<endl;
        cout<<"Feeding Totals"<<endl;
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout <<"The total amount food the zoo needed today was: "<<setprecision(2)<<Dailyfood<<" lbs"<<endl;
        cout <<"The estimate amount food the zoo will need per month is: "<<setprecision(2)<<monthlyFood<<" lbs"<<endl;
        cout <<"The total cost of zoo food for today was: $"<<setprecision(2)<<Dailycost<<" lbs"<<endl;
        cout <<"The estimate cost of food the zoo will need per month is: $"<<setprecision(2)<<monthlyCost<<" lbs"<<endl;
        cout << "\nDo You want to continue: ";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    
}
