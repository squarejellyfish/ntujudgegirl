#include<iostream>
#include "square.h"
using namespace std;
 
int main()
{
    Square s1,s2;
    int n1,n2;
    cin >> n1 >> n2;
    s1.len = n1;
    s2.len = n2;
 
    cout << "s1 len=" << s1.len << ", area="<<s1.area()<<endl;
    cout << "s2 len=" << s2.len << ", area="<<s2.area()<<endl;
    return 0;
}
