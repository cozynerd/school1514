#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int t1_h, t1_m, t2_h, t2_m, h, m, ans;
    
    cout << "Enter lesson start time (hh:mm) - ";
    scanf("%d:%d", &t1_h, &t1_m);  

    cout << "Enter lesson duration hours - ";
    cin >> h;
    
    cout << "Enter lesson duration minutes - ";
    cin >> m;
    
    ans = (t1_h + h) * 60 + (t1_m + m);
    t2_h = ans / 60 % 24;  
    t2_m = ans % 60;
    
    printf("%02d:%02d - lesson end time\n", t2_h, t2_m);
    
    return 0;
}
