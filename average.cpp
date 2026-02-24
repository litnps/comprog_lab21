#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char * argv[]){
    if(argc == 1){
        cout<<"Please input numbers to find average.";
        return 0;
    }
    cout<<"---------------------------------\n";
    
    double sum = 0;
    for(int i = 1 ; i < argc ; ++i){
        sum += atof(argv[i]);
    }
    argc--;
    
    cout<<"Average of "<<argc<<" numbers = "<<sum/argc<<"\n";

    cout<<"---------------------------------\n";
    

    return 0;
}
