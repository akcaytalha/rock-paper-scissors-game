#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int game(char me,char computer){
	if(me== 'T' && computer== 'K'){
		return 0;
	}
	else if(me== 'K' && computer== 'T'){
		return 1;
	}
	else if(me== 'T' && computer== 'M'){
		return 1;
	}
	else if(me== 'M' && computer== 'T'){
		return 0;
	}
	else if(me== 'K' && computer== 'M'){
		return 0;
	}
		else if(me== 'M' && computer== 'K'){
		return 1;
	}
	else {
		return -1;
	}
	}



int main(){
	int n,result;
	char me,computer;
	
	srand(time(NULL));
	n=rand()%100;
	printf("%d",n);
	
	if(n<35){
		computer='T';
	}	
		else if(n>=35 && n<70){
			computer='K';
		}
		else {
			computer='M';
		}
		printf("\n\n\n\n\n\n\t\t\t\t tas kagit makas oyunu:\n\n\n\n\n\n\t\t\t\t");
		printf("\n\n\n\n\n\n\t\t\t\t tas icin T kagit icin K makas icin M giriniz:\n\n\n\n\n\n\t\t\t\t");
		
		scanf("%c",&me);
		
		result=game(me,computer);
		// 1 ise ben kazandim
		// 0 ise bilgisayar kazandi
		// -1 ise berabere kaldı
		
		if(result == -1){
			printf("\n\n\n\t\t\t Berabere kalindi:\n");
		}
		else if(result == 1){
			printf("\n\n\n\t\t\t Ben kazandim:\n");
		}
		else {
			printf("\n\n\n\t\t\t Bilgisayar kazandi:\n");
		}
		
		printf("\t\t\t\t senin secimin: %c Bilgisayarin secimi: %c",me,computer);    
	
	return 0;
}
