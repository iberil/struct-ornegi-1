#include<stdio.h>                           //5 öðrencinin 10 soruluk sýnavdaki netlerini hesaplayýp ögrenci numarasý ile birlekte ekrana basan program
#include<stdlib.h>

struct ogrenci_tip{
	int no;
	char cevap[10];
};

struct sonuc_tip{
	int no;
	int note;
};

int main()
{
	struct ogrenci_tip ogrenci[5];
	struct sonuc_tip sonuc[5];
	char anahtar[10];
	int i,j;
	int dogru,yanlis,bos;
	
	printf("cevap anahtarini giriniz:\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",&anahtar[i]);
	}
	
	printf("ogrenci bilgileri:\n");
	for(j=0;j<5;j++)
	{
		printf("\nogrencinin numarasini giriniz:\n");
		scanf("%d",&ogrenci[j].no);
		printf("\ncevaplari giriniz:\n");
		dogru=yanlis=bos=0;
		for(i=0;i<10;i++)
		{
			scanf("%s",&ogrenci[j].cevap[i]);
			
			if(anahtar[i]==ogrenci[j].cevap[i])
			{
				dogru++;
			}
			else if(ogrenci[j].cevap[i]==' ')
			{
				bos++;
			}
			else
			{
				yanlis++;
			}
			
			sonuc[j].no = ogrenci[j].no;
			sonuc[j].note=dogru-bos-(yanlis/4);
		}
		
		printf("dogru:%d\tyanlis:%d\tbos:%d",dogru,yanlis,bos);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nogrenci no:%d\t\tnotu:%d",sonuc[i].no,sonuc[i].note);
	}
	
	printf("\n");
	
}
