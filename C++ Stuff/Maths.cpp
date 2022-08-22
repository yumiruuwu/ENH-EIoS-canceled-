#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>

void gotoXY (int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int Noi_roi(int p,int q){ //thuat toan phep noi roi PvQ
	if(p==0&&q==0){
		return 0;
	}
	return 1;
}
int Phu_dinh(int q){ //thuat toan phu dinh
	if(q==1){
		return 0;
	}
	return 1;
}
int Noi_lien(int p,int q){ //thuat toan phep noi lien P^Q
	if(p==1&&q==1){
		return 1;
	}
	return 0;
}
int Keo_theo(int p,int q){ // thuat toan phep keo theo P =>Q
	if(p==1&&q==0)
		return 0;
	return 1 ;
}
int Keo_theo_2chieu(int p, int q){ //thuat toan phep keo theo 2 chieu P <=>Q
	if(p==0&&q==0)
		return 1;
	else if(p==1&&q==1)
		return 1;
	return 0;
}
void Viet_dong(int p,int q,int r,int bieu_thuc1,int bieu_thuc2 , int dong){ //dong la so dong can viêt
	gotoXY(5,dong);
	printf("%d",p);
	gotoXY(18,dong);
	printf("%d",q);
	gotoXY(28,dong);
	printf("%d",r);
	gotoXY(42,dong);
	printf("%d",bieu_thuc1);
	gotoXY(52,dong);
	printf("%d",bieu_thuc2);

}

void Viet_dong1(int p,int q,int r,int bieu_thuc2 , int dong){ //dong la so dong can viêt
	gotoXY(5,dong);
	printf("%d",p);
	gotoXY(18,dong);
	printf("%d",q);
	gotoXY(28,dong);
	printf("%d",r);
	gotoXY(52,dong);
	printf("%d",bieu_thuc2);

}

void cau3(){
	int p,q;
	gotoXY(5,2);
	printf("P");
	gotoXY(18,2);
	printf("Q");
	gotoXY(28,2);
	printf("-(P^Q)");
	gotoXY(40,2);
	printf("-Pv-Q");
	gotoXY(48,2);
	printf("-(P^Q)<=>-Pv-Q");
	//dong1
	p=0;
	q = 0;
	Viet_dong(p,q,Phu_dinh(Noi_lien(p,q)),Noi_roi(Phu_dinh(p),Phu_dinh(q)),Keo_theo_2chieu(Phu_dinh(Noi_lien(p,q)),Noi_roi(Phu_dinh(p),Phu_dinh(q))),5);
	p=0;
	q = 1;
	Viet_dong(p,q,Phu_dinh(Noi_lien(p,q)),Noi_roi(Phu_dinh(p),Phu_dinh(q)),Keo_theo_2chieu(Phu_dinh(Noi_lien(p,q)),Noi_roi(Phu_dinh(p),Phu_dinh(q))),8);
	p=1;
	q = 0;
	Viet_dong(p,q,Phu_dinh(Noi_lien(p,q)),Noi_roi(Phu_dinh(p),Phu_dinh(q)),Keo_theo_2chieu(Phu_dinh(Noi_lien(p,q)),Noi_roi(Phu_dinh(p),Phu_dinh(q))),11);
	p=1;
	q = 1;
	Viet_dong(p,q,Phu_dinh(Noi_lien(p,q)),Noi_roi(Phu_dinh(p),Phu_dinh(q)),Keo_theo_2chieu(Phu_dinh(Noi_lien(p,q)),Noi_roi(Phu_dinh(p),Phu_dinh(q))),14);
	
}
void Cau2(){
	int p,q,r;
	gotoXY(5,2);
	printf("P");
	gotoXY(18,2);
	printf("Q");
	gotoXY(28,2);
	printf("R");
	gotoXY(42,2);
	printf("P^Q");
	gotoXY(52,2);
	printf("(P^Q)vR");
	//dong1
	p=0;
	q = 0;
	r = 0;
	Viet_dong(p,q,r,Noi_lien(p,q),Noi_roi(Noi_lien(p,q),r),5);
	//dong2
	p=1;
	q = 0;
	r = 0;
	Viet_dong(p,q,r,Noi_lien(p,q),Noi_roi(Noi_lien(p,q),r),8);
	//dong3
	p=0;
	q = 1;
	r = 0;
	Viet_dong(p,q,r,Noi_lien(p,q),Noi_roi(Noi_lien(p,q),r),11);
	//dong4
	p=0;
	q = 0;
	r = 1;
	Viet_dong(p,q,r,Noi_roi(p,q),Noi_roi(Noi_lien(p,q),r),14);
	//dong5
	p=1;
	q = 1;
	r = 0;
	Viet_dong(p,q,r,Noi_lien(p,q),Noi_roi(Noi_lien(p,q),r),17);
	//dong6
	p=1;
	q = 0;
	r = 1;
	Viet_dong(p,q,r,Noi_lien(p,q),Keo_theo(Noi_lien(p,q),r),20);
	//dong7
	p=0;
	q = 1;
	r = 1;
	Viet_dong(p,q,r,Noi_lien(p,q),Noi_roi(Noi_lien(p,q),r),23);
	//dong8
	p=1;
	q = 1;
	r = 1;
	Viet_dong(p,q,r,Noi_lien(p,q),Noi_roi(Noi_lien(p,q),r),26);

}
void Cau1(){
	int p,q,r;
	gotoXY(5,2);
	printf("P");
	gotoXY(18,2);
	printf("Q");
	gotoXY(28,2);
	printf("R");
	gotoXY(42,2);
	printf("P^Q");
	gotoXY(52,2);
	printf("(PvQ)=>R");
	//dong1
	p=0;
	q = 0;
	r = 0;
	Viet_dong(p,q,r,Noi_roi(p,q),Keo_theo(Noi_roi(p,q),r),5);
	//dong2
	p=1;
	q = 0;
	r = 0;
	Viet_dong(p,q,r,Noi_roi(p,q),Keo_theo(Noi_roi(p,q),r),8);
	//dong3
	p=0;
	q = 1;
	r = 0;
	Viet_dong(p,q,r,Noi_roi(p,q),Keo_theo(Noi_roi(p,q),r),11);
	//dong4
	p=0;
	q = 0;
	r = 1;
	Viet_dong(p,q,r,Noi_roi(p,q),Keo_theo(Noi_roi(p,q),r),14);
	//dong5
	p=1;
	q = 1;
	r = 0;
	Viet_dong(p,q,r,Noi_roi(p,q),Keo_theo(Noi_roi(p,q),r),17);
	//dong6
	p=1;
	q = 0;
	r = 1;
	Viet_dong(p,q,r,Noi_roi(p,q),Keo_theo(Noi_roi(p,q),r),20);
	//dong7
	p=0;
	q = 1;
	r = 1;
	Viet_dong(p,q,r,Noi_roi(p,q),Keo_theo(Noi_roi(p,q),r),23);
	//dong8
	p=1;
	q = 1;
	r = 1;
	Viet_dong(p,q,r,Noi_roi(p,q),Keo_theo(Noi_roi(p,q),r),26);
	
}

void Cau4(){
	int p,q,r;
	gotoXY(5,2);
	printf("P");
	gotoXY(18,2);
	printf("Q");
	gotoXY(28,2);
	printf("R");
	gotoXY(52,2);
	printf("P^Q^R");
	//dong1
	p=0;
	q = 0;
	r = 0;
	Viet_dong1(p,q,r,Noi_lien(Noi_lien(p,q),r),5);
	//dong2
	p=1;
	q = 0;
	r = 0;
	Viet_dong1(p,q,r,Noi_lien(Noi_lien(p,q),r),8);
	//dong3
	p=0;
	q = 1;
	r = 0;
	Viet_dong1(p,q,r,Noi_lien(Noi_lien(p,q),r),11);
	//dong4
	p=0;
	q = 0;
	r = 1;
	Viet_dong1(p,q,r,Noi_lien(Noi_lien(p,q),r),14);
	//dong5
	p=1;
	q = 1;
	r = 0;
	Viet_dong1(p,q,r,Noi_lien(Noi_lien(p,q),r),17);
	//dong6
	p=1;
	q = 0;
	r = 1;
	Viet_dong1(p,q,r,Noi_lien(Noi_lien(p,q),r),20);
	//dong7
	p=0;
	q = 1;
	r = 1;
	Viet_dong1(p,q,r,Noi_lien(Noi_lien(p,q),r),23);
	//dong8
	p=1;
	q = 1;
	r = 1;
	Viet_dong1(p,q,r,Noi_lien(Noi_lien(p,q),r),26);
	
}

void Ve_bang(){
	int i;
	printf(" ");
	for(i=0;i<61;i++)
		printf("_");
	for(i=1;i<28;i++){
		gotoXY(61,i);
		printf("|");
	}
	for(i=1;i<28;i++){
		gotoXY(0,i);
		printf("|");
	}
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,3);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,6);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,9);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,12);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,15);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,18);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,21);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,24);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,27);
	for(i=0;i<60;i++)
		printf("_");	
	for(i=1;i<28;i++){
		gotoXY(12,i);
		printf("|");
	}
	for(i=1;i<28;i++){
		gotoXY(24,i);
		printf("|");
	}
	for(i=1;i<28;i++){
		gotoXY(36,i);
		printf("|");
	}
	for(i=1;i<28;i++){
		gotoXY(48,i);
		printf("|");
	}
}

void Ve_bang1(){
	int i;
	printf(" ");
	for(i=0;i<61;i++)
		printf("_");
	for(i=1;i<28;i++){
		gotoXY(61,i);
		printf("|");
	}
	for(i=1;i<28;i++){
		gotoXY(0,i);
		printf("|");
	}
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,3);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,6);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,9);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,12);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,15);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,18);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,21);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,24);
	for(i=0;i<60;i++)
		printf("_");
	gotoXY(1,27);
	for(i=0;i<60;i++)
		printf("_");	
	for(i=1;i<28;i++){
		gotoXY(12,i);
		printf("|");
	}
	for(i=1;i<28;i++){
		gotoXY(24,i);
		printf("|");
	}
//	for(i=1;i<28;i++){
//		gotoXY(36,i);
//		printf("|");
//	}
//	for(i=1;i<28;i++){
//		gotoXY(48,i);
//		printf("|");
//	}
}

int main(){
	char chuoi[20];
	do{
		printf("Phep noi lien la ^\nPhep noi roi la v\nPhep keo theo la =>\nPhep keo theo hai chieu la <=>\nPhep phu dinh la -\n\n\n- Bieu thuc cua ban: ");
		fflush(stdin);gets(chuoi);
		if(strcmp(chuoi,"(PvQ)=>R")!=0&&strcmp(chuoi,"(P^Q)vR")!=0&&strcmp("-(P^Q)<=>-Pv-Q",chuoi)!=0&&strcmp(chuoi,"P^Q^R")!=0){
			printf("Chua co bieu thuc nay trong database !, HAY NHAP LAI !");
		}
	}while(strcmp(chuoi,"(PvQ)=>R")!=0&&strcmp(chuoi,"(P^Q)vR")!=0&&strcmp("-(P^Q)<=>-Pv-Q",chuoi)!=0&&strcmp(chuoi,"P^Q^R")!=0);
	
	if(strcmp(chuoi,"(PvQ)=>R")==0){
		system("cls");	
		Ve_bang();
		Cau1();
		gotoXY(70,28);
		printf("\nDay la bang chan tri cua : (PvQ)=>R \n");
	}
	else if(strcmp(chuoi,"(P^Q)vR")==0){
		system("cls");	
		Ve_bang();
		Cau2();
		gotoXY(70,28);
		printf("\nDay la bang chan tri cua : (PvQ)=>R \n");
	}
	else if(strcmp("-(P^Q)<=>-Pv-Q",chuoi)==0){
		system("cls");
		Ve_bang();
		cau3();
		gotoXY(70,28);
		printf("\nDay la bang chan tri cua : -(P^Q)<=>-Pv-Q \n");
	}
	else if(strcmp(chuoi,"P^Q^R")==0){
		system("cls");
		Ve_bang1();
		Cau4();
		gotoXY(70,28);
		printf("\nDay la bang chan tri cua : P^Q^R \n");
	}
	return 0;
}