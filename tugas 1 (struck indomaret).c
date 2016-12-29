#include<stdio.h>
char nama[200],nama1[200],nama2[200];
int harga,harga1,harga2;
int jumlah,jumlah1,jumlah2;
int total,total1,total2,jml,dis,byr,kbl,cash,item;

int input()
{
printf("Masukkan Produk 1\t= ");
scanf("%s",&nama);
printf("Jumlah Produk 1\t\t=");
scanf("%d",&jumlah);
printf("Harga Produk 1\t\t=");
scanf("%d",&harga);
total=harga*jumlah;
printf("\n");
printf("Masukkan Produk 2\t= ");
scanf("%s",&nama1);
printf("Jumlah Produk 2\t\t=");
scanf("%d",&jumlah1);
printf("Harga Produk 2\t\t=");
scanf("%d",&harga1);
total1=harga1*jumlah1;
printf("\n");
printf("Masukkan Produk 3\t= ");
scanf("%s",&nama2);
printf("Jumlah Produk 3\t\t=");
scanf("%d",&jumlah2);
printf("Harga Produk 3\t\t=");
scanf("%d",&harga2);
total2=harga2*jumlah2;
jml=(total+total1+total2);
item=jumlah+jumlah1+jumlah2;
printf("Masukkan Discount %\t= ");
scanf("%d",&dis);
byr=(jml-((jml*dis)/100));
printf("Masukkan Uang Tunai\t= ");
scanf("%d",&cash);
kbl=(cash-byr);
}

void struk()
{
printf("\t=================================================\n");
printf("\t\t\t\tINDOMARET\n");
printf("\tJL.Raya Solo-Boyolali KM.18,Kartosuro,Jawa Tengah\n");
printf("\t\t\tNo.tlp (0271)7899879\n");
printf("\t=================================================\n");
printf("\tNO\tNama\tHarga\tJumlah\tTotal\n");
printf("\t1.\t%s\t%d\t%d\t%d\n",nama,harga,jumlah,total);
printf("\t2.\t%s\t%d\t%d\t%d\n",nama1,harga1,jumlah1,total1);
printf("\t3.\t%s\t%d\t%d\t%d\n",nama2,harga2,jumlah2,total2);
printf("\n");
printf("\t-------------------------------------------------\n");
printf("\tTotal item\t\t%d\t%d\n",item,jml);
printf("\tDiscount\t\t\t%d\n",dis);
printf("\tBayar\t\t\t\t%d\n",byr);
printf("\tTunai\t\t\t\t%d\n",cash);
printf("\tKembalian\t\t\t%d\n",kbl);
printf("\t-------------------------------------------------\n");
printf("\t\t\t\tTerima Kasih\n");
printf("\t\t\t  www.indomaret.co.id\n");
}

void main()
{
    input();
    system("cls");
    struk();
}
