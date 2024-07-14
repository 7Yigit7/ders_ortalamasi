#include <stdio.h>

int main(){
	int mat = 0;
	int bilisim = 0;
	int turk = 0;
	int tarih = 0;
	int fen = 0;
	int muz = 0;

	printf("Matematik Notu: ");
	scanf("%d",&mat);

	printf("Bilişim notu: ");
	scanf("%d",&bilisim);

	printf("Türkçe dersi: ");
	scanf("%d",&turk);

	printf("Tarih: ");
	scanf("%d",&tarih);

	printf("Fen: ");
	scanf("%d",&fen);

	printf("Müzik: ");
	scanf("%d",&muz);

	int toplami = mat + bilisim + turk + tarih + fen + muz;
	int ders_sayisi = 6;
	int sonuc = toplami / ders_sayisi;

	printf("Sonuç %d \n",sonuc);
	return 0;
}
