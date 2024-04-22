#include<iostream>
#include<cmath>
using namespace std;


double Orbital(double r, double T){
    double K;
    K=pow(r,3)/pow(T,2);
    return K;
}

double ave_speed(float r, float p){
    float pi=4*atan(1.0);
    double speed;
    speed=(2*pi*r)/p;
    return speed;
}

int main(){
    double days_to_years=1/365;

    float r_M=0.389;
    float T_M=87.77*days_to_years;
    float r_V=0.724;
    float T_V=224.70*days_to_years;
    float r_E=1;
    float T_E=365.25*days_to_years;
    float r_m=1.524;
    float T_m=686.95*days_to_years;
    float r_J=5.20;
    float T_J=4332.62*days_to_years;
    float r_S=9.510;
    float T_S=10759.2*days_to_years;

    double ave;ave
    ave=((Orbital(r_M,T_M)+Orbital(r_V,T_V)+Orbital(r_E,T_E)+Orbital(r_m,T_m)+Orbital(r_J,T_J)+Orbital(r_S,T_S))/6);

    cout<<"The average is:"<<Orbital<<endl;

    double ave_mercury=ave_speed(r_M,T_M);
    double ave_venus=ave_speed(r_V,T_V);
    double ave_earth=ave_speed(r_E,T_E);
    double ave_mars=ave_speed(r_m,r_m);
    double ave_Jupiter=ave_speed(r_J,T_J);
    double ave_saturn=ave_speed(r_S,T_S);


    cout<<ave_mercury<<endl;
    cout<<ave_venus<<endl;
    return 0;

    
}


