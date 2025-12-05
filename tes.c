#include <stdio.h>
#include <string.h>
#include <conio.h>

struct entry {
    char kata[10];
    char definisi[50];
};

/* ************************************************* */
/* * Sisipkan fungsi sama_str disini (lihat TUGAS-TUGAS) */
/* ************************************************* */

int lihat (kamus, cari, jumlah)
struct entry kamus[];
char cari[];
int jumlah;
{
    int i;

    for (i=0; i<jumlah; ++i)
        if (sama_str(cari, kamus[i].kata)) return(i);
    return (1);
}

void main()
{
    static struct entry kamus[100] = {
        {"komodo", "Kayaknya di sulawesi ada tuh"},
        {"unta", "Lahirnya di Mesir tapi gak bisa bahasa Arab"},
        {"kangguru", "Suka melompat di Australia"},
        {"kingkong", "Lawannya Superman kali"},
        {"harimau", "Belang-belang dan ada di Kalimantan"},
        {"kobra", "Ular dari India"},
        {"kancil", "Suka nyolong timun"},
        {"iguana", "Mahal harganya lho"},
        {"nyamuk", "Nakal suka sedot sana sini"},
        {"tikus", "Suka menggoda cewek cakep"},
        {"buaya", "wah ini sih istrinya pakaya"}
    };

    int banyaknya=10;
    char kata[10];
    int angka_masukan;

    printf("Masukkan kata: ");
    scanf("%s", kata);

    angka_masukan=lihat(kamus, kata, banyaknya);

    if (angka_masukan != -1)
        printf("%s\n", kamus[angka_masukan].definisi);
    else
        printf("Maaf, kata itu tidak ada dalam kamus.\n");

    getch();
}