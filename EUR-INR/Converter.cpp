#include <iostream>
using namespace std;
int main(){
    const double INR_per_EUR{89.02};
    cout<<"welcome to the euro to rupee converter"<<endl;
    cout<<"Enter the value in EUR"<<endl;
    double euros{0};
    double rupees{0};
    cin>>euros;
    rupees = euros * INR_per_EUR;
    cout<<euros<<" euros is equal to "<<rupees<<" rupees "<<endl;
    return 0;

}
