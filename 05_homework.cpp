#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int t1_h, t1_m, t2_h, t2_m, h, m, ans;
    
    cout << "������� ����� ������ �����(hh:mm) - ";
    scanf("%d:%d", &t1_h, &t1_m);  

    cout << "������� ������������ ����� � ����� - ";
    cin >> h;
    
    cout << "������� ������������ ����� � ������� - ";
    cin >> m;
    
    ans = (t1_h + h) * 60 + (t1_m + m);
    t2_h = (ans / 60) % 24;
    t2_m = ans % 60;
    
    printf("%02d:%02d - ����� ����� ����� \n", t2_h, t2_m);
    
    return 0;
}
