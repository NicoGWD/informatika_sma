#include <stdio.h>
int main(){

    int MTK, BINDO, PPKN, IPA, IPS, MTKK, BINDOK, PPKNK, IPAK, IPSK, rata_rata_u, rata_rata_k, rata_rata_tot;
    char yes;

    printf("Program Penyari Rata-Rata Nilai Rapot\n");
    printf("=====================================\n");
    printf("Nilai Mata Pelajaran\n");
    printf("=====================\n");
do{
printf("Masukkan Nilai Ujian Matematika: \n");
scanf("%d", &MTK);
printf("Masukkan Nilai Keterampilan Matematika: \n");
scanf("%d", &MTKK);

printf("Masukkan Nilai Ujian Bahasa Indonesia: \n");
scanf("%d", &BINDO);
printf("Masukkan Nilai Keterampilan Bahasa Indonesia: \n");
scanf("%d", &BINDOK);

printf("Masukkan Nilai Ujian PPKN: \n");
scanf("%d", &PPKN);
printf("Masukkan Nilai Keterampilan PPKN: \n");
scanf("%d", &PPKNK);

printf("Masukkan Nilai Ujian IPA: \n");
scanf("%d", &IPA);
printf("Masukkan Nilai Keterampilan IPA: \n");
scanf("%d", &IPAK);

printf("Masukkan Nilai Ujian IPS: \n");
scanf("%d", &IPS);
printf("Masukkan Nilai Keterampilan IPS: \n");
scanf("%d", &IPSK);

rata_rata_u = (MTK + BINDO + PPKN + IPA + IPS) / 5;
rata_rata_k = (MTKK + BINDOK + PPKNK + IPAK + IPSK) / 5;
rata_rata_tot = (rata_rata_u + rata_rata_k) / 2;

printf("Nilai rata rata ujian kamu adalah: %d\n", rata_rata_u);
printf("Nilai rata rata keterampilan kamu adalah: %d\n", rata_rata_k);
printf("Nilai rata rata total kamu adalah: %d\n", rata_rata_tot);

printf ("ada murid lain? (y/t)\n");
scanf ("%c", &yes);
}
while (yes == 'y');
return 0;
}

