#include<iostream>
#include<cmath>
#include <string>
using namespace std;


double Orbital(double r, double T){
    double K;
    double days_to_years=1/365;
    K=pow(r,3)/(pow(T,2)*days_to_years);
    return K;
}

double ave_speed(float r, float p){
    float pi=4*atan(1.0);
    double speed;
    double days_to_seconds;
    days_to_seconds=86400;
    double AU_in_maters;
    AU_in_maters=1.496e11;
    speed=(2*pi*(r*AU_in_maters))/(p*days_to_seconds);
    return speed;
}

float minimum(float arr[]){
        long long mini=arr[0];
        for (int i=1;i<6;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
        }
        return mini;

    }

int main(){ 

    float r_M=0.389;
    float T_M=87.77;
    float r_V=0.724;
    float T_V=224.70;
    float r_E=1;
    float T_E=365.25;
    float r_m=1.524;
    float T_m=686.95;
    float r_J=5.20;
    float T_J=4332.62;
    float r_S=9.510;
    float T_S=10759.2;

    double ave;
    ave=((Orbital(r_M,T_M)+Orbital(r_V,T_V)+Orbital(r_E,T_E)+Orbital(r_m,T_m)+Orbital(r_J,T_J)+Orbital(r_S,T_S))/6);

    cout<<"The average is:"<<Orbital<<endl;

    float ave_mercury=ave_speed(r_M,T_M);
    float ave_venus=ave_speed(r_V,T_V);
    float ave_earth=ave_speed(r_E,T_E);
    float ave_mars=ave_speed(r_m,T_m);
    float ave_Jupiter=ave_speed(r_J,T_J);
    float ave_saturn=ave_speed(r_S,T_S);

    cout<<"the orbital speed of mercury:"<<ave_mercury<<" m/s"<<endl;
    cout<<"the orbital speed of venus:"<<ave_venus<<" m/s"<<endl;
    cout<<"the orbital speed of earth:"<<ave_earth<<" m/s"<<endl;
    cout<<"the orbital speed of mars:"<<ave_mars<<" m/s"<<endl;
    cout<<"the orbital speed of jupiter:"<<ave_Jupiter<<" m/s"<<endl;
    cout<<"the orbital speed of saturn:"<<ave_saturn<<" m/s"<<endl;

    float Minimum[6]={ave_mercury,ave_venus,ave_earth,ave_mars,ave_Jupiter,ave_saturn};
    float mini_S=minimum(Minimum);
    std::string Space_Bodies[6]={"mercury", "venus", "earth", "mars", "jupiter", "saturn" };

    int min_indexed_array;
    for(int i=0; i<6; i++){
        if(Minimum[i] == mini_S)
        {
            min_indexed_array = i;
        }
    }
    float maximum=Minimum[0];
    for (int i=0; i<6 ; i++){
        if(Minimum[i]>maximum)
        {
            maximum=Minimum[i];
        }
    }
    int maximum_indexed_arr;
    for(int i=0; i<6 ;i++){
        if(Minimum[i]==maximum)
        {
            maximum_indexed_arr=i;
        }
    }

    cout<<mini_S<<" is the minimum"<<endl;
    cout <<"The slow planet is "<< Space_Bodies[5] <<" at "<< mini_S << endl;
    cout<<"The fast planet is "<<Space_Bodies[maximum_indexed_arr] << " at "<< maximum<<endl;
    return 0;

    
}


