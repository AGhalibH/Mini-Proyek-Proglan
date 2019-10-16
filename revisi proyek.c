#include <stdio.h>
#include <windows.h>
#include <string.h>

int aa, bb, lama, hargakendaraan, total, pilihanjasa, tipemobil, tipemotor;
int receipt(), errorlamas();
char nama[100], cari[100], tambahsupir;

struct jenis1 
{ 
	int harga;
}; 

struct jenis2
{
	char nama[100];
};

struct jenis1 sedan[4] = {150000, 300000, 250000, 200000};
struct jenis1 minibus[5] = {100000, 150000, 300000, 200000, 175000};
struct jenis1 bus[3] = {1500000, 1250000, 1000000};
struct jenis1 skutik[3] = {40000, 75000, 50000};
struct jenis1 bebek[3] = {80000, 65000, 70000};
struct jenis1 sport[3] = {150000, 165000, 158000};

struct jenis2 mobilsedan[4] = {"Corolla", "Civic", "Accord", "Vios"};
struct jenis2 mobilminibus[5] = {"Livina", "Avanza", "Kijang", "Xpander", "Ertiga"};
struct jenis2 mobilbus[3] = {"55 kursi", "43 kursi", "25 kursi"};
struct jenis2 motorskutik[3] = {"NMax", "Vario", "Vespa"};
struct jenis2 motorbebek[3] = {"Jupiter", "Supra", "Smash"};
struct jenis2 motorsport[3] = {"R25", "CBR", "Ninja"};

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
START EXIT
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int close(){
	system("CLS");
	int i=0;
	for(i=0;i<=10;i++){
		printf("\n");
	}
	printf("					Good Bye\n");
	Sleep(1000);
	system("cls");
	exit(0);	
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END EXIT
START LIST
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int listsedan(){
	system("cls");
	int i;
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis sedan yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 4; i++){
		printf("	%d. %s", (i+1), mobilsedan[i].nama);
		printf(", Rp %d per hari\n", sedan[i].harga);
    }
    printf("	--------------------------------------------\n");
    printf("	Press any key to go back to the main menu...");
    getch();
    system("cls");
    menu();
}

int listminibus(){
	system("cls");
	int i;
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis minibus yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 5; i++){
		printf("	%d. %s", (i+1), mobilminibus[i].nama);
		printf(", Rp %d per hari\n", minibus[i].harga);
    }
    printf("	--------------------------------------------\n");
    printf("	Press any key to go back to the main menu...");
    getch();
    system("cls");
    menu();	
}

int listbus(){
	system("cls");
	int i;
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis bus yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s", (i+1), mobilbus[i].nama);
		printf(", Rp %d per hari\n", bus[i].harga);
    }
    printf("	--------------------------------------------\n");
    printf("	Press any key to go back to the main menu...");
    getch();
    system("cls");
    menu();	
}

int listmobil(){
	system("cls");
	int i, tipe;
	char  mobil[2][100] = {"Sedan", "Minibus"};
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis mobil yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 2; i++){
		printf("	%d. %s\n", (i+1), mobil[i]);
    }
    printf("	--------------------------------------------\n");
    printf("	Pilih jenis mobil yang anda inginkan : ");
    scanf("%d", &tipe);
	if(tipe==1){
		listsedan();
	} else if(tipe==2){
		listminibus();
	} else {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		while( ( tipe = getchar() ) != '\n' && tipe != EOF );
		listmobil();		
	}
}

int listskutik(){
	system("cls");
	int i;
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis scooter automatic yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s", (i+1), motorskutik[i].nama);
		printf(", Rp %d per hari\n", skutik[i].harga);
    }
    printf("	--------------------------------------------\n");
    printf("	Press any key to go back to the main menu...");
    getch();
    system("cls");
    menu();	
}

int listbebek(){
	system("cls");
	int i;
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis scooter manual yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s", (i+1), motorbebek[i].nama);
		printf(", Rp %d per hari\n", bebek[i].harga);
    }
    printf("	--------------------------------------------\n");
    printf("	Press any key to go back to the main menu...");
    getch();
    system("cls");
    menu();	
}

int listsport(){
	system("cls");
	int i;
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis motor sport yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s", (i+1), motorsport[i].nama);
		printf(", Rp %d per hari\n", sport[i].harga);
    }
    printf("	--------------------------------------------\n");
    printf("	Press any key to go back to the main menu...");
    getch();
    system("cls");
    menu();	
}

int listmotor(){
	system("cls");
	int i, tipe;
	char  motor[3][100] = {"Scooter Automatic", "Scooter Manual", "Sport"};
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis motor yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s\n", (i+1), motor[i]);
    }
    printf("	--------------------------------------------\n");
    printf("	Pilih jenis motor yang anda inginkan : ");
    scanf("%d", &tipe);
	if(tipe==1){
		listskutik();
	} else if(tipe==2){
		listbebek();
	} else if(tipe==3){
		listsport();
	} else {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		while( ( tipe = getchar() ) != '\n' && tipe != EOF );
		listmotor();		
	}
}

int listsupir(){
	system("cls");
	int i;
	char supir[3][100] = {"1-3 hari", "4-7 hari", "Lebih dari 7 hari"};
	int harga[3] = {125000, 100000, 75000};
	printf("\n\n\n\n");
	printf("	Berikut ini adalah harga jasa supir yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s", (i+1), supir[i]);
		printf(", Rp.%d per hari\n", harga[i]);
    }
    printf("	--------------------------------------------\n");    
    printf("	NOTE!! : Supir hanya tersedia untuk kendaraan roda empat\n");
    printf("	--------------------------------------------\n");
    printf("	Press any key to go back to the main menu...");
    getch();
    system("cls");
    menu();	
}

int list(){
	int pilihan;
	system("cls");
	printf("\n\n\n\n");
	printf("	Jasa yang tersedia\n");
	printf("	------------------\n");
	printf("	1. Mobil\n");
	printf("	2. Motor\n");
	printf("	3. Bus\n");
	printf("	4. Supir\n");
	printf("	------------------\n");
	printf("	Pilih jasa yang anda inginkan : ");
	scanf("%d", &pilihan);
	if(pilihan==1){
		listmobil();
	} else if(pilihan==2){
		listmotor();
	} else if(pilihan==3){
		listbus();
	} else if(pilihan==4){
		listsupir();
	} else {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		while( ( pilihan = getchar() ) != '\n' && pilihan != EOF );
		list();		
	}
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END LIST
START BOOKING SEDAN
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int invoice0(){
	char exit;
	system("cls");
	printf("\n\n\n\n");
	printf("	Invoice\n");
	printf("	---------------------------\n");
	printf("	Anda belum melakukan pemesanan\n\n");
	printf("	Kembali ke menu? (Y/N) : ");
	scanf("%s", &exit);
	printf("\n\n");
	if(exit==89||exit==121){
		system("cls");
		menu();
	} else if(exit==78||exit==110){
		close();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		invoice();
	}	
}

int invoice(){
	int kode;
	char exit;
	system("cls");
	printf("\n\n\n\n");
	printf("	Invoice\n");
	printf("	---------------------------\n");
	printf("	Nama 	: %s\n", nama);
	printf("	Pesanan	: %s", mobilsedan[bb].nama);
	if(tambahsupir==89||tambahsupir==121){
		printf(", dengan supir\n");
	} else if(tambahsupir==78||tambahsupir==110){
		printf("\n");
	}
	printf("	Lama	: %d hari\n", lama);
	printf("	Total	: %d\n", total);
	printf("	---------------------------\n");
	printf("	Kode Booking : ");
	kode=(total/1000);
	if(tambahsupir==89||tambahsupir==121){
		printf("%dSS%d", bb, kode);
	} else if(tambahsupir==78||tambahsupir==110){
		printf("%dS%d", bb, kode);
	}
	printf("\n\n");
	printf("	Kembali ke menu? (Y/N) : ");
	scanf("%s", &exit);
	if(exit==89||exit==121){
		system("cls");
		menu();
	} else if(exit==78||exit==110){
		close();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		invoice();
	}
}

int errorsupirs(){
	printf("\n\n\n\n");
	printf("	%s\n", mobilsedan[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");
	printf("	Sewa untuk berapa hari? %d\n", lama);
	receipt();
}

int receipt(){
	int hargasupir, price;
	int harga[3] = {125000, 100000, 75000};
	printf("\n");
	printf("	Ingin menggunakan supir? (Y/N) : ");
	scanf("%s", &tambahsupir);
	if(tambahsupir==89||tambahsupir==121){
		if(lama<=3){
			hargasupir=lama*harga[0];
		} else if((lama>3)&&(lama<=7)){
			hargasupir=lama*harga[1];
		} else if((lama>7)){
			hargasupir=lama*harga[2];
		}
		total=hargakendaraan+hargasupir;
		invoice();
	} else if(tambahsupir==78||tambahsupir==110){
		hargasupir=0;
		total=hargakendaraan+hargasupir;
		invoice();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		errorsupirs();
	}
}

int errorlamas(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", mobilsedan[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");	
	lamasewa();
}

int lamasewa(){
	printf("	Sewa untuk berapa hari? ");
	scanf("%d", &lama);
	if((lama>=1)&&(lama<=31)){
		hargakendaraan = sedan[bb].harga*lama;
		receipt();
	} else {
		printf("\n	Masukkan input lain!\n");
		printf("	NOTE!! Maksimal lama penyewaan adalah 31 hari!!\n\n	");
		system("PAUSE");
		system("cls");
		while((lama = getchar()) != EOF && lama != '\n')
		errorlamas();
	}	
}

int datadiri(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", mobilsedan[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : ");
	scanf(" %[^\n]s",&nama);
	printf("\n");
	lamasewa();
}

int sewasedan(){
	system("cls");
	int i, price=0;
	char pesanan[100];
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis sedan yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 4; i++){
		printf("	%d. %s\n", (i+1), mobilsedan[i].nama);
    }
    printf("	--------------------------------------------\n");
    printf("	Pilih sedan yang anda ingin pesan : ");
    scanf(" %[^\n]s", &pesanan);
    for(aa = 0; aa < 4; aa++){
    	if(strcmp(pesanan, mobilsedan[aa].nama) == 0){
    		price = sedan[aa].harga;
    		bb=aa;
    		datadiri();
		}
	}
	if(strcmp(pesanan, "1") == 0){
		price = sedan[0].harga;
		bb=0;
		datadiri();
	} else if(strcmp(pesanan, "2") == 0){
		price = sedan[1].harga;
		bb=1;
		datadiri();
	} else if(strcmp(pesanan, "3") == 0){
		price = sedan[2].harga;
		bb=2;
		datadiri();
	} else if(strcmp(pesanan, "4") == 0){
		price = sedan[3].harga;
		bb=3;
		datadiri();
	} else if(price==0) {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		sewasedan();		
	}
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END BOOKING SEDAN
START BOOKING MINIBUS
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int invoicee(){
	int kode;
	char exit;
	system("cls");
	printf("\n\n\n\n");
	printf("	Invoice\n");
	printf("	---------------------------\n");
	printf("	Nama 	: %s\n", nama);
	printf("	Pesanan	: %s", mobilminibus[bb].nama);
	if(tambahsupir==89||tambahsupir==121){
		printf(", dengan supir\n");
	} else if(tambahsupir==78||tambahsupir==110){
		printf("\n");
	}
	printf("	Lama	: %d hari\n", lama);
	printf("	Total	: %d\n", total);
	printf("	---------------------------\n");
	printf("	Kode Booking : ");
	kode=(total/1000);
	if(tambahsupir==89||tambahsupir==121){
		printf("%dSMB%d", bb, kode);
	} else if(tambahsupir==78||tambahsupir==110){
		printf("%dMB%d", bb, kode);
	}
	printf("\n\n");
	printf("	Kembali ke menu? (Y/N) : ");
	scanf("%s", &exit);
	if(exit==89||exit==121){
		system("cls");
		menu();
	} else if(exit==78||exit==110){
		close();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		invoicee();
	}
}

int errorsupirmb(){
	printf("\n\n\n\n");
	printf("	%s\n", mobilminibus[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");
	printf("	Sewa untuk berapa hari? %d\n", lama);
	receiptt();
}

int errorlamamb(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", mobilminibus[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");	
	lamasewaa();	
}

int receiptt(){
	int hargasupir, price;
	int harga[3] = {125000, 100000, 75000};
	printf("\n");
	printf("	Ingin menggunakan supir? (Y/N) : ");
	scanf("%s", &tambahsupir);
	if(tambahsupir==89||tambahsupir==121){
		if(lama<=3){
			hargasupir=lama*harga[0];
		} else if((lama>3)&&(lama<=7)){
			hargasupir=lama*harga[1];
		} else if((lama>7)){
			hargasupir=lama*harga[2];
		}
		total=hargakendaraan+hargasupir;
		invoicee();
	} else if(tambahsupir==78||tambahsupir==110){
		hargasupir=0;
		total=hargakendaraan+hargasupir;
		invoicee();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		errorsupirmb();
	}
}

int lamasewaa(){
	printf("	Sewa untuk berapa hari? ");
	scanf("%d", &lama);
	if((lama>=1)&&(lama<=31)){
		hargakendaraan = minibus[bb].harga*lama;
		receiptt();
	} else {
		printf("\n	Masukkan input lain!\n");
		printf("	NOTE!! Maksimal lama penyewaan adalah 31 hari!!\n\n	");
		system("PAUSE");
		system("cls");
		while((lama = getchar()) != EOF && lama != '\n');
		errorlamamb();
	}
}

int datadirii(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", mobilminibus[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : ");
	scanf(" %[^\n]s",&nama);
	printf("\n");
	lamasewaa();
}

int sewaminibus(){
	system("cls");
	int i, price=0;
	char pesanan[100];
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis sedan yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 5; i++){
		printf("	%d. %s\n", (i+1), mobilminibus[i].nama);
    }
    printf("	--------------------------------------------\n");
    printf("	Pilih minibus yang anda ingin pesan : ");
    scanf(" %[^\n]s", &pesanan);
    for(aa = 0; aa < 5; aa++){
    	if(strcmp(pesanan, mobilminibus[aa].nama) == 0){
    		price = minibus[aa].harga;
    		bb=aa;
    		datadirii();
		}
	}
	if(strcmp(pesanan, "1") == 0){
		price = minibus[0].harga;
		bb=0;
		datadirii();
	} else if(strcmp(pesanan, "2") == 0){
		price = minibus[1].harga;
		bb=1;
		datadirii();
	} else if(strcmp(pesanan, "3") == 0){
		price = minibus[2].harga;
		bb=2;
		datadirii();
	} else if(strcmp(pesanan, "4") == 0){
		price = minibus[3].harga;
		bb=3;
		datadirii();
	} else if(strcmp(pesanan, "5") == 0){
		price = minibus[4].harga;
		bb=4;
		datadirii();
	} else if(price==0) {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		sewaminibus();		
	}	
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END BOOKING MINIBUS
START BOOKING BUS
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int invoiceee(){
	int kode;
	char exit;
	system("cls");
	printf("\n\n\n\n");
	printf("	Invoice\n");
	printf("	---------------------------\n");
	printf("	Nama 	: %s\n", nama);
	printf("	Pesanan	: Bus %s", mobilbus[bb].nama);
	if(tambahsupir==89||tambahsupir==121){
		printf(", dengan supir\n");
	} else if(tambahsupir==78||tambahsupir==110){
		printf("\n");
	}
	printf("	Lama	: %d hari\n", lama);
	printf("	Total	: %d\n", total);
	printf("	---------------------------\n");
	printf("	Kode Booking : ");
	kode=(total/1000);
	if(tambahsupir==89||tambahsupir==121){
		printf("%dSB%d", bb, kode);
	} else if(tambahsupir==78||tambahsupir==110){
		printf("%dB%d", bb, kode);
	}
	printf("\n\n");
	printf("	Kembali ke menu? (Y/N) : ");
	scanf("%s", &exit);
	if(exit==89||exit==121){
		system("cls");
		menu();
	} else if(exit==78||exit==110){
		close();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		invoiceee();
	}
}

int errorsupirb(){
	printf("\n\n\n\n");
	printf("	Bus %s\n", mobilbus[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");
	printf("	Sewa untuk berapa hari? %d\n", lama);
	receipttt();
}

int errorlamab(){
	system("cls");
	printf("\n\n\n\n");
	printf("	Bus %s\n", mobilbus[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");	
	lamasewaaa();	
}

int receipttt(){
	int hargasupir, price;
	int harga[3] = {125000, 100000, 75000};
	printf("\n");
	printf("	Ingin menggunakan supir? (Y/N) : ");
	scanf("%s", &tambahsupir);
	if(tambahsupir==89||tambahsupir==121){
		if(lama<=3){
			hargasupir=lama*harga[0];
		} else if((lama>3)&&(lama<=7)){
			hargasupir=lama*harga[1];
		} else if((lama>7)){
			hargasupir=lama*harga[2];
		}
		total=hargakendaraan+hargasupir;
		invoiceee();
	} else if(tambahsupir==78||tambahsupir==110){
		hargasupir=0;
		total=hargakendaraan+hargasupir;
		invoiceee();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		errorsupirb();
	}
}

int lamasewaaa(){
	printf("	Sewa untuk berapa hari? ");
	scanf("%d", &lama);
	if((lama>=1)&&(lama<=31)){
		hargakendaraan = bus[bb].harga*lama;
		receipttt();
	} else {
		printf("\n	Masukkan input lain!\n");
		printf("	NOTE!! Maksimal lama penyewaan adalah 31 hari!!\n\n	");
		system("PAUSE");
		system("cls");
		while((lama = getchar()) != EOF && lama != '\n');
		errorlamab();
	}
}

int datadiriii(){
	system("cls");
	printf("\n\n\n\n");
	printf("	Bus %s\n", mobilbus[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : ");
	scanf(" %[^\n]s",&nama);
	printf("\n");
	lamasewaaa();
}

int sewabus(){
	system("cls");
	int i, price=0;
	char pesanan[100];
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis sedan yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. Bus %s\n", (i+1), mobilbus[i].nama);
    }
    printf("	--------------------------------------------\n");
    printf("	Pilih minibus yang anda ingin pesan : ");
    scanf(" %[^\n]s", &pesanan);
    for(aa = 0; aa < 3; aa++){
    	if(strcmp(pesanan, mobilbus[aa].nama) == 0){
    		price = bus[aa].harga;
    		bb=aa;
    		datadiriii();
		}
	}
	if(strcmp(pesanan, "1") == 0){
		price = bus[0].harga;
		bb=0;
		datadiriii();
	} else if(strcmp(pesanan, "2") == 0){
		price = bus[1].harga;
		bb=1;
		datadiriii();
	} else if(strcmp(pesanan, "3") == 0){
		price = bus[2].harga;
		bb=2;
		datadiriii();
	} else if(price==0) {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		sewabus();		
	}	
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END BOOKING BUS
START BOOKING SKUTIK
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int invoiceskutik(){
	int kode;
	char exit;
	system("cls");
	printf("\n\n\n\n");
	printf("	Invoice\n");
	printf("	---------------------------\n");
	printf("	Nama 	: %s\n", nama);
	printf("	Pesanan	: %s\n", motorskutik[bb].nama);
	printf("	Lama	: %d hari\n", lama);
	printf("	Total	: %d\n", total);
	printf("	---------------------------\n");
	printf("	Kode Booking : ");
	kode=(total/1000);
	printf("%dSA%d", bb, kode);
	printf("\n\n");
	printf("	Kembali ke menu? (Y/N) : ");
	scanf("%s", &exit);
	if(exit==89||exit==121){
		system("cls");
		menu();
	} else if(exit==78||exit==110){
		close();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		invoiceskutik();
	}
}

int errorsupirskutik(){
	printf("\n\n\n\n");
	printf("	%s\n", motorskutik[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");
	printf("	Sewa untuk berapa hari? %d\n", lama);
	receiptskutik();
}

int errorlamaskutik(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", motorskutik[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");	
	lamaskutik();	
}

int receiptskutik(){
	printf("\n");
	total=hargakendaraan;
	invoiceskutik();
}

int lamaskutik(){
	printf("	Sewa untuk berapa hari? ");
	scanf("%d", &lama);
	if((lama>=1)&&(lama<=31)){
		hargakendaraan = skutik[bb].harga*lama;
		receiptskutik();
	} else {
		printf("\n	Masukkan input lain!\n");
		printf("	NOTE!! Maksimal lama penyewaan adalah 31 hari!!\n\n	");
		system("PAUSE");
		system("cls");
		while((lama = getchar()) != EOF && lama != '\n');
		errorlamaskutik();
	}
}

int dataskutik(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", motorskutik[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : ");
	scanf(" %[^\n]s",&nama);
	printf("\n");
	lamaskutik();
}

int sewaskutik(){
	system("cls");
	int i, price=0;
	char pesanan[100];
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis scooter automatic yang tersedia\n");
	printf("	--------------------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s\n", (i+1), motorskutik[i].nama);
    }
    printf("	--------------------------------------------------------\n");
    printf("	Pilih scooter automatic yang anda ingin pesan : ");
    scanf(" %[^\n]s", &pesanan);
    for(aa = 0; aa < 3; aa++){
    	if(strcmp(pesanan, motorskutik[aa].nama) == 0){
    		price = skutik[aa].harga;
    		bb=aa;
    		dataskutik();
		}
	}
	if(strcmp(pesanan, "1") == 0){
		price = skutik[0].harga;
		bb=0;
		dataskutik();
	} else if(strcmp(pesanan, "2") == 0){
		price = skutik[1].harga;
		bb=1;
		dataskutik();
	} else if(strcmp(pesanan, "3") == 0){
		price = skutik[2].harga;
		bb=2;
		dataskutik();
	} else if(price==0) {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		sewaskutik();		
	}	
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END BOOKING SKUTIK
START BOOKING BEBEK
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int invoicebebek(){
	int kode;
	char exit;
	system("cls");
	printf("\n\n\n\n");
	printf("	Invoice\n");
	printf("	---------------------------\n");
	printf("	Nama 	: %s\n", nama);
	printf("	Pesanan	: %s\n", motorbebek[bb].nama);
	printf("	Lama	: %d hari\n", lama);
	printf("	Total	: %d\n", total);
	printf("	---------------------------\n");
	printf("	Kode Booking : ");
	kode=(total/1000);
	printf("%dSM%d", bb, kode);
	printf("\n\n");
	printf("	Kembali ke menu? (Y/N) : ");
	scanf("%s", &exit);
	if(exit==89||exit==121){
		system("cls");
		menu();
	} else if(exit==78||exit==110){
		close();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		invoicebebek();
	}
}

int errorsupirbebek(){
	printf("\n\n\n\n");
	printf("	%s\n", motorbebek[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");
	printf("	Sewa untuk berapa hari? %d\n", lama);
	receiptbebek();
}

int errorlamabebek(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", motorbebek[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");	
	lamabebek();	
}

int receiptbebek(){
	printf("\n");
	total=hargakendaraan;
	invoicebebek();
}

int lamabebek(){
	printf("	Sewa untuk berapa hari? ");
	scanf("%d", &lama);
	if((lama>=1)&&(lama<=31)){
		hargakendaraan = bebek[bb].harga*lama;
		receiptbebek();
	} else {
		printf("\n	Masukkan input lain!\n");
		printf("	NOTE!! Maksimal lama penyewaan adalah 31 hari!!\n\n	");
		system("PAUSE");
		system("cls");
		while((lama = getchar()) != EOF && lama != '\n');
		errorlamabebek();
	}
}

int databebek(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", motorbebek[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : ");
	scanf(" %[^\n]s",&nama);
	printf("\n");
	lamabebek();
}

int sewabebek(){
	system("cls");
	int i, price=0;
	char pesanan[100];
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis scooter manual yang tersedia\n");
	printf("	--------------------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s\n", (i+1), motorbebek[i].nama);
    }
    printf("	--------------------------------------------------------\n");
    printf("	Pilih scooter manual yang anda ingin pesan : ");
    scanf(" %[^\n]s", &pesanan);
    for(aa = 0; aa < 3; aa++){
    	if(strcmp(pesanan, motorbebek[aa].nama) == 0){
    		price = bebek[aa].harga;
    		bb=aa;
    		databebek();
		}
	}
	if(strcmp(pesanan, "1") == 0){
		price = bebek[0].harga;
		bb=0;
		databebek();
	} else if(strcmp(pesanan, "2") == 0){
		price = bebek[1].harga;
		bb=1;
		databebek();
	} else if(strcmp(pesanan, "3") == 0){
		price = bebek[2].harga;
		bb=2;
		databebek();
	} else if(price==0) {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		sewabebek();		
	}	
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END BOOKING BEBEK
START BOOKING SPORT
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int invoicesport(){
	int kode;
	char exit;
	system("cls");
	printf("\n\n\n\n");
	printf("	Invoice\n");
	printf("	---------------------------\n");
	printf("	Nama 	: %s\n", nama);
	printf("	Pesanan	: %s\n", motorsport[bb].nama);
	printf("	Lama	: %d hari\n", lama);
	printf("	Total	: %d\n", total);
	printf("	---------------------------\n");
	printf("	Kode Booking : ");
	kode=(total/1000);
	printf("%dSP%d", bb, kode);
	printf("\n\n");
	printf("	Kembali ke menu? (Y/N) : ");
	scanf("%s", &exit);
	if(exit==89||exit==121){
		system("cls");
		menu();
	} else if(exit==78||exit==110){
		close();
	} else{
		printf("\n	Input yang anda masukkan salah\n\n	");	
		system("PAUSE");
		system("CLS");
		invoicesport();
	}
}

int errorsupirsport(){
	printf("\n\n\n\n");
	printf("	%s\n", motorsport[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");
	printf("	Sewa untuk berapa hari? %d\n", lama);
	receiptsport();
}

int errorlamasport(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", motorsport[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : %s", nama);
	printf("\n\n");	
	lamasport();	
}

int receiptsport(){
	printf("\n");
	total=hargakendaraan;
	invoicesport();
}

int lamasport(){
	printf("	Sewa untuk berapa hari? ");
	scanf("%d", &lama);
	if((lama>=1)&&(lama<=31)){
		hargakendaraan = sport[bb].harga*lama;
		receiptsport();
	} else {
		printf("\n	Masukkan input lain!\n");
		printf("	NOTE!! Maksimal lama penyewaan adalah 31 hari!!\n\n	");
		system("PAUSE");
		system("cls");
		while((lama = getchar()) != EOF && lama != '\n');
		errorlamasport();
	}
}

int datasport(){
	system("cls");
	printf("\n\n\n\n");
	printf("	%s\n", motorsport[bb].nama);
	printf("	---------------------------\n");
	printf("	Nama : ");
	scanf(" %[^\n]s",&nama);
	printf("\n");
	lamasport();
}

int sewasport(){
	system("cls");
	int i, price=0;
	char pesanan[100];
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis motor sport yang tersedia\n");
	printf("	--------------------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s\n", (i+1), motorsport[i].nama);
    }
    printf("	--------------------------------------------------------\n");
    printf("	Pilih motor sport yang anda ingin pesan : ");
    scanf(" %[^\n]s", &pesanan);
    for(aa = 0; aa < 3; aa++){
    	if(strcmp(pesanan, motorsport[aa].nama) == 0){
    		price = sport[aa].harga;
    		bb=aa;
    		datasport();
		}
	}
	if(strcmp(pesanan, "1") == 0){
		price = sport[0].harga;
		bb=0;
		datasport();
	} else if(strcmp(pesanan, "2") == 0){
		price = sport[1].harga;
		bb=1;
		datasport();
	} else if(strcmp(pesanan, "3") == 0){
		price = sport[2].harga;
		bb=2;
		datasport();
	} else if(price==0) {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		sewasport();		
	}	
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END BOOKING SPORT
START MENU BOOKING
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int sewamobil(){
	system("cls");
	int i;
	char  mobil[2][100] = {"Sedan", "Minibus"};
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis mobil yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 2; i++){
		printf("	%d. %s\n", (i+1), mobil[i]);
    }
    printf("	--------------------------------------------\n");
    printf("	Pilih jenis mobil yang anda ingin sewa : ");
    scanf("%d", &tipemobil);
	if(tipemobil==1){
		sewasedan();
	} else if(tipemobil==2){
		sewaminibus();
	} else {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		while( ( tipemobil = getchar() ) != '\n' && tipemobil != EOF );
		sewamobil();		
	}	
}

int sewamotor(){
	system("cls");
	int i;
	char  motor[3][100] = {"Scooter Automatic", "Scooter Manual", "Sport"};
	printf("\n\n\n\n");
	printf("	Berikut ini adalah jenis motor yang tersedia\n");
	printf("	--------------------------------------------\n");
    for (i = 0; i < 3; i++){
		printf("	%d. %s\n", (i+1), motor[i]);
    }
    printf("	--------------------------------------------\n");
    printf("	Pilih jenis motor yang anda ingin sewa : ");
    scanf("%d", &tipemotor);
	if(tipemotor==1){
		sewaskutik();
	} else if(tipemotor==2){
		sewabebek();
	} else if(tipemotor==3){
		sewasport();
	} else {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		while( ( tipemotor = getchar() ) != '\n' && tipemotor != EOF );
		sewamotor();		
	}		
}

int rent(){
	system("cls");
	printf("\n\n\n\n");
	printf("	Kwndaraan yang tersedia\n");
	printf("	------------------\n");
	printf("	1. Mobil\n");
	printf("	2. Motor\n");
	printf("	3. Bus\n");
	printf("	------------------\n");
	printf("	Pilih kendaraan yang anda butuhkan : ");
	scanf("%d", &pilihanjasa);
	if(pilihanjasa==1){
		sewamobil();
	} else if(pilihanjasa==2){
		sewamotor();
	} else if(pilihanjasa == 3){
		sewabus();
	} else {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		while( ( pilihanjasa = getchar() ) != '\n' && pilihanjasa != EOF );
		rent();		
	}	
}

/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
END MENU BOOKING
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

int help(){
	system("cls");
	printf("\n\n\n\n");
	printf("				Rent-a-Car App How-To\n");
	printf("	--------------------------------------------------------------------\n");
	printf("	Masukkan angka 1 untuk melihat daftar kendaraan beserta harga\n");
	printf("	dari seriap kendaraan.\n\n");
	printf("	Masukkan angka 2 untuk melakukan pemesanan kendaraan. Total harga\n");
	printf("	akan muncul di akhir jendela pemesanan beserta biaya supir (jika \n");
	printf("	memilih dengan supir). Di akhir pemesanan anda akan diberikan kode\n");
	printf("	pemesanan untuk pengambilan kendaraan.\n\n");
	printf("	Masukkan angka 3 untuk melihat pesanan anda. Anda dapat melihat kode\n");
	printf("	pemesanan anda kembali jika anda lupa. Anda cukup menunjukkan halaman\n");
	printf("	ini kepada petugas di kantor kami untuk pengambilan kendaraan.\n\n");
	printf("	Masukkan angka 5 untuk keluar dari program dan membatalkan pesanan.\n\n");
    printf("	Press any key to go back to the main menu...");
    getch();
    system("cls");
    menu();	
}

int InputMenu(int choice){
	scanf("%d", &choice);
	if(choice==1){
		list();
	} else if(choice==2){
		rent();
	} else if(choice==3){
		if(pilihanjasa==1){
			if(tipemobil==1){
				invoice();
			} else if(tipemobil==2){
				invoicee();
			}
		} else if (pilihanjasa==2){
			if(tipemotor==1){
				invoiceskutik();
			} else if(tipemotor==2){
				invoicebebek();
			} else if(tipemotor==3){
				invoicesport();
			}
		} else if (pilihanjasa==0){
			invoice0();
		} else if (pilihanjasa==3){
			invoiceee();
		}
	} else if(choice==4){
		help();
	} else if(choice==5){
		close();
	} else {
		printf("\n	Masukkan input lain!\n\n	");
		system("PAUSE");
		system("CLS");
		while( ( choice = getchar() ) != '\n' && choice != EOF );
		menu();
	}
	
}

int menu(){
	int choice;
	printf("\n\n\n\n");
	printf("	Rent-a-Car Booking\n");
	printf("	---------------------------\n");
	printf("	1. Price list\n");
	printf("	2. Booking\n");
	printf("	3. Pesanan Saya\n");
	printf("	4. Help\n");
	printf("	5. Exit\n");
	printf("	---------------------------\n");
	printf("	Pilih menu yang anda inginkan : ");
	InputMenu(choice);
}

int welcome(){
	int i=0;
	for(i=0;i<=10;i++){
		printf("\n");
	}
	printf("					WELCOME");
	Sleep(1000);
	system("CLS");

	menu();
}

int main(){
	system("color 70");
	welcome();
	return 0;
}

