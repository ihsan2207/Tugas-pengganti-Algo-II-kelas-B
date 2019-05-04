#include<iostream>
using namespace::std;

int jns,ttl=0,jml,x,ketemu,indeks,diskon,ttld;
int a[10],asc;
double hrg[10];
string brg,nm[5]{"Bayu","Irvan","Susiati","Diana","Roni"};
string nama,cri,nmr[5]={"A001","A002","A003","A004","A005"};
char mbr;

double hitung(){
    for (int i=0;i<jns;i++){
        cout<<"\n Item "<<i+1;
        cout<<"\n Barang yang dibeli  : ";cin>>brg;
        cout<<" Jumlah              : ";cin>>jml;
        cout<<" Harga               : Rp. ";cin>>hrg[i];
        ttl=ttl+(jml*hrg[i]);}
    for (int j=jns-2;j>=0;j--){
        for (int b=0;b<=j;b++){
            if (hrg[b]>hrg[b]+1){
                asc=hrg[b];
                hrg[b]=hrg[b]+1;
                hrg[b+1]=asc;}}}
    cout<<"\n <======Hasil Sortingan Harga======>";
    for (int c=0;c<jns;c++){ cout<<"\n Harga : Rp. "<<hrg[c];}
    diskon=ttl*0.05;
    ttld=ttl-diskon;}
main(){
    cout<<" <==========Selamat Datang==========>\n\n";
    cout<<"\n Apakah anda member (Y/T)  : ";cin>>mbr;
     if (mbr=='Y'||mbr=='y'){
        cout<<"\n <<Anda mendapat diskon sebesar 5% dari total pembelanjaan>>";
        cout<<"\n\n Nomor Id        : ";cin>>cri;
        ketemu=0;
            for (int i=0;i<5;i++){
                if(cri==nmr[i]){
                    ketemu=1;
                    cout<<" Nama member     : "<<nm[i];}}
        cout<<"\n\n Banyak item        : ";cin>>jns;
        hitung();
        cout<<"\n <==================================>";
        cout<<"\n Total sebelum diskon         : Rp. "<<ttl;
        cout<<"\n Total diskon                 : Rp. "<<diskon;
        cout<<"\n Total setelah diskon         : Rp. "<<ttld;}
    else {
        cout<<"\n Nama pelanggan    : ";cin>>nama;
        cout<<"\n Banyak item       : ";cin>>jns;
        hitung();
        cout<<"\n <==================================>";
        cout<<"\n Total harga       : Rp.  "<<ttl;}}
