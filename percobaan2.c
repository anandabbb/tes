//ada penyesuaian kode pada baris 30-35
#include <stdio.h>
#include <conio.h>

struct tanggal {
    int tgl;
    int bln;
    int thn;
};

void cetak_tgl(struct tanggal now) {
    static char *bulan[] = {
        "", 
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember"
    };

    printf("\nTanggal sekarang adalah : ");
    
    if (now.bln >= 1 && now.bln <= 12) {
        printf("%d %s %d\n", now.tgl, bulan[now.bln], now.thn);
    } else {
        printf("Input bulan tidak valid.\n");
    }
}

int main() {
    struct tanggal skr;
    
    printf("Masukkan tanggal hari ini (tgl/bln/thn) : ");
    scanf("%d/%d/%d", &skr.tgl, &skr.bln, &skr.thn);
    
    cetak_tgl(skr);
    
    getch();
    return 0;
}