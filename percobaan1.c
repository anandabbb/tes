#include <stdio.h>

struct tanggal {
    int tgl;
    int bulan;
    int tahun;
};

int main() {
    struct tanggal now;

    now.tgl = 14;
    now.bulan = 5;
    now.tahun = 2003;

    printf("Sekarang Tanggal ");
    printf("%d/%d/%d\n", now.tgl, now.bulan, now.tahun);
    
    return 0;
}