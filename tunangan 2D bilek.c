#include<stdio.h>

int main()
{
    int jodoh, umur;
    system("CLS");
    puts("Hallo jomblowan yang budiman, kami mempunyai pilihan calon untuk kau.");
    printf("\n1. Luke Pearce");
    printf("\n2. Artem Wing");
    printf("\n3. Vyn Richter");
    printf("\n4. Marius von Hagen");
    printf("\n5. Rosa si pelakor kita semua.\n");
    getchar();
    x :
    printf("\n\nMasukkan nomor pilihan anda : ");
    scanf("%d", &jodoh);
    y :
    printf("\nMasukkan umur anda : ");
    scanf("%d", &umur);


    switch(jodoh)
    {
        case 5 : puts("\nKamu telah memilih Rosa si pelakor kita semuaa");
            if(umur >= 17 && umur <=28 ) {
                printf(" Kamu sudah legal untuk bertunangan ");
            }else if(umur < 17 ){
                    printf(" Kamu belum legall woii, sabar dlu aja, skolah yang bener.");
            } else if (umur > 28 ){
                    printf("Heh fokus yang 3D, jangan halu muluuu ");
            } else if ( umur <= 0 && umur >= 100 )
                {
                    printf(" Umur tidak valid, mohon masukkan dengan benar");
                    goto y;
                }
                break;
        case 4 : puts("\nKamu telah memilih Marius von Hagen si berondong tajir");
            if(umur >= 17 && umur <=28 ) {
                printf(" Kamu sudah legal untuk bertunangan ");
            }else if(umur < 17 ){
                    printf(" Kamu belum legall woii, sabar dlu aja, skolah yang bener.");
            } else if (umur > 28 ){
                    printf("Heh fokus yang 3D, jangan halu muluuu ");
            } else if (umur <= 0 && umur >= 100){
                    printf(" Umur tidak valid, mohon masukkan dengan benar");
                    goto y;
            }
                break;
        case 3 : puts("\nKamu telah memilih Vyn Richter si dokter sikopat anjay ");
            if(umur >= 17 && umur <=28 ) {
                printf(" Kamu sudah legal untuk bertunangan ");
            }else if(umur < 17 ){
                    printf(" Kamu belum legall woii, sabar dlu aja, skolah yang bener.");
            } else if (umur > 28 ){
                    printf("Heh fokus yang 3D, jangan halu muluuu ");
            } else if (umur <= 0 && umur >= 100){
                    printf(" Umur tidak valid, mohon masukkan dengan benar");
                    goto y;
            }
                break;
        case 2 : puts("\nKamu telah memilih Artem Wing s food markas paling sus");
            if(umur >= 17 && umur <=28 ) {
                printf(" Kamu sudah legal untuk bertunangan ");
            }else if(umur < 17 ){
                    printf(" Kamu belum legall woii, sabar dlu aja, skolah yang bener.");
            } else if (umur > 28 ){
                    printf("Heh fokus yang 3D, jangan halu muluuu ");
            } else if (umur <= 0 && umur >= 100){
                    printf(" Umur tidak valid, mohon masukkan dengan benar");
                    goto y;
            }
                break;
        case 1 : puts("\nKamu telah memilih Luke Pearce si paling childhood");
            if(umur >= 17 && umur <=28 ) {
                printf(" Kamu sudah legal untuk bertunangan ");
            }else if(umur < 17 ){
                    printf(" Kamu belum legall woii, sabar dlu aja, skolah yang bener.");
            } else if (umur > 28 ){
                    printf("Heh fokus yang 3D, jangan halu muluuu ");
            } else if (umur <= 0 && umur >= 100){
                    printf(" Umur tidak valid, mohon masukkan dengan benar");
                    goto y;
            }
                break;
            default : puts("\nMasukin nomornya yang bener, mau pasangan gepeng ga lu");
                        goto x;
    }


    return 0;

}
