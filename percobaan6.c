// menyisipkan fungsi sama_str()
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct entry {
    char kata[10];
    char definisi[50];
};

int sama_str(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    
    if (s1[i] == '\0' && s2[i] == '\0')
        return 1;
    else
        return 0;
}

int lihat(char cari[], struct entry kamus[], int jumlah) {
    int i;
    for (i = 0; i < jumlah; ++i) {
        if (sama_str(cari, kamus[i].kata))
            return i;
    }
    return -1;
}

int main() {
    static struct entry kamus[100] = {
        {"komodo", "Kayaknya di sulawesi ada tuh"},
        {"unta", "Lahirnya di Mesir tapi gak bisa bahasa Arab"},
        {"kangguru", "Suka melompat di Australia"},
        {"kangkung", "Sarannya Superman kali"},
        {"harimau", "Belang-belang dan ada di Kalimantan"},
        {"kobra", "Ular dari India"},
        {"kancil", "Suka nyolong timun"},
        {"kucing", "Mahal harganya lho"},
        {"nyamuk", "Nakal suka sedot sana sini"},
        {"tikus", "Suka menggoda cewek cakep"},
        {"buaya", "Wah ini sih istrinya pakaya"}
    };
    
    int banyaknya = 11; 
    char kata[10];
    int angka_masukan;

    printf("Masukkan kata: ");
    scanf("%s", kata);
    
    angka_masukan = lihat(kata, kamus, banyaknya);
    
    if (angka_masukan != -1)
        printf("%s\n", kamus[angka_masukan].definisi);
    else
        printf("Maaf, kata itu tidak ada dalam kamus.\n");
        
    getch();
    return 0;
}