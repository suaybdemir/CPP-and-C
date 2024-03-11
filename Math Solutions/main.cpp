#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main() {
    int min = 1;
    unsigned long long max_limit = 1000; 
    unsigned long long sum = 0;
   
    for (unsigned long long a = min; a < max_limit; a++) {
        cout<<a<<endl;
        for (unsigned long long b = min; b < max_limit; b++) {
            cout<<b<<endl;
            for (unsigned long long c = min; c < max_limit; c++) {
                cout<<c<<endl;
                    unsigned long long result_ab = pow(a, b); 
                    unsigned long long result_ba = pow(b, a);

                    if (result_ab == c * (result_ba-c)) {
                        sum++;
                    }
                
            }
        }
    }

    cout<<"SUM"<<sum<<endl;

    return 0;
}
