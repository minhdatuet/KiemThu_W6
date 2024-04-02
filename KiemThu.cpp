#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
float tinhPhiVanChuyen (float m, float s) {
    if (m <= 0) return -2;
    if (s <= 0) return -1;
    if (m <= 10) {
        if (s <= 5) {
            return m*s*1500;
        } else {
            return m*s*1200;
        }
    } else {
        if (s <= 5) {
            return m*s*2000;
        } else {
            return m*s*1800;
        }
    }
}
int main() {
    float cost = 0;
    float m[18] = {-1, 7, 8, 6, 11, 12, 2, 7, 12, 7, 6, 12, 13, 12,7,8, 12, 12};
    float s[18] = {2, 3, 4, 8, 2, 8, -3, 3, 2, 3, 10, 3, 8, 8, 3, 7, 3, 8};
    for (int i = 0; i < 18; i++) {
        cost = tinhPhiVanChuyen(m[i], s[i]);
        if (i == 0) {
            cout << "Kiem thu voi do do all-use coverage cua bien m:" << endl;
        } else if (i == 6) {
            cout << endl << "Kiem thu voi do do all-use coverage cua bien s:" << endl;
        } else if (i == 13) {
            cout << endl << "Kiem thu voi do do all-use coverage cua bien cost:" << endl;
        }
        cout << "Test " << i+1 << ": can nang = " << m[i] << "kg khoang cach = " << s[i] << "km:" << endl;
        if (cost == -2 ) {
            cout << "Can nang cua kien hang phai lon hon 0" << endl;
            continue;
        } else if ( cost == -1) {
            cout << "Khoang cach van chuyen phai lon hon 0" << endl;
            continue;
        } else {
            cout << "Phi van chuyen cua kien hang la: " << cost << endl;
        }
    }
    return 0;
}
