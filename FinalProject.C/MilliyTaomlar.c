#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void check_chikar(){
    FILE *ptr = fopen("Buyurtma", "r");

    char limit[10000];

    while(fgets(limit, sizeof(limit), ptr)){
        printf("%s", limit);
    }

    fclose(ptr);
}

int main(){

    FILE *ptr = fopen("Buyurtma", "w");


    int m_ov_tanlov, t_tanla, narhi=0, soni, kam;
    fprintf(ptr, "*******************************************************************\n\n\n\n");
    fprintf(ptr, "-------------------------_السَّلَامُ عَلَيْكُمْ_----------------------------\n\n");
    fprintf(ptr, "-----------------------_Assalamu aleykum_--------------------------\n\n");
    fprintf(ptr, "----------------------------_Check_--------------------------------\n\n\n");

    puts("Assalamu aleykum.");
    puts("Hush Kelibsiz!");

    Menu:
    puts("Milliy taomlar Menusi");
    puts("[1] Birinchi Ovqat");
    puts("[2] Ikkinchi Ovqat");
    puts("[3] Shashliklar");
    puts("[4] Salatlar");
    puts("[5] Ichimliklar");
    puts("[6] Check");
    puts("[0] Exit");

    scanf("%d", &m_ov_tanlov);

    switch (m_ov_tanlov)
    {
    case 1:
        Birinchi:
            puts("[1] Lagman    -> 41,000");
            puts("[2] Mampar    -> 32,000");
            puts("[3] Mastava   -> 32,000");
            puts("[4] Chuchvara -> 30,000");
            puts("[5] Shorva    -> 28,000");
            puts("[0] Menu ga Qaytish");
            scanf("%d", &t_tanla);
            if(t_tanla==0){
                goto Menu;
            } else {
                puts("Nechta Aka?");
                scanf("%d", &soni);
            }
            switch (t_tanla)
            {
            case 1: 
            fprintf(ptr, "Birinchi Ovqat : Lagman %dta -> 41.000som dan = %dming so'm\n", soni, soni*41);
            narhi+=soni*41; break;
            case 2:
            fprintf(ptr, "Birinchi Ovqat : Mampar %dta -> 32.000som dan = %dming so'm\n", soni, soni*32);
            narhi+=soni*32; break;
            case 3: 
            fprintf(ptr, "Birinchi Ovqat : Mastava %dta -> 32.000som dan = %dming so'm\n", soni, soni*32);
            narhi+=soni*32; break;
            case 4: 
            fprintf(ptr, "Birinchi Ovqat : Chuchvara %dta -> 30.000som dan = %dming so'm\n", soni, soni*30);
            narhi+=soni*30; break;
            case 5: 
            fprintf(ptr, "Birinchi Ovqat : Shorva %dta -> 28.000som dan = %dming so'm\n", soni, soni*28);
            narhi+=soni*28; break;
            }
        puts("Kamchiliklar bormi Aka? Ha[1] Yok[0]");
        scanf("%d", &kam);
        if(kam==1){
            goto Birinchi;
        } else {
            goto Menu;
        }
    case 2:
        Ikkinchi:
            puts("[1] Tabaka      -> 28,000");
            puts("[2] Baliq       -> 38,000");
            puts("[3] Beshbarmok  -> 72,000");
            puts("[4] O'sh        -> 37,000");
            puts("[5] Bishteks    -> 40,000");
            puts("[6] Norin       -> 20,000");
            puts("[7] Manty       -> 10,000");
            puts("[0] MenU ga Qaytish");
            scanf("%d", &t_tanla);
            if(t_tanla==0){
                goto Menu;
            } else {
                puts("Nechta Aka?");
                scanf("%d", &soni);
            }
            switch (t_tanla)
            {
            case 1: 
            fprintf(ptr, "Ikkinchi Ovqat : Tabaka %dta -> 28.000som dan = %dming so'm\n", soni, soni*28);
            narhi +=soni* 68; break;
            case 2: 
            fprintf(ptr, "Ikkinchi Ovqat : Balik %dta -> 38.000som dan = %dming so'm\n", soni, soni*38);
            narhi +=soni* 38; break;
            case 3: 
            fprintf(ptr, "Ikkinchi Ovqat : Beshbarmok %dta -> 72.000som dan = %dming so'm\n", soni, soni*72);
            narhi +=soni* 72; break;
            case 4: 
            fprintf(ptr, "Ikkinchi Ovqat : O'sh %dta -> 37.000som dan = %dming so'm\n", soni, soni*37);
            narhi +=soni* 41; break;
            case 5: 
            fprintf(ptr, "Ikkinchi Ovqat : Bishteks %dta -> 40.000som dan = %dming so'm\n", soni, soni*40);
            narhi +=soni* 40; break;
            case 6: 
            fprintf(ptr, "Ikkinchi Ovqat : Norin %dta -> 20.000som dan = %dming so'm\n", soni, soni*20);
            narhi +=soni* 20; break;
            case 7: 
            fprintf(ptr, "Ikkinchi Ovqat : Manty %dta -> 10.000som dan = %dming so'm\n", soni, soni*10);
            narhi +=soni* 10; break;
            }
        puts("Kamchiliklar bormi Aka? Ha[1] Yok[0]");
        scanf("%d", &kam);
        if(kam==1){
            goto Ikkinchi;
        } else {
            goto Menu;
        }
    case 3:
        Shashlik:
            puts("[1] Kurinny    -> 15,000");
            puts("[2] Kusk(Mol)  -> 18,000");
            puts("[3] Kusk(Qo'y) -> 15,000");
            puts("[4] Jigar      -> 13,000");
            puts("[0] MenU ga Qaytish");
            scanf("%d", &t_tanla);
            if(t_tanla==0){
                goto Menu;
            } else {
                puts("Nechta Aka?");
                scanf("%d", &soni);
            }
            switch (t_tanla)
            {
            case 1: 
            fprintf(ptr, "Shashlik       : Kurinny %dta -> 15.000som dan = %dming so'm\n", soni, soni*15);
            narhi +=soni*15; break;
            case 2: 
            fprintf(ptr, "Shashlik       : Kuskovoy(Mol) %dta -> 18.000som dan = %dming so'm\n", soni, soni*18);
            narhi +=soni*18; break;
            case 3: 
            fprintf(ptr, "Shashlik       : Kuskovoy(Qo'y) %dta -> 18.000som dan = %dming so'm\n", soni, soni*18);
            narhi +=soni*18; break;
            case 4: 
            fprintf(ptr, "Shashlik       : Jigar %dta -> 13.000som dan = %dming so'm\n", soni, soni*13);
            narhi +=soni*13; break;
            }
        puts("Kamchiliklar bormi Aka? Ha[1] Yok[0]");
        scanf("%d", &kam);
        if(kam==1){
            goto Shashlik;
        } else {
            goto Menu;
        }
    case 4:
        Salat:
            puts("[1] Ankara      -> 30,000");
            puts("[2] Appetito    -> 39,000");
            puts("[3] Achuchu     -> 15,000");
            puts("[4] Bahor       -> 26,000");
            puts("[5] Grecheski   -> 38,000");
            puts("[6] Olive       -> 27,000");
            puts("[7] Sezar       -> 39,000");
            puts("[0] MenU ga Qaytish");
            scanf("%d", &t_tanla);
            if(t_tanla==0){
                goto Menu;
            } else {
                puts("Nechta Aka?");
                scanf("%d", &soni);
            }
            switch (t_tanla)
            {
            case 1: 
            fprintf(ptr, "Salat          : Ankara %dta -> 30.000som dan = %dming so'm\n", soni, soni*30);
            narhi +=soni* 30; break;
            case 2: 
            fprintf(ptr, "Salat          : Appetito %dta -> 39.000som dan = %dming so'm\n", soni, soni*39);
            narhi +=soni* 39; break;
            case 3: 
            fprintf(ptr, "Salat          : Achyk-chuchu %dta -> 15.000som dan = %dming so'm\n", soni, soni*15);
            narhi +=soni* 15; break;
            case 4: 
            fprintf(ptr, "Salat          : Bahor %dta -> 26.000som dan = %dming so'm\n", soni, soni*26);
            narhi +=soni* 26; break;
            case 5: 
            fprintf(ptr, "Salat          : Grecheski %dta -> 38.000som dan = %dming so'm\n", soni, soni*38);
            narhi +=soni* 38; break;
            case 6: 
            fprintf(ptr, "Salat          : Olive %dta -> 27.000som dan = %dming so'm\n", soni, soni*27);
            narhi +=soni* 27; break;
            case 7: 
            fprintf(ptr, "Salat          : Sezar %dta -> 39.000som dan = %dming so'm\n", soni, soni*39);
            narhi +=soni* 39; break;
            }
        puts("Kamchiliklar bormi Aka? Ha[1] Yok[0]");
        scanf("%d", &kam);
        if(kam==1){
            goto Salat;
        } else {
            goto Menu;
        }
    case 5:
        Ichimlik:
            puts("[1] Cola(0.5)  -> 10,000");
            puts("[2] Fanta(0.5) -> 10,000");
            puts("[3] Pepsi(0.5) -> 10,000");
            puts("[4] Sprit(0.5) -> 10,000");
            puts("[5] Kompot     -> 8,000");
            puts("[6] Kora_choy  -> 3,000");
            puts("[7] Kok_Choy   -> 3,000");
            puts("[0] MenU ga Qaytish");
            scanf("%d", &t_tanla);
            if(t_tanla==0){
                goto Menu;
            } else {
                puts("Nechta Aka?");
                scanf("%d", &soni);
            }
            switch (t_tanla)
            {
            
            case 1: 
            fprintf(ptr, "Ichimlik       : Coca-Cola(0.5) %dta -> 10.000som dan = %dming so'm\n", soni, soni*10);
            narhi +=soni* 10; break;
            case 2: 
            fprintf(ptr, "Ichimlik       : Fanta(0.5) %dta -> 10.000som dan = %dming so'm\n", soni, soni*10);
            narhi +=soni* 10; break;
            case 3: 
            fprintf(ptr, "Ichimlik       : Pepsi(0.5) %dta -> 10.000som dan = %dming so'm\n", soni, soni*10);
            narhi +=soni* 10; break;
            case 4: 
            fprintf(ptr, "Ichimlik       : Sprite(0.5) %dta -> 10.000som dan = %dming so'm\n", soni, soni*10);
            narhi +=soni* 10; break;
            case 5: 
            fprintf(ptr, "Ichimlik       : Kompot %dta -> 8.000som dan = %dming so'm\n", soni, soni*8);
            narhi +=soni* 8; break;
            case 6: 
            fprintf(ptr, "Ichimlik       : Kora Choy %dta -> 3.000som dan = %dming so'm\n", soni, soni*3);
            narhi +=soni* 3; break;
            case 7: 
            fprintf(ptr, "Ichimlik       : Ko'k Choy %dta -> 3.000som dan = %dming so'm\n", soni, soni*3);
            narhi +=soni* 3; break;
            }
        puts("Kamchiliklar bormi Aka? Ha[1] Yok[0]");
        scanf("%d", &kam);
        if(kam==1){
            goto Ichimlik;
        } else {
            goto Menu;
        }
    case 6:
        fprintf(ptr, "\n\n----------------- Umumiy narx: %d ming so'm ---------------------\n", narhi);
        fprintf(ptr, "\n\n\n*******************************************************************");
        fclose(ptr);
        puts("\n*** Buyurtma Tafsilotlari ***\n");
        check_chikar();
        printf("\nUmumiy narx: %d ming so'm\n", narhi);

        puts("Rahmat, Yana keling!");
    case 0:
        return 0;
    }
    



    return 0;
}
