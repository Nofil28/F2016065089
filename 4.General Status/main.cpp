#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class info_Disp
{
public:
    info_Disp(int status,int amount,double PPM,double rem)
    {
       cout<<"FOLLOWING IS YOUR CURRENT STATUS INFORMATION"<<endl;
       if(status==1)
    {
         cout<<"Loan is Granted"<<endl;
         cout<<"You have taken loan of amount"<<amount<<endl;
         cout<<"Your Installments are $"<<PPM<<"per month"<<endl;
         cout<<"Remaining Payable Amount left is $"<<rem<<endl;
    }
    else
    {
        cout<<"Your Loan has Been rejected"<<endl;
    }
    }


};

int main()
{
int status,Age,ID,Salary,amount;
double rem,PPM;
uint64_t CNIC;
string Name,Address,Job,blank;
ifstream infile;
infile.open("Data.txt");
infile>>Name>>Age>>ID>>CNIC>>Job>>Salary>>Address>>amount>>PPM>>rem>>status;
info_Disp d(status,amount,PPM,rem);
return 0;
}
