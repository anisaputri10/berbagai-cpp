#include <iostream>
using namespace std;
int main()
{
    string nama;
    int jurusan;

    cout << "Masukan Nama : ";
    cin >> nama;
    cout << "1. Ilmu Komputer" << endl;
    cout << "2. Farmasi " << endl;
    cout << "3. Kimia " << endl;
    cout << "4. Matematika " << endl;
    cout << "5. Biologi " << endl;
    cout << "Masukan Jurusan yang di inginkan :";
    cin >> jurusan;

    cout << "=================================================" << endl;
    cout << "Nama : " << nama << endl;
    cout << "Jurusan : ";
    if(jurusan == 1){
        cout << "Ilmu Komputer" << endl;
    }
    else if(jurusan == 2){
        cout << "Farmasi " << endl;
    }
    else if(jurusan == 3){
        cout << "Kimia " << endl;
    }
    else if(jurusan == 4){
        cout << "Matematika " << endl;
    }
    else if(jurusan == 5){
        cout << "Biologi " << endl;
    }
    else{
        cout << "Pilihan salah, silahkan ulangi" << endl;
    }
}
