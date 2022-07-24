#include<iostream>
using namespace std;
// int main(){
//     int a, b, result, hcf;
//     cin >> a >> b;
//     result = min(a,b);
//     while (result>0)
//     {
//         if (((a%result)+(b%result))==0)
//         {
//             hcf = result;
//             break;
//         }
//         else
//         {
//             result--;
//         }
//     }
//     cout<<hcf;
//     return 0;
// }
int hcf(int a,int b){
    if (a == 0)
        return b;
    return hcf(b%a,a);
}
int main(){
    int a= 4, b =7;
    cout<<hcf(a,b);
    return 0;
}