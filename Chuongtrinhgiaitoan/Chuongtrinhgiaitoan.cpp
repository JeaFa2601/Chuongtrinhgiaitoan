
#include <iostream>
#include <conio.h>
using namespace std;
void giaiptbac1()
{
    cout << "Giai phuong trinh bac 1\n";
    double a, b;

    cout << "Nhap so a\n";
    cin >> a;
    cout << "Nhap so b\n";
    cin >> b;

    if (a == 0)
        if (b == 0)
            cout << "Phuong trinh co nghiem" << endl;

        else
            cout << "Phuong  trinh vo nghiem" << endl;
    else
        cout << "x = " << -b / a << endl;
}
void giaiptbac2()
{
    cout << "Giai phuong trinh bac 2\n";
    float a, b, c;
    float delta;

    cout << "Nhap so A\n";
    cin >> a;
    cout << "Nhap so B\n";
    cin >> b;
    cout << "Nhap so C\n";
    cin >> c;
    delta = (b * b) - (4 * a * c);
    if (delta < 0)
        cout << "Phuong Trinh Vo Nghiem\n";
    else if (delta == 0)
        cout << "Phuong Trinh Co Nghiem Kep\n" << -b / 2 * a;
    else
        cout << "Phuong Trinh Co 2 Nghiem Phan Biet\n";
    cout << "\nx1=" << (-b + sqrt(delta)) / (2 * a);
    cout << "\nx2=" << (-b - sqrt(delta)) / (2 * a);
}
void hinhchunhat() {
    double dai, rong;
    cout << "Nhap chieu dai:";
    cin >> dai;
    cout << "Nhap chieu rong:";
    cin >> rong;
    double chuvi = (dai + rong) * 2;
    double dientich = dai * rong;
    cout << "Dien tich la:" << dientich << endl;
    cout << "Chu vi la:" << chuvi << endl;
}
void hinhtron() {
    double a;
    const double pi = 3.14159265359;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> a;
    double dientich = a * a * pi;
    double chuvi = a * 2 * pi;
    cout << "DienTichHinhTronLa: " << dientich << endl;
    cout << "ChuViHinhTronLa: " << chuvi << endl;

}
int main() {
    char luachon;
    while (true) {
        cout << "Chuong Trinh Giai Cac Phep Tinh" << endl;
        cout << "1. GiaiPTBac1" << endl;
        cout << "2. GiaiPTBac2" << endl;
        cout << "3. TinhHinhTron" << endl;
        cout << "4. TinhHinhChuNhat" << endl;
        cout << "0. KetThuc" << endl;
        cin >> luachon;
        switch (luachon) {
        case '1':
            cout << "GiaiPTBac1" << endl;
            giaiptbac1();
            break;
        case '2':
            cout << "GiaiPTBac2" << endl;
            giaiptbac2();
            break;
        case '3':
            cout << "TinhHinhTron" << endl;
            hinhtron();
            break;
        case '4':
            cout << "TinhHinhChuNhat" << endl;
            hinhchunhat();
            break;
        case '0':
            cout << "KetThuc" << endl;
            return 0;
        default:
            cout << "Chon Sai. Hay chon 1, 2, 3, 4 or 0 de thoat." << endl;
        }
    }
    return 0;
}
