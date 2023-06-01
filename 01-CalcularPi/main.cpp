#include<iostream>
#include<iomanip>

using namespace std;

float sig{1};
double deno{1};
int ite{1000000};
float realPi{3.141592};

 double piCalc(){

 double pi;

    for(int i = 0;i < ite;i++){
      
    pi+= (sig*(1/deno));
    deno += 2;
    sig= sig * (-1);

if(pi == realPi/4)
{
ite = 0;
};

};

return pi*=4; //esto por que la serie de leibniz segun entiendo no da pi,si no pi/4
};

int main()
{

cout<<"pi es igual a: "<<setprecision(6)<<fixed<<piCalc();

return 0;
};


