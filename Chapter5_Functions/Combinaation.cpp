//                                     // normal method //
// #include <iostream>
// using namespace std;
// int main ()
// {
// int n ;
// cout<< " enter a n: "<< endl;
// cin>>n;

// int r ;
// cout<< " enter r : "<< endl;
// cin>>r;

//                                     // here a=n//
// int a=1;
// for (int i=1;i<=n;i++){
//     a*=i;
// }

// int b=1;                            //here b=r//
// for (int i=1;i <= r ;i++){
// b *= i;
// }
//                                     // here c=n-r// 
// int c=1;
// for (int i=1;i<=n-r;i++){
//     c*=i;
// }
//                                     // Combination: nCr-> n!/r!* (n-r)!
// cout<< a/(b*c)<< endl;
// }
                                    // Function method//
#include <iostream>
 using namespace std;
 int fact(int n){
    int f=1;
 for(int i=1;i<=n;i++){
    f+=i;
 }
 return f;
}


int main (){
    int n;
    cout<<"Enter n:";
    cin>> n;

    int r;
    cout<<"Enter r:";
    cin>> r;

    int a =fact(n);
    int b =fact(r);
    int c =fact(n-r);
     cout<< a/(b*c)<<endl;
}