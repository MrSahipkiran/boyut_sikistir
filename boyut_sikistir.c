#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
#include <string.h>
	
	float bit_sayisi=0;
	
void char_to_binary(char karakter[1000]){
	int i=0;
	for(i=0;i<strlen(karakter);i++){
		switch(karakter[i]){
		case 'a' : printf("00");		bit_sayisi+=2;	break;
		case 'e' : printf("1100");		bit_sayisi+=4;	break;
		case 'ı' : printf("1010");		bit_sayisi+=4;	break;
		case 'n' : printf("1000");		bit_sayisi+=4;	break;
		case 'r' : printf("011");		bit_sayisi+=3;	break;
		case 'l' : printf("11101");		bit_sayisi+=5;	break;
		case 'i' : printf("11100");		bit_sayisi+=5;	break;
		case 'd' : printf("11010");		bit_sayisi+=5;	break;
		case 'k' : printf("10111");		bit_sayisi+=5;	break;
		case 'm' : printf("10010");		bit_sayisi+=5;	break;
		case 'u' : printf("0101");		bit_sayisi+=4;	break;
		case 'y' : printf("0100");		bit_sayisi+=4;	break;
		case 't' : printf("111111");	bit_sayisi+=6;	break;
		case 'b' : printf("111110");	bit_sayisi+=6;	break;
		case 's' : printf("111101");	bit_sayisi+=6;	break;
		case 'o' : printf("110110");	bit_sayisi+=6;	break;
		case 'ü' : printf("101100");	bit_sayisi+=6;	break;
		case 'ş' : printf("100111");	bit_sayisi+=6;	break;
		case 'z' : printf("1111001");	bit_sayisi+=7;	break;
		case 'g' : printf("1111000");	bit_sayisi+=7;	break;
		case 'ç' : printf("1101111");	bit_sayisi+=7;	break;
		case 'h' : printf("1011011");	bit_sayisi+=7;	break;
		case 'v' : printf("1011010");	bit_sayisi+=7;	break;
		case 'c' : printf("1001101");	bit_sayisi+=7;	break;
		case 'ö' : printf("10011100");	bit_sayisi+=8;	break;
		case 'p' : printf("11011101");	bit_sayisi+=8;	break;
		case 'f' : printf("110111001");	bit_sayisi+=9;	break;
		case 'j' : printf("110111000");	bit_sayisi+=9;	break;
		case ' ' : 	break;
		default  : printf("\nHATALI KARAKTER GIRILDI\n"); break;
		}
	}
}


	
	void uygunluk_kontrol(char mesaj[1000]){
		int i=0;char temp[10];
		for(i;i<strlen(mesaj);i++){
			//2bit
			
			if(strcmp(mesaj[i,i+1],'00'))i+=1;
			//3bit
			else if(strcmp(mesaj[i,i+2],'011'))i+=2;
			//4bit
			else if(strcmp(mesaj[i,i+3],'1100')||strcmp(mesaj[i,i+3],'1010')||
					strcmp(mesaj[i,i+3],'1000')||strcmp(mesaj[i,i+3],'0101')||
					strcmp(mesaj[i,i+3],'0100'))i+=3;
			else printf("kodlamaniz uygun degildir");
		}
	}

	

int main(int argc, char *argv[]) {
	int i=0;
	char cumle[1000];char binary[8000];
	printf("Gondermek istediginiz mesaji giriniz\n");
	gets(cumle);
	float karakter_sayisi=strlen(cumle);
	float yuzde=bit_sayisi/(karakter_sayisi*8)*100;		//1 char 8 bit
	
	char_to_binary(cumle);
	
	/*printf("\nGondermek istediginiz binary kodu giriniz");
	gets(binary);
	uygunluk_kontrol(binary);*/
	
	printf("\nYUZDE %f SIKISTIRMA YAPILDI",yuzde);
	printf("\nPAKET %0.f PAKETE AYRILARAK GONDERILDI",bit_sayisi);
	return 0;
}