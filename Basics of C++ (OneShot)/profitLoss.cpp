#include <iostream>
using namespace std;
int main (){
    int cp , sp;
    cin>>cp>>sp;
    cout<<"Enter a number:"<< cp<< " "<<sp<<endl;
    if(cp>=sp){
        cout<< "Loss"<< " " <<cp-sp<<endl;
    }
        else if (cp<=sp){
            cout<< "Profit"<<" " <<sp-cp<< endl;
        }
        else{
             cout<< "Neither Profit Nor Loss"<< endl;
        }
}
//HomeWork
#include <iostream>
using namespace std;
int main (){
    int l=2 , b=3;
    int AOR=l*b;
    int POR=2*(l+b);
    cout<<"Length:"<< l<< " Breadth:"<<b<<AOR<<endl;
    cout<<"Length:"<< l<< " Breadth:"<<b<<POR<<endl;
    if(AOR>=POR){
        cout<< "AOR is greater than POR"<< " by " <<AOR-POR<<endl;
    }
        else if (POR<=AOR){
            cout<< "POR is greater than AOR"<<" " <<POR-AOR<< endl;
        }
        else{
             cout<< "Neither AOR Nor POR"<< endl;
        }
}
