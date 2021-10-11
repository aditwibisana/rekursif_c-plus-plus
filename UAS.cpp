#include <iostream>
using namespace std;

void printarray(string arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " - ";
    }
}

void printkegiatan(string nama[], int waktu[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << i + 1 << ". ";
        cout << "Pada Jam " << waktu[i] << ": " << nama[i] << endl;
    }
}
void printdetail(string nama[], string keterangan[], int waktu[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << i + 1 << ". ";
        cout << "Pada Jam : " << waktu[i] << ": " << nama[i] << keterangan[i] << endl;
    }
}

int main()
{
    // user memasukkan pemasukan
    int kegiatan;
    int detail;
    cout << "Masukkan Jumlah Kegiatan Anda Dalam 1 Hari: ";
    cin >> kegiatan;

    string *arr_nama_kegiatan = new string[kegiatan];
    int *arr_waktu_kegiatan = new int[kegiatan];
    string *arr_keterangan = new string[kegiatan];

    int i;
    for (i = 0; i < kegiatan; i++)
    {
        cin.ignore(1, '\n');
        cout << "Masukkan Nama Kegiatan " << i + 1 << ": ";

        getline(cin, arr_nama_kegiatan[i]);

        cout << "Masukkan Waktu Kegiatan " << i + 1 << ": ";
        cin >> arr_waktu_kegiatan[i];

        cout << "Keterangan Kegiatan " << i + 1 << ": ";
        cin.ignore();
        getline(cin, arr_keterangan[i]);
    }
    //printarray(arr_nama_masuk, kegiatan);

    //printarray(arr_nama_keluar, n_keluar);

    // program menampilkan seluruh transaksi
    cout << "----------------- Deskripsi-------------------" << endl;
    cout << "Nama : Bayu Adhitya Wibisana" << endl;
    cout << "NIM  : 10191015" << endl;
    printkegiatan(arr_nama_kegiatan, arr_waktu_kegiatan, kegiatan);
    cout << endl;
    cout << "Pilih Jam Kegiatan yang akan didetailkan: ";
    cin >> detail;
    if (detail == *arr_waktu_kegiatan)
    {

        cout << *arr_nama_kegiatan << endl;

        cout << *arr_waktu_kegiatan << endl;

        cout << *arr_keterangan << endl;
    }

    return 0;
}