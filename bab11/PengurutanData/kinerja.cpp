// Menguji kinerja pengurutan data
// Kode sumber untuk menguji kinerja pengurutan data untuk jumlah data yang besar
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sys/time.h>
using namespace std;

void timeval_diff(struct timeval *selisih,
                  struct timeval *waktu_akhir,
                  struct timeval *waktu_awal)
// Digunakan untuk menghitung selisih waktu
// (waktu_awal dan waktu_akhir)
// selisih berisi selisih kedua waktu
{
    struct timeval temp_diff;
    if (selisih == NULL)
    {
        selisih = &temp_diff;
    }

    selisih->tv_sec = waktu_akhir->tv_sec -
                      waktu_awal->tv_sec;
    selisih->tv_usec = waktu_akhir->tv_usec -
                       waktu_awal->tv_usec;

    // Hitung detik dan mikrodetik
    while (selisih->tv_usec < 0)
    {
        selisih->tv_usec += 1000000;
        selisih->tv_sec -= 1;
    }
}

void bubble_sort(int data[], int n)
{
    int tahap, j, tmp;

    for (tahap = 1; tahap < n; tahap++)
    {
        for (j = 0; j < n; j++)
            if (data[j] > data[j + 1])
            {
                /* Tukarkan */
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
    }
}

void selection_sort(int data[], int n)
{
    int posMin, posAwal, j, tmp;

    for (posAwal = 0; posAwal < n - 1; posAwal++)
    {
        posMin = posAwal;
        for (j = posAwal + 1; j < n; j++)
            if (data[posMin] > data[j])
                posMin = j;

        /* Tukarkan */
        tmp = data[posAwal];
        data[posAwal] = data[posMin];
        data[posMin] = tmp;
    }
}

void insertion_sort(int data[], int n)
{
    int i, k;
    int x;
    int ketemu;

    for (k = 1; k < n; k++)
    {
        x = data[k];

        // Sisipkan x ke dalam data(0..k-1)
        i = k - 1;
        ketemu = 0;

        while ((i >= 0) && (!ketemu))
        {
            if (x < data[i])
            {
                data[i + 1] = data[i];
                i = i - 1;
            }
            else
                ketemu = 1;

            data[i + 1] = x;
        }
    }
}

void binary_insertion(int data[], int n)
{
    int j, k;
    int x;
    int kiri, kanan, tengah;

    for (k = 1; k < n; k++)
    {
        x = data[k];

        // Sisipkan x ke dalam data[0..k-1]
        kiri = 0;
        kanan = k - 1;

        while (kiri <= kanan)
        {
            // Pencarian biner
            tengah = (kiri + kanan) / 2;
            if (x < data[tengah])
                kanan = tengah - 1;
            else
                kiri = tengah + 1;
        }
        // Melakukan penggeseran
        for (j = k - 1; j >= kiri; j--)
            data[j + 1] = data[j];

        // Tempatkan x ke data[kiri]
        data[kiri] = x;
    }
}

int partisi(int data[], int p, int r)
{
    int x;
    long i, j;
    x = data[p];
    i = p - 1;
    j = r + 1;

    while (true)
    {
        do
            j--;
        while (data[j] > x);

        do
            i++;
        while (data[i] < x);

        if (i < j)
        {
            int tmp = data[j];
            data[j] = data[i];
            data[i] = tmp;
        }
        else
            return j;
    }
}

void quick_sort(int data[], int p, int r)
{
    int q;

    if (p < r)
    {
        q = partisi(data, p, r);
        quick_sort(data, p, q);
        quick_sort(data, q + 1, r);
    }
}

void salin_data(int data_target[], int data_sumber[], long jum_data)
// Untuk menyalin data dari suatu larik ke larik lain
{
    long j;

    for (j = 0; j < jum_data; j++)
        data_target[j] = data_sumber[j];
}

int main(void)
{
    const long JUMDATA = 100000L; // 100.000 data

    struct timeval mulai;
    struct timeval akhir;
    struct timeval interval;

    int data_asli[JUMDATA];
    int data[JUMDATA];
    long j;

    cout << "Pembandingan kinerja pengurutan data\n";

    // Biji pembangkit random diisi dengan waktu sekarang
    // supaya benar-benar acak
    srand(time(NULL));

    // Bangkitkan bilangan random
    for (j = 0; j < JUMDATA; j++)
        // Buat data antara 1 sampai dengan 20000
        data[j] = rand() % 20000 + 1;

    // Pengurutan dengan bubble sort
    salin_data(data, data_asli, JUMDATA);
    gettimeofday(&mulai, NULL);
    bubble_sort(data, JUMDATA);
    gettimeofday(&akhir, NULL);
    timeval_diff(&interval, &akhir, &mulai);

    cout << "Waktu untuk bubble sort: "
         << interval.tv_sec << " detik "
         << interval.tv_usec << " mikrodetik "
         << endl;

    //  Pengurutan dengan selection sort
    salin_data(data, data_asli, JUMDATA);
    gettimeofday(&mulai, NULL);
    selection_sort(data, JUMDATA);
    gettimeofday(&akhir, NULL);
    timeval_diff(&interval, &akhir, &mulai);

    cout << "Waktu untuk selection sort: "
         << interval.tv_sec << " detik "
         << interval.tv_usec << " mikrodetik "
         << endl;

    //  Pengurutan dengan insertion sort
    salin_data(data, data_asli, JUMDATA);
    gettimeofday(&mulai, NULL);
    insertion_sort(data, JUMDATA);
    gettimeofday(&akhir, NULL);
    timeval_diff(&interval, &akhir, &mulai);

    cout << "Waktu untuk insertion sort: "
         << interval.tv_sec << " detik "
         << interval.tv_usec << " mikrodetik "
         << endl;

    //  Pengurutan dengan binary insertion
    salin_data(data, data_asli, JUMDATA);
    gettimeofday(&mulai, NULL);
    binary_insertion(data, JUMDATA);
    gettimeofday(&akhir, NULL);
    timeval_diff(&interval, &akhir, &mulai);

    cout << "Waktu untuk binary insertion: "
         << interval.tv_sec << " detik "
         << interval.tv_usec << " mikrodetik "
         << endl;

    //  Pengurutan dengan quick insertion
    salin_data(data, data_asli, JUMDATA);
    gettimeofday(&mulai, NULL);
    quick_sort(data, 0, JUMDATA - 1);
    gettimeofday(&akhir, NULL);
    timeval_diff(&interval, &akhir, &mulai);

    cout << "Waktu untuk quick sort: "
         << interval.tv_sec << " detik "
         << interval.tv_usec << " mikrodetik "
         << endl;

    return 0;
}