//ada penyesuaian pada baris 43-49
#include <stdio.h>
#include <conio.h>

struct waktu {
    int jam;
    int menit;
    int detik;
};

struct waktu time_update(struct waktu now) {
    struct waktu new_time;

    new_time = now;
    ++new_time.detik;

    if (new_time.detik == 60) {
        new_time.detik = 0;
        ++new_time.menit;
        if (new_time.menit == 60) {
            new_time.menit = 0;
            ++new_time.jam;
            if (new_time.jam == 24) {
                new_time.jam = 0;
            }
        }
    }
    return new_time;
}

int main() {
    static struct waktu tes[5] = {
        {11, 59, 59}, 
        {12, 0, 0}, 
        {1, 29, 59}, 
        {23, 59, 59}, 
        {19, 12, 27}
    };

    int i;

    for (i = 0; i < 5; ++i) {
        struct waktu hasil = time_update(tes[i]);
        printf("Waktu adalah %02d:%02d:%02d ...satu detik berikutnya %02d:%02d:%02d\n",
               tes[i].jam, tes[i].menit, tes[i].detik,
               hasil.jam, hasil.menit, hasil.detik);
    }
    
    getch();
}