#include<iostream>
#include<conio.h>

using namespace std;

/*parameterized way
void sum12N(int i,int sum){
    if (i<1){   
        cout<<sum;
        return;
    }
    sum12N(i-1,sum+i);
}
*/

// // functional way
// int sum12N(int n){
//     if(n<1)
//         return 0;
//     return n + sum12N(n-1);
// }

//Parameterized way

// void fact12N(int i,int fact){
//     if(i<1){
//         cout<<fact;
//         return;
//     }
//     fact12N(i-1,fact*i);
// }

//functional way

// int fact12N(int n){
//     if(n<1)
//         return 1;
//     return n * fact12N(n-1);
// }

//backtracking method
void fact12N(int n, int fact){
    if(n<1){
        cout<<fact;
        return;
    }
    fact12N(n-1,fact*n);
}

int main(){
    int n = 5;
    fact12N(n,1);
    return 0;
}