#include<iostream>
using namespace std;

int main()
{
    int a[3][4] = {
        {1,2,3,4},{4,5,6,10},{7,8,9,12}
    };
    int sum=0;
    int max = 0;;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum+=a[i][j];
        }
        if(sum>max){
            max = sum;
        }
        sum=0;
    }
    cout<<max;
    return 0;
}