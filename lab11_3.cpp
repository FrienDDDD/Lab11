#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    
    int N = 0 ;
    ifstream source("score.txt");
    string data ;
    double sum = 0,u,sum1 = 0 ;
    while(getline(source,data)){
        cout << data << endl ;
        sum += atof(data.c_str()) ;
        sum1 += pow(atof(data.c_str()),2) ;
        N ++ ;
    }
   
    
    cout << "Number of data = " << N << endl ;
    cout << setprecision(3);
    u = sum/N ;
    cout << "Mean = " << u << endl ;
    cout << "Standard deviation = " << sqrt((sum1/N)-pow(u,2)) ;
    source.close() ;  
    return 0 ;
}

