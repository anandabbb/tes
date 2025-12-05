//hasil output berbeda antara teori. ikuti yang mana?
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct tanggal {
    int tgl;
    int bln;
    int thn;
};

struct orang {
    char nama[30];
    struct tanggal lahir;
};

struct orang siswa;

int main() {
    strcpy(siswa.nama, "MUHAMMAD IHSAN");
    siswa.lahir.tgl = 10;
    siswa.lahir.bln = 8;
    siswa.lahir.thn = 1970;

    printf("Nama : %s\n", siswa.nama);
    printf("Tgl Lahir : %d-%d-%d\n", siswa.lahir.tgl, siswa.lahir.bln, siswa.lahir.thn);
    
    getch();
    return 0;
}