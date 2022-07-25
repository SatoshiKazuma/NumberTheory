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
int lcm(int a, int b){
    return ((a*b)/hcf(a,b));
}
int main(){
    int a= 50, b =51;
    cout<<hcf(a,b)<<endl;
    cout<<lcm(a,b)<<endl;
    return 0;
}