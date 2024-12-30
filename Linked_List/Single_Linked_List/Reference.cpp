#include<bits/stdc++.h>
using namespace std;
/*ptr and p are not same*/
// void fun(int *p) {
//     cout << &p << endl;
// }
// int main() {
//     int val = 10;
//     int *ptr = &val;
//     fun(ptr);
//     cout << &ptr << endl;
// }
/*Here the ptr and p are point the same address */
void fun(int *&p) {
    cout << p << endl;
}
int main() {
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << ptr << endl;
}