#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sifre = 2003;
	int kartsifresi;
	int girishakki = 5;
	int bakiye = 1000;
	int islem;
	int eklenen_miktar;
	int cekilen_miktar;
	int fatura = 800;
	int IBAN,gonderme_miktari;
	
	while(girishakki != 0)
	{
		printf("kart sifresiniz giriniz:\n");
		scanf("%d",&kartsifresi);
		if(kartsifresi == sifre)
		{
			printf("kullanici girisi yapildi...\n\n");
			break;
		}
		else
		{
			printf("hatali sifre girdiniz...\n");
			girishakki --;
		}
		if(girishakki == 0)
		{
			printf("giris haklariniz tukendi...");
			break;
		}
	}
	

	
	
	
	while(1){
	printf("kullanilabilir bakiye:%d\n",bakiye);
	printf("bankamatik uygulamasi\n  1-para cekme\n 2-para yatirma\n 3-fatura ode\n 4-havale/EFT\n 5-cikis\n\n");
	scanf("%d",&islem);
	if(islem == 1)
	{
		printf("cekilecek miktari giriniz:\n");
		scanf("%d",&cekilen_miktar);
		if(bakiye < cekilen_miktar)
		{
			printf("bakiyenizin üzerinde para cekemezsiniz...");
		}
		else
		{
			bakiye -= cekilen_miktar;
			printf("yeni bakiye degeriniz: %d\n",bakiye);
			
		}
		
	}
	else if(islem == 2)
	{
		printf("yatirilicak miktari giriniz:\n");
		scanf("%d",&eklenen_miktar);
		bakiye += eklenen_miktar;
		printf("yeni bakiye degeriniz: %d\n",bakiye);
		
	}
	
	else if(islem == 3)
	{
		bakiye -= fatura;
		printf("faturaniz odendi...\n");
		printf("kalan bakiye: %d\n",bakiye);
		continue;	
	}
	
	else if(islem == 4)
	{
		printf("para gondermek istediginiz IBAN i girin: ");
		scanf("%d",&IBAN);
		
		printf("gondermek istediginiz miktari giriniz: ");
		scanf("%d",&gonderme_miktari);
		if(bakiye < gonderme_miktari)
		{
			printf("bakiye miktarindan fazla para gonderemezsiniz...");
		}
		else 
		{
			bakiye -= gonderme_miktari;
			printf("%d IBAN no suna %d miktar gonderildi...\n\n",IBAN,gonderme_miktari);
			printf("bakiye miktariniz: %d",bakiye);
		}
		
	}
	
	else if(islem == 5)
	{
		printf("uygulamadan ciktiniz iyi gunler dileriz....");
		break;
	}
	
	else
	{
		printf("lutfen gecerli bir islem seciniz...");
	}
}

}
