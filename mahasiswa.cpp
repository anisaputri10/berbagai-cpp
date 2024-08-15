#include <iostream>
using namespace std;

int main(){
    string Nama, Semester;
    char Kelamin;
    int Umur;
    float Ipk;
    cout << "Nama\t\t\t: ";
    getline(cin, Nama);
    cout << "Semester\t\t: ";
    getline(cin, Semester);
    cout << "Jenis Kelamin (L/P)\t: ";
    cin >> Kelamin;
    cout << "Umur\t\t\t: ";
    cin >> Umur;
    cout << "IPK saat ini\t\t: ";
    cin >> Ipk;

    cout << "\n\n=================INFO MAHASISWA=================\n";
    cout << "Nama\t\t\t: " << Nama << endl;
    cout << "Semester\t\t: " << Semester << endl;
    cout << "Jenis Kelamin\t\t: " << Kelamin << endl;
    cout << "Umur\t\t\t: " << Umur << endl;
    cout << "IPK saat ini\t\t: " << Ipk << endl;

    return 0;
}
