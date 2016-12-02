#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

//variables stock tequila blanco
int stock=70,stockI=40,stockII=40,stockIII=60,stockIV=25;
//variables stock tequila reposado
int stockV=30,stockVI=45,stockVII=32,stockVIII=24,stockIX=32;
//variables stock tequila aÃ±ejo
int stockX=45,stockXI=16,stockXII=24,stockXIII=55,stockXIV=42;
//variables stock tequila extra aÃ±ejo
int stockXV=18,stockXVI=45,stockXVII=39,stockXVIII=42,stockXIX=10;
//variables stock whisky maltas
int stockXX=85,stockXXI=21,stockXXII=41,stockXXIII=24,stockXXIV=52;
//variables stock whisky blended
int stockXXV=94,stockXXVI=54,stockXXVII=14,stockXXVIII=23,stockXXIX=12;
//variables stock whisky bourbon
int stockXXX=84,stockXXXI=30,stockXXXII=41,stockXXXIII=15,stockXXXIV=45;
//variables stock whisky tennesse
int stockXXXV=20,stockXXXVI=18,stockXXXVII=95,stockXXXVIII=34,stockXXXIX=42;
//variables stock cognac
int stockXXXX=19,stockXXXXI=15,stockXXXXII=56,stockXXXXIII=25,stockXXXXIV=24;
//variables stock vodka
int stockXXXXV=23,stockXXXXVI=56,stockXXXXVII=28,stockXXXXVIII=35,stockXLIX=62;
//variables stock mezcal
int stockL=52,stockLI=56,stockLII=23,stockLIII=44,stockLIV=85;
//variables ron
int stockLV=58,stockLVI=74,stockLVII=25,stockLVIII=14,stockLIX=96;
//variables ginebra
int stockLX=56,stockLXI=25,stockLXII=32,stockLXIII=24,stockLXIV=18;
//variables brandy
int stockLXV=42,stockLXVI=28,stockLXVII=41,stockLXVIII=19,stockLXIX=24;
//variables jerez
int stockLXX=50,stockLXXI=26,stockLXXII=23,stockLXXIII=14,stockLXXIV=29;
//variables champagne
int stockLXXV=18,stockLXXVI=12,stockLXXVII=22,stockLXXVIII=21,stockLXXIX=56;
//variables licor
int stockLXXX=56,stockLXXXI=25,stockLXXXII=14,stockLXXXIII=25,stockLXXXIV=65;
//variables vino tinto
int stockLXXXV=21,stockLXXXVI=23,stockLXXXVII=44,stockLXXXVIII=45,stockLXXXIX=63;
//variables vino blanco
int stockXC=29,stockXCI=16,stockXCII=15,stockXCIII=41,stockXCIV=56;
//variables vino rosado
int stockXCV=56,stockXCVI=52,stockXCVII=14,stockXCVIII=20,stockXCIX=66;

//funciones stock
int stock1(),stock2(),stock3(),stock4(),stock5(),stock6(),stock7(),stock8(),stock9(),stock10(),stock11();
int stock12(),stock13(),stock14(),stock15(),stock16(),stock17(),stock18(),stock19(),stock20(),stock21();
int stock22(),stock23(),stock24(),stock25(),stock26(),stock27(),stock28(),stock29(),stock30(),stock31();
int stock32(),stock33(),stock34(),stock35(),stock36(),stock37(),stock38(),stock39(),stock40(),stock41();
int stock42(),stock43(),stock44(),stock45(),stock46(),stock47(),stock48(),stock49(),stock50(),stock51();
int stock52(),stock53(),stock54(),stock55(),stock56(),stock57(),stock58(),stock59(),stock60(),stock61();
int stock62(),stock63(),stock64(),stock65(),stock66(),stock67(),stock68(),stock69(),stock70(),stock71();
int stock72(),stock73(),stock74(),stock75(),stock76(),stock77(),stock78(),stock79(),stock80(),stock81();
int stock82(),stock83(),stock84(),stock85(),stock86(),stock87(),stock88(),stock89(),stock90(),stock91();
int stock92(),stock93(),stock94(),stock95(),stock96(),stock97(),stock98(),stock99(),stock100();
//inicio de variables
int aum,i;
char surtirp,otrop,acpc,j;
int total;

int menu(),opcion,tequilas(),whisky(),cognac(),vodka(),mezcal(),ron(),ginebra(),brandy();
int jerez(),champagne(),licor(),vino(),salir(),regresar(),k=0,tipo,tipo1;
int x,unidad;

//prueba
char resp1;
int suma,pagar(),ventadia,opcpago,progressbar(), descuento;
//Funcion gotoxy
void gotoxy(int x,int y)
{
HANDLE hcon;
hcon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X = x;
dwPos.Y= y;
SetConsoleCursorPosition(hcon,dwPos);
}

//Organizar todo
main(){
    progressbar();
       do{
            system("color 0F");
            system("cls");
           menu();
          switch(opcion){
             case 1:
               tequilas();
             break;
             case 2:
               whisky();
             break;
             case 3:
               cognac();
             break;
             case 4:
               vodka();
             break;
             case 5:
                mezcal();
             break;
             case 6:
                ron();
             break;
             case 7:
                ginebra();
             break;
             case 8:
                brandy();
             break;
             case 9:
                jerez();
             break;
             case 10:
                champagne();
             break;
             case 11:
                licor();
             break;
             case 12:
                vino();
                break;
             case 13:
                pagar();
                break;
             case 14:
                salir();
             break;
{
             default:
                printf("La opcion seleccionada no es valida. ");
                getchar();
                getchar();
}
          }

       }while(k<=3);


}


//FUNCIONES

int menu(){

       printf("VINOS Y LICORES");
       printf("\t\n1.- Tequilas\n2.- Whisky\n3.- Cognac\n4.- Vodka \n5.- Mezcal ");
       printf("\n6.- Ron\n7.- Ginebra\n8.- Brandy\n9.- Jerez\n10.- Champagne\n11.- Licor\n12.- Vino\n13.- Pagar\n14.- Salir \nSeleccione una opcion: ");
       scanf("%d",&opcion);
}

//Funcion tequilas()
//Menu de Tequila disponible
//Falta modificar precio

int tequilas(){
    system("cls");
          gotoxy(30,2); printf("TEQUILAS");
          gotoxy(28,3); printf("1.- Blanco");gotoxy(28,4); printf("2.- Reposado"); gotoxy(28,5);printf("3.- AÃ±ejo");
          gotoxy(28,6); printf("4.- Extra aÃ±ejo"); gotoxy(28,7); printf("5.- Regresar");
          gotoxy(20,9); printf("Elija la opcion deseada:  ");
          scanf("%d",&tipo);
          system("cls");
          switch(tipo){
        case 1:
            gotoxy(30,2);printf("TEQUILAS BLANCOS");
            gotoxy(10,3);printf("1.- TEQUILA ALACRAN AUTENTICO 750ML");
            gotoxy(10,4);printf("2.- TEQUILA CAPOTE SABOR FRAMBUESA GRANADA 750ML");
            gotoxy(10,5);printf("3.- TEQUILA CAPOTE SABOR ZARZAMORA 750ML");
            gotoxy(10,6);printf("4.- TEQUILA CLASICO BLANCO 750ML");
            gotoxy(10,7);printf("5.- TEQUILA HERRADURA DIRECTO DEL ALAMBIQUE 750ML");
            gotoxy(10,8);printf("6.- Regresar");
            gotoxy(8,10);printf("Elija la opcion deseada: ");
            scanf("%d",&tipo1);
            system("cls");
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("TEQUILA ALACRAN AUTENTICO 750ML");
                gotoxy(60,2); printf("  Precio: 282.00");
                gotoxy(60,3); printf("  Stock: %d",stock);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stock);
                stock1();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stock);
                gotoxy(20,2); printf("TEQUILA ALACRAN AUTENTICO 750ML");
                gotoxy(60,2); printf("  Precio: 282.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stock=stock-unidad;
                if(stock < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stock=stock+unidad;
                if(stock > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stock);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                    system("cls");
                gotoxy(60,3); printf("  Stock: %d",stock);
                gotoxy(20,2); printf("TEQUILA ALACRAN AUTENTICO 750ML");
                gotoxy(60,2); printf("  Precio: 282.00");
                x=stock*282;

                stock=stock-stock;
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stock);
                gotoxy(20,2); printf("TEQUILA ALACRAN AUTENTICO 750ML");
                gotoxy(60,2); printf("  Precio: 282.00");
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
else
                {
                x=unidad*282;
                system("cls");
                gotoxy(20,2); printf("TEQUILA ALACRAN AUTENTICO 750ML");
                gotoxy(60,2); printf("  Precio: 282.00");
                gotoxy(60,3);printf("  Stock: %d",stock);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 2:

                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR FRAMBUESA GRANADA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                gotoxy(60,4); printf("  Stock: %d",stockI);
                system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockI);
                stock2();
                system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockI);
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR FRAMBUESA GRANADA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                gotoxy(10,7); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockI=stockI-unidad;

                //
                if(stockI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockI=stockI+unidad;
                if(stockI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                    system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockI);
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR FRAMBUESA GRANADA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                x=stockI*427;
                stockI=stockI-stockI;
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockI);
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR FRAMBUESA GRANADA 750ML");
                gotoxy(60,2); printf("  Precio: 427.00");
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*427;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR FRAMBUESA GRANADA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                gotoxy(60,4); printf("  Stock: %d",stockI);
                gotoxy(10,8); printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }

                break;
                case 3:
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR ZARZAMORA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                gotoxy(60,4); printf("  Stock: %d",stockII);
                system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockII);
                stock3();
                system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockII);
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR ZARZAMORA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                gotoxy(10,7); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockII=stockII-unidad;
                if(stockII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockII=stockII+unidad;
                if(stockII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                    system("cls");
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR ZARZAMORA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                gotoxy(60,4); printf("  Stock: %d",stockII);
                x=stockII*427;
                stockII=stockII-stockII;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR ZARZAMORA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                gotoxy(60,4); printf("  Stock: %d",stockII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*427;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAPOTE SABOR ZARZAMORA 750ML");
                gotoxy(60,3); printf("  Precio: 427.00");
                gotoxy(60,4); printf("  Stock: %d",stockII);
                gotoxy(10,8); printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("TEQUILA CLASICO BLANCO 750ML");
                gotoxy(60,3); printf("  Precio: 196.00");
                gotoxy(60,4); printf("  Stock: %d",stockIII);
                system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockIII);
                stock4();
                system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockIII);
                gotoxy(20,2); printf("TEQUILA CLASICO BLANCO 750ML");
                gotoxy(60,3); printf("  Precio: 196.00");
                gotoxy(10,7); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockIII=stockIII-unidad;
                if(stockIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockIII=stockIII+unidad;
                if(stockIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                  system("cls");
                gotoxy(20,2); printf("TEQUILA CLASICO BLANCO 750ML");
                gotoxy(60,3); printf("  Precio: 196.00");
                gotoxy(60,4); printf("  Stock: %d",stockIII);
                x=stockIII*427;
                stockIII=stockIII-stockIII;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CLASICO BLANCO 750ML");
                gotoxy(60,3); printf("  Precio: 196.00");
                gotoxy(60,4); printf("  Stock: %d",stockIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*196;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CLASICO BLANCO 750ML");
                gotoxy(60,3); printf("  Precio: 196.00");
                gotoxy(60,4); printf("  Stock: %d",stockIII);
                gotoxy(10,8); printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                printf("TEQUILA HERRADURA DIRECTO DEL ALAMBIQUE 750ML");
                printf("  precio: 695.00");
                gotoxy(20,2); printf("TEQUILA HERRADURA DIRECTO DEL ALAMBIQUE 750ML");
                gotoxy(60,3); printf("  Precio: 695.00");
                gotoxy(60,4); printf("  Stock: %d",stockIV);
                system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockIV);
                stock5();
                system("cls");
                gotoxy(60,4); printf("  Stock: %d",stockIV);
                gotoxy(20,2); printf("TEQUILA HERRADURA DIRECTO DEL ALAMBIQUE 750ML");
                gotoxy(60,3); printf("  Precio: 695.00");
                gotoxy(10,7); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockIV=stockIV-unidad;
                if(stockIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockIV=stockIV+unidad;
                if(stockIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA HERRADURA DIRECTO DEL ALAMBIQUE 750ML");
                gotoxy(60,3); printf("  Precio: 695.00");
                gotoxy(60,4); printf("  Stock: %d",stockIV);
                x=stockIV*427;
                stockIV=stockIV-stockIV;
                system("cls");
                gotoxy(20,2); printf("TEQUILA HERRADURA DIRECTO DEL ALAMBIQUE 750ML");
                gotoxy(60,3); printf("  Precio: 695.00");
                gotoxy(60,4); printf("  Stock: %d",stockIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*695;
                system("cls");
                gotoxy(20,2); printf("TEQUILA HERRADURA DIRECTO DEL ALAMBIQUE 750ML");
                gotoxy(60,3); printf("  Precio: 695.00");
                gotoxy(60,4); printf("  Stock: %d",stockIV);
                gotoxy(10,8); printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                k=2;
                default:
                printf("La opcion ingresada no es valida.");
            }//fin swtich tequila blanco
               break;


            //SUBMENU TEQUILAS REPOSADOS
             case 2:
            printf("TEQUILAS REPOSADOS");
            printf("\t\n1.- TEQUILA EL CAPRICHO MADURO 750ML");
            printf("\t\n2.- TEQUILA SAUZA 100 AÃ‘OS AZUL REP 700ML");
            printf("\t\n3.- TEQUILA 1800 REPOSADO 700ML");
            printf("\t\n4.- TEQUILA CABRITO REPOSADO 375ML");
            printf("\t\n5.- TEQUILA CENTENARIO REPOSADO 700ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("TEQUILA EL CAPRICHO MADURO 750ML");
                gotoxy(60,2); printf("  Precio: 79.00");
                gotoxy(60,3); printf("  Stock: %d",stockV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockV);
                stock6();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockV);
                gotoxy(20,2); printf("TEQUILA EL CAPRICHO MADURO 750ML");
                gotoxy(60,2); printf("  Precio: 79.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockV=stockV-unidad;
                if(stockV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockV=stockV+unidad;
                if(stockV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA EL CAPRICHO MADURO 750ML");
                gotoxy(60,2); printf("  Precio: 79.00");
                gotoxy(60,3);printf("  Stock: %d",stockV);
                x=stockV*427;
                stockV=stockV-stockV;
                system("cls");
                gotoxy(20,2); printf("TEQUILA EL CAPRICHO MADURO 750ML");
                gotoxy(60,2); printf("  Precio: 79.00");
                gotoxy(60,3);printf("  Stock: %d",stockV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*79;
                system("cls");
                gotoxy(20,2); printf("TEQUILA EL CAPRICHO MADURO 750ML");
                gotoxy(60,2); printf("  Precio: 79.00");
                gotoxy(60,3);printf("  Stock: %d",stockV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 2:
                gotoxy(20,2); printf("TEQUILA SAUZA 100 AÃ‘OS AZUL REP 700ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(60,3); printf("  Stock: %d",stockVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockVI);
                stock7();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockVI);
                gotoxy(20,2); printf("TEQUILA SAUZA 100 AÃ‘OS AZUL REP 700ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockVI=stockVI-unidad;
                if(stockVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockVI=stockVI+unidad;
                if(stockVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA SAUZA 100 AÃ‘OS AZUL REP 700ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(60,3);printf("  Stock: %d",stockVI);
                x=stockVI*427;
                stockVI=stockVI-stockVI;
                system("cls");
                gotoxy(20,2); printf("TEQUILA SAUZA 100 AÃ‘OS AZUL REP 700ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(60,3);printf("  Stock: %d",stockVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*127;
                system("cls");
                gotoxy(20,2); printf("TEQUILA SAUZA 100 AÃ‘OS AZUL REP 700ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(60,3);printf("  Stock: %d",stockVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 3:
                gotoxy(20,2); printf("TEQUILA 1800 REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 283.00");
                gotoxy(60,3); printf("  Stock: %d",stockVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockVII);
                stock8();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockVII);
                gotoxy(20,2); printf("TEQUILA 1800 REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 283.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockVII=stockVII-unidad;
                if(stockVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockVII=stockVII+unidad;
                if(stockVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 283.00");
                gotoxy(60,3);printf("  Stock: %d",stockVII);
                x=stockVII*427;
                stockVII=stockVII-stockVII;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 283.00");
                gotoxy(60,3);printf("  Stock: %d",stockVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*283;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 283.00");
                gotoxy(60,3);printf("  Stock: %d",stockVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 4:
                gotoxy(20,2); printf("TEQUILA CABRITO REPOSADO 375ML");
                gotoxy(60,2); printf("  Precio: 39.00");
                gotoxy(60,3); printf("  Stock: %d",stockVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockVIII);
                stock9();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockVIII);
                gotoxy(20,2); printf("TEQUILA CABRITO REPOSADO 375ML");
                gotoxy(60,2); printf("  Precio: 39.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockVIII=stockVIII-unidad;
                if(stockVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockVIII=stockVIII+unidad;
                if(stockVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA CABRITO REPOSADO 375ML");
                gotoxy(60,2); printf("  Precio: 39.00");
                gotoxy(60,3);printf("  Stock: %d",stockVIII);
                x=stockVIII*427;
                stockVIII=stockVIII-stockVIII;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CABRITO REPOSADO 375ML");
                gotoxy(60,2); printf("  Precio: 39.00");
                gotoxy(60,3);printf("  Stock: %d",stockVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*39;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CABRITO REPOSADO 375ML");
                gotoxy(60,2); printf("  Precio: 39.00");
                gotoxy(60,3);printf("  Stock: %d",stockVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 5:
                gotoxy(20,2); printf("TEQUILA CENTENARIO REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 187.00");
                gotoxy(60,3); printf("  Stock: %d",stockIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockIX);
                stock10();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockIX);
                gotoxy(20,2); printf("TEQUILA CENTENARIO REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 187.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockIX=stockIX-unidad;
                if(stockIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockIX=stockIX+unidad;
                if(stockIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA CENTENARIO REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 187.00");
                gotoxy(60,3);printf("  Stock: %d",stockIX);
                x=stockIX*427;
                stockIX=stockIX-stockIX;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CENTENARIO REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 187.00");
                gotoxy(60,3);printf("  Stock: %d",stockIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*187;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CENTENARIO REPOSADO 700ML");
                gotoxy(60,2); printf("  Precio: 187.00");
                gotoxy(60,3);printf("  Stock: %d",stockIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 6:
                k=2;
            default:
                printf("La opcion ingresada no es valida.");
            }//fin swtich tequila reposado
               break;
           //SUBMENU TEQUILAS AÃ‘EJOS
             case 3:
            printf("TEQUILAS AÃ‘EJOS");
            printf("\t\n1.- TEQUILA CAPOTE AÃ‘EJO 750ML");
            printf("\t\n2.- TEQUILA 1800 RESERVA ANTIGUA(AÃ‘EJO) 700ML");
            printf("\t\n3.- TEQUILA 30-30 AÃ‘EJO 750ML");
            printf("\t\n4.- TEQUILA 7 LEGUAS AÃ‘EJO 750ML");
            printf("\t\n5.- TEQUILA CAZADORES AÃ‘EJO 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("TEQUILA CAPOTE AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 513.00");
                gotoxy(60,3); printf("  Stock: %d",stockX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockX);
                stock11();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockX);
                gotoxy(20,2); printf("TEQUILA CAPOTE AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 513.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockX=stockX-unidad;
                if(stockX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockX=stockX+unidad;
                if(stockX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAPOTE AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 513.00");
                gotoxy(60,3);printf("  Stock: %d",stockX);
                x=stockX*427;
                stockX=stockX-stockX;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAPOTE AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 513.00");
                gotoxy(60,3);printf("  Stock: %d",stockX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*513;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAPOTE AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 513.00");
                gotoxy(60,3);printf("  Stock: %d",stockX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 2:
                gotoxy(20,2); printf("TEQUILA 1800 RESERVA ANTIGUA(AÃ‘EJO) 700ML");
                gotoxy(60,2); printf("  Precio: 387.00");
                gotoxy(60,3); printf("  Stock: %d",stockXI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXI);
                stock12();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXI);
                gotoxy(20,2); printf("TEQUILA 1800 RESERVA ANTIGUA(AÃ‘EJO) 700ML");
                gotoxy(60,2); printf("  Precio: 387.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXI=stockXI-unidad;
                if(stockXI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXI=stockXI+unidad;
                if(stockXI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 RESERVA ANTIGUA(AÃ‘EJO) 700ML");
                gotoxy(60,2); printf("  Precio: 387.00");
                gotoxy(60,3);printf("  Stock: %d",stockXI);
                x=stockXI*427;
                stockXI=stockXI-stockXI;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 RESERVA ANTIGUA(AÃ‘EJO) 700ML");
                gotoxy(60,2); printf("  Precio: 387.00");
                gotoxy(60,3);printf("  Stock: %d",stockXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*387;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 RESERVA ANTIGUA(AÃ‘EJO) 700ML");
                gotoxy(60,2); printf("  Precio: 387.00");
                gotoxy(60,3);printf("  Stock: %d",stockXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 3:
                gotoxy(20,2); printf("TEQUILA 30-30 AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 203.00");
                gotoxy(60,3); printf("  Stock: %d",stockXII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXII);
                stock13();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXII);
                gotoxy(20,2); printf("TEQUILA 30-30 AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 203.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXII=stockXII-unidad;
                if(stockXII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXII=stockXII+unidad;
                if(stockXII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA 30-30 AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 203.00");
                gotoxy(60,3);printf("  Stock: %d",stockXII);
                x=stockXII*427;
                stockXII=stockXII-stockXII;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 30-30 AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 203.00");
                gotoxy(60,3);printf("  Stock: %d",stockXII);;
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*203;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 30-30 AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 203.00");
                gotoxy(60,3);printf("  Stock: %d",stockXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 4:
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 499.00");
                gotoxy(60,3); printf("  Stock: %d",stockXIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXIII);
                stock14();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXIII);
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 499.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXIII=stockXIII-unidad;
                if(stockXIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXIII=stockXIII+unidad;
                if(stockXIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 499.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIII);
                x=stockXIII*427;
                stockXIII=stockXIII-stockXIII;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 499.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*499;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 499.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 5:
                gotoxy(20,2); printf("TEQUILA CAZADORES AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 339.00");
                gotoxy(60,3); printf("  Stock: %d",stockXIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXIV);
                stock15();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXIV);
                gotoxy(20,2); printf("TEQUILA CAZADORES AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 339.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXIV=stockXIV-unidad;
                if(stockXIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXIV=stockXIV+unidad;
                if(stockXIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAZADORES AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 339.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIV);
                x=stockXIV*427;
                stockXIV=stockXIV-stockXIV;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAZADORES AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 339.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*339;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CAZADORES AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 339.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

          }
          break;
           //SUBMENU TEQUILAS EXTRA AÃ‘EJOS
             case 4:
            printf("TEQUILAS EXTRA AÃ‘EJOS");
            printf("\t\n1.- TEQUILA 1800 MILENIO EXTRA AÃ‘EJO 750ML");
            printf("\t\n2.- TEQUILA 7 LEGUAS EXTRA AÃ‘EJO SIMGLE BARREL 750ML");
            printf("\t\n3.- TEQUILA CUERVO RESERVA DE LA FAMILIA 2.5LT");
            printf("\t\n4.- TEQUILA ALACRAN EXTRA AÃ‘EJO 750ML");
            printf("\t\n5.- TEQUILA 1800 COLECCION BOSCO SODI 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("TEQUILA 1800 MILENIO EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 2033.00");
                gotoxy(60,3); printf("  Stock: %d",stockXV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXV);
                stock16();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXV);
                gotoxy(20,2); printf("TEQUILA 1800 MILENIO EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 2033.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXV=stockXV-unidad;
                if(stockXV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXV=stockXV+unidad;
                if(stockXV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 MILENIO EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 2033.00");
                gotoxy(60,3);printf("  Stock: %d",stockXV);
                x=stockXV*427;
                stockXV=stockXV-stockXV;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 MILENIO EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 2033.00");
                gotoxy(60,3);printf("  Stock: %d",stockXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*2033;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 MILENIO EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 2033.00");
                gotoxy(60,3);printf("  Stock: %d",stockXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 2:
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS EXTRA AÃ‘EJO SIMGLE BARREL 750ML");
                gotoxy(60,2); printf("  Precio: 3149.00");
                gotoxy(60,3); printf("  Stock: %d",stockXVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXVI);
                stock17();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXVI);
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS EXTRA AÃ‘EJO SIMGLE BARREL 750ML");
                gotoxy(60,2); printf("  Precio: 3149.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXVI=stockXVI-unidad;
                if(stockXVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXVI=stockXVI+unidad;
                if(stockXVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS EXTRA AÃ‘EJO SIMGLE BARREL 750ML");
                gotoxy(60,2); printf("  Precio: 3149.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVI);
                x=stockXVI*427;
                stockXVI=stockXVI-stockXVI;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS EXTRA AÃ‘EJO SIMGLE BARREL 750ML");
                gotoxy(60,2); printf("  Precio: 3149.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*3149;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 7 LEGUAS EXTRA AÃ‘EJO SIMGLE BARREL 750ML");
                gotoxy(60,2); printf("  Precio: 3149.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 3:
                gotoxy(20,2); printf("TEQUILA CUERVO RESERVA DE LA FAMILIA 2.5LT");
                gotoxy(60,2); printf("  Precio: 4490.00");
                gotoxy(60,3); printf("  Stock: %d",stockXVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXVII);
                stock18();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXVII);
                gotoxy(20,2); printf("TEQUILA CUERVO RESERVA DE LA FAMILIA 2.5LT");
                gotoxy(60,2); printf("  Precio: 4490.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXVII=stockXVII-unidad;
                if(stockXVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXVII=stockXVII+unidad;
                if(stockXVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA CUERVO RESERVA DE LA FAMILIA 2.5LT");
                gotoxy(60,2); printf("  Precio: 4490.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVII);
                x=stockXVII*427;
                stockXVII=stockXVII-stockXVII;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CUERVO RESERVA DE LA FAMILIA 2.5LT");
                gotoxy(60,2); printf("  Precio: 4490.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*4490;
                system("cls");
                gotoxy(20,2); printf("TEQUILA CUERVO RESERVA DE LA FAMILIA 2.5LT");
                gotoxy(60,2); printf("  Precio: 4490.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 4:
                gotoxy(20,2); printf("TEQUILA ALACRAN EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(60,3); printf("  Stock: %d",stockXVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXVIII);
                stock19();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXVIII);
                gotoxy(20,2); printf("TEQUILA ALACRAN EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXVIII=stockXVIII-unidad;
                if(stockXVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXVIII=stockXVIII+unidad;
                if(stockXVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA ALACRAN EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVIII);
                x=stockXVIII*427;
                stockXVIII=stockXVIII-stockXVIII;
                system("cls");
                gotoxy(20,2); printf("TEQUILA ALACRAN EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*650;
                system("cls");
                gotoxy(20,2); printf("TEQUILA ALACRAN EXTRA AÃ‘EJO 750ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(60,3);printf("  Stock: %d",stockXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
              break;
              case 5:
                gotoxy(20,2); printf("TEQUILA 1800 COLECCION BOSCO SODI 750ML");
                gotoxy(60,2); printf("  Precio: 29999.00");
                gotoxy(60,3); printf("  Stock: %d",stockXIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXIX);
                stock20();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXIX);
                gotoxy(20,2); printf("TEQUILA 1800 COLECCION BOSCO SODI 750ML");
                gotoxy(60,2); printf("  Precio: 29999.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXIX=stockXIX-unidad;
                if(stockXIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXIX=stockXIX+unidad;
                if(stockXIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 COLECCION BOSCO SODI 750ML");
                gotoxy(60,2); printf("  Precio: 29999.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIX);
                x=stockXIX*427;
                stockXIX=stockXIX-stockXIX;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 COLECCION BOSCO SODI 750ML");
                gotoxy(60,2); printf("  Precio: 29999.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                    else

                       k=2;

                }
                }
                else
                {
                x=unidad*29999;
                system("cls");
                gotoxy(20,2); printf("TEQUILA 1800 COLECCION BOSCO SODI 750ML");
                gotoxy(60,2); printf("  Precio: 29999.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);

                }
suma=suma+x;
                {
                    getchar();
                    getchar();
                }

              break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

          }

          }
}

// FUNCION WHISKY
//MENU Y SUBMENUS

int whisky(){
          system("cls");
          printf("WHISKY");
          printf("\n1.- Maltas\n2.- Blended\n3.- Bourbon\n4.- Tennesse\n5.- Regresar\n Elija una opcion: ");
          scanf("%d",&tipo);
          system("cls");
          switch(tipo){
          case 1:
            printf("MALTAS");
            printf("\t\n1.- WHISKY ABERFELDY 750ML");
            printf("\t\n2.- WHISKY ARDMORE 750ML");
            printf("\t\n3.- WHISKY ARDBEG 10 YEAR OLD MALT 750ML");
            printf("\t\n4.- WHISKY BALVENIE 12 AÃ‘OS 750ML");
            printf("\t\n5.- WHISKY BALVENIE 17 DOUBLEWOOD 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("WHISKY ABERFELDY 750ML");
                gotoxy(60,2); printf("  Precio: 686.00");
                gotoxy(60,3); printf("  Stock: %d",stockXX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXX);
                stock21();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXX);
                gotoxy(20,2); printf("WHISKY ABERFELDY 750ML");
                gotoxy(60,2); printf("  Precio: 686.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXX=stockXX-unidad;
                if(stockXX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXX=stockXX+unidad;
                if(stockXX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                    system("cls");
                gotoxy(20,2); printf("WHISKY ABERFELDY 750ML");
                gotoxy(60,2); printf("  Precio: 686.00");
                gotoxy(60,3);printf("  Stock: %d",stockXX);
                x=stockXX*282;

                stockXX=stockXX-stockXX;
                system("cls");
                gotoxy(20,2); printf("WHISKY ABERFELDY 750ML");
                gotoxy(60,2); printf("  Precio: 686.00");
                gotoxy(60,3);printf("  Stock: %d",stockXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*686;
                system("cls");
                gotoxy(20,2); printf("WHISKY ABERFELDY 750ML");
                gotoxy(60,2); printf("  Precio: 686.00");
                gotoxy(60,3);printf("  Stock: %d",stockXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("WHISKY ARDMORE 750ML");
                gotoxy(60,2); printf("  Precio: 859.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXI);
                stock22();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXI);
                gotoxy(20,2); printf("WHISKY ARDMORE 750ML");
                gotoxy(60,2); printf("  Precio: 859.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXI=stockXXI-unidad;
                if(stockXXI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXI=stockXXI+unidad;
                if(stockXXI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY ARDMORE 750ML");
                gotoxy(60,2); printf("  Precio: 859.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXI);
                x=stockXXI*282;

                stockXXI=stockXXI-stockXXI;
                system("cls");
                gotoxy(20,2); printf("WHISKY ARDMORE 750ML");
                gotoxy(60,2); printf("  Precio: 859.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*859;
                system("cls");
                gotoxy(20,2); printf("WHISKY ARDMORE 750ML");
                gotoxy(60,2); printf("  Precio: 859.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              break;
              case 3:
                gotoxy(20,2); printf("WHISKY ARDBEG 10 YEAR OLD MALT 750ML");
                gotoxy(60,2); printf("  Precio: 1000.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXII);
                stock23();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXII);
                gotoxy(20,2); printf("WHISKY ARDBEG 10 YEAR OLD MALT 750ML");
                gotoxy(60,2); printf("  Precio: 1000.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXII=stockXXII-unidad;
                if(stockXXII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXII=stockXXII+unidad;
                if(stockXXII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY ARDBEG 10 YEAR OLD MALT 750ML");
                gotoxy(60,2); printf("  Precio: 1000.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXII);
                x=stockXXII*282;

                stockXXII=stockXXII-stockXXII;
                system("cls");
                gotoxy(20,2); printf("WHISKY ARDBEG 10 YEAR OLD MALT 750ML");
                gotoxy(60,2); printf("  Precio: 1000.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*1000;
                system("cls");
                gotoxy(20,2); printf("WHISKY ARDBEG 10 YEAR OLD MALT 750ML");
                gotoxy(60,2); printf("  Precio: 1000.00");
                gotoxy(60,3);printf("  Stock: %d",stockXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("WHISKY BALVENIE 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 966.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXIII);
                stock24();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXIII);
                gotoxy(20,2); printf("WHISKY BALVENIE 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 966.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXIII=stockXXIII-unidad;
                if(stockXXIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXIII=stockXXIII+unidad;
                if(stockXXIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY BALVENIE 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 966.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIII);
                x=stockXXIII*282;

                stockXXIII=stockXXIII-stockXXIII;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALVENIE 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 966.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*966;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALVENIE 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 966.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("WHISKY BALVENIE 17 DOUBLEWOOD 750ML");
                gotoxy(60,2); printf("  Precio: 3179.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXIV);
                stock25();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXIV);
                gotoxy(20,2); printf("WHISKY BALVENIE 17 DOUBLEWOOD 750ML");
                gotoxy(60,2); printf("  Precio: 3179.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXIV=stockXXIV-unidad;
                if(stockXXIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXIV=stockXXIV+unidad;
                if(stockXXIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY BALVENIE 17 DOUBLEWOOD 750ML");
                gotoxy(60,2); printf("  Precio: 3179.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIV);
                x=stockXXIV*282;

                stockXXIV=stockXXIV-stockXXIV;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALVENIE 17 DOUBLEWOOD 750ML");
                gotoxy(60,2); printf("  Precio: 3179.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*3179;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALVENIE 17 DOUBLEWOOD 750ML");
                gotoxy(60,2); printf("  Precio: 3179.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }
              break;
             case 2:
            printf("BLENDED");
            printf("\t\n1.- WHISKY CHARLES NUGENT 750ML");
            printf("\t\n2.- WHISKY BALLENTINES 12 AÃ‘OS 750ML");
            printf("\t\n3.- WHISKY BALLENTINES 21 AÃ‘OS 700ML");
            printf("\t\n4.- WHISKY BALLENTINES 30 AÃ‘OS 700ML");
            printf("\t\n5.- WHISKY WALKER ODYSSEY 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("WHISKY CHARLES NUGENT 750ML");
                gotoxy(60,2); printf("  Precio: 434.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXV);
                stock26();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXV);
                gotoxy(20,2); printf("WHISKY CHARLES NUGENT 750ML");
                gotoxy(60,2); printf("  Precio: 434.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXV=stockXXV-unidad;
                if(stockXXV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXV=stockXXV+unidad;
                if(stockXXV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY CHARLES NUGENT 750ML");
                gotoxy(60,2); printf("  Precio: 434.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXV);
                x=stockXXV*282;

                stockXXV=stockXXV-stockXXV;
                system("cls");
                gotoxy(20,2); printf("WHISKY CHARLES NUGENT 750ML");
                gotoxy(60,2); printf("  Precio: 434.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                suma=suma+x;
                }
                else
                {
                x=unidad*434;
                system("cls");
                gotoxy(20,2); printf("WHISKY CHARLES NUGENT 750ML");
                gotoxy(60,2); printf("  Precio: 434.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("WHISKY BALLENTINES 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 2509.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXVI);
                stock27();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXVI);
                gotoxy(20,2); printf("WHISKY BALLENTINES 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 2509.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXVI=stockXXVI-unidad;
                if(stockXXVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXVI=stockXXVI+unidad;
                if(stockXXVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 2509.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVI);
                x=stockXXVI*282;

                stockXXVI=stockXXVI-stockXXVI;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 2509.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*2509;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 12 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 2509.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("WHISKY BALLENTINES 21 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 5832.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXVII);
                stock28();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXVII);
                gotoxy(20,2); printf("WHISKY BALLENTINES 21 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 5832.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXVII=stockXXVII-unidad;
                if(stockXXVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXVII=stockXXVII+unidad;
                if(stockXXVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 21 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 5832.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVII);
                x=stockXXVII*282;

                stockXXVII=stockXXVII-stockXXVII;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 21 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 5832.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }

                }
                else
                {
                x=unidad*5832;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 21 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 5832.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("WHISKY BALLENTINES 30 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXVIII);
                stock29();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXVIII);
                gotoxy(20,2); printf("WHISKY BALLENTINES 30 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXVIII=stockXXVIII-unidad;
                if(stockXXVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXVIII=stockXXVIII+unidad;
                if(stockXXVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 30 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVIII);
                x=stockXXVIII*282;

                stockXXVIII=stockXXVIII-stockXXVIII;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 30 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*17134;
                system("cls");
                gotoxy(20,2); printf("WHISKY BALLENTINES 30 AÃ‘OS 700ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("WHISKY WALKER ODYSSEY 750ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXIX);
                stock30();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXIX);
                gotoxy(20,2); printf("WHISKY WALKER ODYSSEY 750ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXIX=stockXXIX-unidad;
                if(stockXXIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXIX=stockXXIX+unidad;
                if(stockXXIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY WALKER ODYSSEY 750ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIX);
                x=stockXXIX*282;

                stockXXIX=stockXXIX-stockXXIX;
                system("cls");
                gotoxy(20,2); printf("WHISKY WALKER ODYSSEY 750ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }

                }
                else
                {
                x=unidad*17134;
                system("cls");
                gotoxy(20,2); printf("WHISKY WALKER ODYSSEY 750ML");
                gotoxy(60,2); printf("  Precio: 17134.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

          }
          break;
             case 3:
            printf("BOURBON");
            printf("\t\n1.- WHISKY WOODFORD RESERVA 750ML");
            printf("\t\n2.- WHISKY EARLY TIMES 1LT");
            printf("\t\n3.- WHISKY EARLY TIMES 750ML");
            printf("\t\n4.- WHISKY JIM BEAM NEGRO 8 AÃ‘OS 750ML");
            printf("\t\n5.- WHISKY WID TURKEY 700ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("WHISKY WOODFORD RESERVA 750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXX);
                stock31();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXX);
                gotoxy(20,2); printf("WHISKY WOODFORD RESERVA 750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXX=stockXXX-unidad;
                if(stockXXX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXX=stockXXX+unidad;
                if(stockXXX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY WOODFORD RESERVA 750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXX);
                x=stockXXX*282;

                stockXXX=stockXXX-stockXXX;
                system("cls");
                gotoxy(20,2); printf("WHISKY WOODFORD RESERVA 750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*715;
                system("cls");
                gotoxy(20,2); printf("WHISKY WOODFORD RESERVA 750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("WHISKY EARLY TIMES 1LT");
                gotoxy(60,2); printf("  Precio: 193.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXI);
                stock32();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXI);
                gotoxy(20,2); printf("WHISKY EARLY TIMES 1LT");
                gotoxy(60,2); printf("  Precio: 193.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXI=stockXXXI-unidad;
                if(stockXXXI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXI=stockXXXI+unidad;
                if(stockXXXI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY EARLY TIMES 1LT");
                gotoxy(60,2); printf("  Precio: 193.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXI);
                x=stockXXXI*282;

                stockXXXI=stockXXXI-stockXXXI;
                system("cls");
                gotoxy(20,2); printf("WHISKY EARLY TIMES 1LT");
                gotoxy(60,2); printf("  Precio: 193.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*193;
                system("cls");
                gotoxy(20,2); printf("WHISKY EARLY TIMES 1LT");
                gotoxy(60,2); printf("  Precio: 193.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("WHISKY EARLY TIMES 750ML");
                gotoxy(60,2); printf("  Precio: 160.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXII);
                stock33();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXII);
                gotoxy(20,2); printf("WHISKY EARLY TIMES 750ML");
                gotoxy(60,2); printf("  Precio: 160.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXII=stockXXXII-unidad;
                if(stockXXXII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXII=stockXXXII+unidad;
                if(stockXXXII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY EARLY TIMES 750ML");
                gotoxy(60,2); printf("  Precio: 160.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXII);
                x=stockXXXII*282;

                stockXXXII=stockXXXII-stockXXXII;
                system("cls");
                gotoxy(20,2); printf("WHISKY EARLY TIMES 750ML");
                gotoxy(60,2); printf("  Precio: 160.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*160;
                system("cls");
                gotoxy(20,2); printf("WHISKY EARLY TIMES 750ML");
                gotoxy(60,2); printf("  Precio: 160.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("WHISKY JIM BEAM NEGRO 8 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 374.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIII);
                stock34();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIII);
                gotoxy(20,2); printf("WHISKY JIM BEAM NEGRO 8 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 374.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXIII=stockXXXIII-unidad;
                if(stockXXXIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXIII=stockXXXIII+unidad;
                if(stockXXXIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY JIM BEAM NEGRO 8 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 374.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIII);
                x=stockXXXIII*282;

                stockXXXIII=stockXXXIII-stockXXXIII;
                system("cls");
                gotoxy(20,2); printf("WHISKY JIM BEAM NEGRO 8 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 374.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*374;
                system("cls");
                gotoxy(20,2); printf("WHISKY JIM BEAM NEGRO 8 AÃ‘OS 750ML");
                gotoxy(60,2); printf("  Precio: 374.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("WHISKY WID TURKEY 700ML");
                gotoxy(60,2); printf("  Precio: 315.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIV);
                stock35();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIV);
                gotoxy(20,2); printf("WHISKY WID TURKEY 700ML");
                gotoxy(60,2); printf("  Precio: 315.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXIV=stockXXXIV-unidad;
                if(stockXXXIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXIV=stockXXXIV+unidad;
                if(stockXXXIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY WID TURKEY 700ML");
                gotoxy(60,2); printf("  Precio: 315.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIV);
                x=stockXXXIV*282;

                stockXXXIV=stockXXXIV-stockXXXIV;
                system("cls");
                gotoxy(20,2); printf("WHISKY WID TURKEY 700ML");
                gotoxy(60,2); printf("  Precio: 315.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*315;
                system("cls");
                gotoxy(20,2); printf("WHISKY WID TURKEY 700ML");
                gotoxy(60,2); printf("  Precio: 315.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

          }
          break;
             case 4:
            printf("TENNESSE");
            printf("\t\n1.- WHISKY ENTLEMAN JACKS 750ML");
            printf("\t\n2.- WHISKY JACK DANIEL'S 1750ML");
            printf("\t\n3.- WHISKY JACK DANIEL'S 1LT");
            printf("\t\n4.- WHISKY JACK DANIEL'S HONEY 700ML");
            printf("\t\n5.- WHISKY JACK DANIEL'S 700ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("WHISKY ENTLEMAN JACKS 750ML");
                gotoxy(60,2); printf("  Precio: 615.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXV);
                stock36();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXV);
                gotoxy(20,2); printf("WHISKY ENTLEMAN JACKS 750ML");
                gotoxy(60,2); printf("  Precio: 615.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXV=stockXXXV-unidad;
                if(stockXXXV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXV=stockXXXV+unidad;
                if(stockXXXV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY ENTLEMAN JACKS 750ML");
                gotoxy(60,2); printf("  Precio: 615.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXV);
                x=stockXXXV*282;

                stockXXXV=stockXXXV-stockXXXV;
                system("cls");
                gotoxy(20,2); printf("WHISKY ENTLEMAN JACKS 750ML");
                gotoxy(60,2); printf("  Precio: 615.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*615;
                system("cls");
                gotoxy(20,2); printf("WHISKY ENTLEMAN JACKS 750ML");
                gotoxy(60,2); printf("  Precio: 615.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVI);
                stock37();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVI);
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXVI=stockXXXVI-unidad;
                if(stockXXXVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXVI=stockXXXVI+unidad;
                if(stockXXXVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVI);
                x=stockXXXVI*282;

                stockXXXVI=stockXXXVI-stockXXXVI;
                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*715;
                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1750ML");
                gotoxy(60,2); printf("  Precio: 715.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1LT");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVII);
                stock38();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVII);
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1LT");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXVII=stockXXXVII-unidad;
                if(stockXXXVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXVII=stockXXXVII+unidad;
                if(stockXXXVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1LT");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVII);
                x=stockXXXVII*282;

                stockXXXVII=stockXXXVII-stockXXXVII;
                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1LT");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*450;
                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 1LT");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S HONEY 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVIII);
                stock39();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXVIII);
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S HONEY 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXVIII=stockXXXVIII-unidad;
                if(stockXXXVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXVIII=stockXXXVIII+unidad;
                if(stockXXXVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S HONEY 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVIII);
                x=stockXXXVIII*282;

                stockXXXVIII=stockXXXVIII-stockXXXVIII;
                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S HONEY 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*324;
                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S HONEY 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIX);
                stock40();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXIX);
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXIX=stockXXXIX-unidad;
                if(stockXXXIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXIX=stockXXXIX+unidad;
                if(stockXXXIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIX);
                x=stockXXXIX*282;

                stockXXXIX=stockXXXIX-stockXXXIX;
                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*324;
                system("cls");
                gotoxy(20,2); printf("WHISKY JACK DANIEL'S 700ML");
                gotoxy(60,2); printf("  Precio: 324.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

          }
          break;
}

}


int cognac(){
            system("cls");
            printf("COGNAC");
            printf("\t\n1.- COGNAC COURVOISIER 12A 750ML");
            printf("\t\n2.- COGNAC REMYM X O GOLD EDICION LIMITADA 700ML");
            printf("\t\n3.- COGNAC BISCUIT X O 700ML");
            printf("\t\n4.- COGNAC BISCUIT PASSION 750ML");
            printf("\t\n5.- COGNAC CAMUS EXTRA ELEGANCE 700ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            system("cls");
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("COGNAC COURVOISIER 12A 750ML");
                gotoxy(60,2); printf("  Precio: 769.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXX);
                stock41();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXX);
                gotoxy(20,2); printf("COGNAC COURVOISIER 12A 750ML");
                gotoxy(60,2); printf("  Precio: 769.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXX=stockXXXX-unidad;
                if(stockXXXX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXX=stockXXXX+unidad;
                if(stockXXXX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("COGNAC COURVOISIER 12A 750ML");
                gotoxy(60,2); printf("  Precio: 769.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXX);
                x=stockXXXX*282;

                stockXXXX=stockXXXX-stockXXXX;
                system("cls");
                gotoxy(20,2); printf("COGNAC COURVOISIER 12A 750ML");
                gotoxy(60,2); printf("  Precio: 769.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*769;
                system("cls");
                gotoxy(20,2); printf("COGNAC COURVOISIER 12A 750ML");
                gotoxy(60,2); printf("  Precio: 769.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("COGNAC REMYM X O GOLD EDICION LIMITADA 700ML");
                gotoxy(60,2); printf("  Precio: 3354.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXI);
                stock42();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXI);
                gotoxy(20,2); printf("COGNAC REMYM X O GOLD EDICION LIMITADA 700ML");
                gotoxy(60,2); printf("  Precio: 3354.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXXI=stockXXXXI-unidad;
                if(stockXXXXI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXXI=stockXXXXI+unidad;
                if(stockXXXXI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXXI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("COGNAC REMYM X O GOLD EDICION LIMITADA 700ML");
                gotoxy(60,2); printf("  Precio: 3354.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXI);
                x=stockXXXXI*282;

                stockXXXXI=stockXXXXI-stockXXXXI;
                system("cls");
                gotoxy(20,2); printf("COGNAC REMYM X O GOLD EDICION LIMITADA 700ML");
                gotoxy(60,2); printf("  Precio: 3354.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*3354;
                system("cls");
                gotoxy(20,2); printf("COGNAC REMYM X O GOLD EDICION LIMITADA 700ML");
                gotoxy(60,2); printf("  Precio: 3354.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("COGNAC BISCUIT X O 700ML");
                gotoxy(60,2); printf("  Precio: 2027.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXII);
                stock43();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXII);
                gotoxy(20,2); printf("COGNAC BISCUIT X O 700ML");
                gotoxy(60,2); printf("  Precio: 2027.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXXII=stockXXXXII-unidad;
                if(stockXXXXII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXXII=stockXXXXII+unidad;
                if(stockXXXXII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXXII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("COGNAC BISCUIT X O 700ML");
                gotoxy(60,2); printf("  Precio: 2027.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXII);
                x=stockXXXXII*282;

                stockXXXXII=stockXXXXII-stockXXXXII;
                system("cls");
                gotoxy(20,2); printf("COGNAC BISCUIT X O 700ML");
                gotoxy(60,2); printf("  Precio: 2027.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*2027;
                system("cls");
                gotoxy(20,2); printf("COGNAC BISCUIT X O 700ML");
                gotoxy(60,2); printf("  Precio: 2027.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("COGNAC BISCUIT PASSION 750ML");
                gotoxy(60,2); printf("  Precio: 750.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXIII);
                stock44();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXIII);
                gotoxy(20,2); printf("COGNAC BISCUIT PASSION 750ML");
                gotoxy(60,2); printf("  Precio: 750.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXXIII=stockXXXXIII-unidad;
                if(stockXXXXIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXXIII=stockXXXXIII+unidad;
                if(stockXXXXIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXXIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("COGNAC BISCUIT PASSION 750ML");
                gotoxy(60,2); printf("  Precio: 750.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXIII);
                x=stockXXXXIII*282;

                stockXXXXIII=stockXXXXIII-stockXXXXIII;
                system("cls");
                gotoxy(20,2); printf("COGNAC BISCUIT PASSION 750ML");
                gotoxy(60,2); printf("  Precio: 750.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*750;
                system("cls");
                gotoxy(20,2); printf("COGNAC BISCUIT PASSION 750ML");
                gotoxy(60,2); printf("  Precio: 750.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("COGNAC CAMUS EXTRA ELEGANCE 700ML");
                gotoxy(60,2); printf("  Precio: 5623.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXIV);
                stock45();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXIV);
                gotoxy(20,2); printf("COGNAC CAMUS EXTRA ELEGANCE 700ML");
                gotoxy(60,2); printf("  Precio: 5623.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXXIV=stockXXXXIV-unidad;
                if(stockXXXXIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXXIV=stockXXXXIV+unidad;
                if(stockXXXXIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXXIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("COGNAC CAMUS EXTRA ELEGANCE 700ML");
                gotoxy(60,2); printf("  Precio: 5623.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXIV);
                x=stockXXXXIV*282;

                stockXXXXIV=stockXXXXIV-stockXXXXIV;
                system("cls");
                gotoxy(20,2); printf("COGNAC CAMUS EXTRA ELEGANCE 700ML");
                gotoxy(60,2); printf("  Precio: 5623.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*5623;
                system("cls");
                gotoxy(20,2); printf("COGNAC CAMUS EXTRA ELEGANCE 700ML");
                gotoxy(60,2); printf("  Precio: 5623.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }


}


int vodka(){
            system("cls");
            printf("VODKA");
            printf("\t\n1.- VODKA ABSOLUT 100 1LT");
            printf("\t\n2.- VODKA ABSOLUT 100 750ML");
            printf("\t\n3.- VODKA ABSOLUT AZUL 1LT");
            printf("\t\n4.- VODKA ABSOLUT AZUL 750ML");
            printf("\t\n5.- VODKA ELYX NUEVA EDICION 4.5LT");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            system("cls");
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("VODKA ABSOLUT 100 1LT");
                gotoxy(60,2); printf("  Precio: 442.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXV);
                stock46();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXV);
                gotoxy(20,2); printf("VODKA ABSOLUT 100 1LT");
                gotoxy(60,2); printf("  Precio: 442.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXXV=stockXXXXV-unidad;
                if(stockXXXXV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXXV=stockXXXXV+unidad;
                if(stockXXXXV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXXV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT 100 1LT");
                gotoxy(60,2); printf("  Precio: 442.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXV);
                x=stockXXXXV*282;

                stockXXXXV=stockXXXXV-stockXXXXV;
                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT 100 1LT");
                gotoxy(60,2); printf("  Precio: 442.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*442;
                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT 100 1LT");
                gotoxy(60,2); printf("  Precio: 442.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("VODKA ABSOLUT 100 750ML");
                gotoxy(60,2); printf("  Precio: 346.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVI);
                stock47();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVI);
                gotoxy(20,2); printf("VODKA ABSOLUT 100 750ML");
                gotoxy(60,2); printf("  Precio: 346.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXXVI=stockXXXXVI-unidad;
                if(stockXXXXVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXXVI=stockXXXXVI+unidad;
                if(stockXXXXVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXXVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT 100 750ML");
                gotoxy(60,2); printf("  Precio: 346.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVI);
                x=stockXXXXVI*282;

                stockXXXXVI=stockXXXXVI-stockXXXXVI;
                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT 100 750ML");
                gotoxy(60,2); printf("  Precio: 346.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*346;
                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT 100 750ML");
                gotoxy(60,2); printf("  Precio: 346.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 1LT");
                gotoxy(60,2); printf("  Precio: 253.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVII);
                stock48();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVII);
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 1LT");
                gotoxy(60,2); printf("  Precio: 253.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXXVII=stockXXXXVII-unidad;
                if(stockXXXXVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXXVII=stockXXXXVII+unidad;
                if(stockXXXXVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXXVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 1LT");
                gotoxy(60,2); printf("  Precio: 253.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVII);
                x=stockXXXXVII*282;

                stockXXXXVII=stockXXXXVII-stockXXXXVII;
                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 1LT");
                gotoxy(60,2); printf("  Precio: 253.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*253;
                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 1LT");
                gotoxy(60,2); printf("  Precio: 253.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 750ML");
                gotoxy(60,2); printf("  Precio: 225.00");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVIII);
                stock49();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXXXXVIII);
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 750ML");
                gotoxy(60,2); printf("  Precio: 225.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXXXXVIII=stockXXXXVIII-unidad;
                if(stockXXXXVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXXXXVIII=stockXXXXVIII+unidad;
                if(stockXXXXVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXXXXVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 750ML");
                gotoxy(60,2); printf("  Precio: 225.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVIII);
                x=stockXXXXVIII*282;

                stockXXXXVIII=stockXXXXVIII-stockXXXXVIII;
                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 750ML");
                gotoxy(60,2); printf("  Precio: 225.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*225;
                system("cls");
                gotoxy(20,2); printf("VODKA ABSOLUT AZUL 750ML");
                gotoxy(60,2); printf("  Precio: 225.00");
                gotoxy(60,3);printf("  Stock: %d",stockXXXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("VODKA ELYX NUEVA EDICION 4.5LT");
                gotoxy(60,2); printf("  Precio: 4289.00");
                gotoxy(60,3); printf("  Stock: %d",stockXLIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXLIX);
                stock50();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXLIX);
                gotoxy(20,2); printf("VODKA ELYX NUEVA EDICION 4.5LT");
                gotoxy(60,2); printf("  Precio: 4289.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXLIX=stockXLIX-unidad;
                if(stockXLIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXLIX=stockXLIX+unidad;
                if(stockXLIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXLIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VODKA ELYX NUEVA EDICION 4.5LT");
                gotoxy(60,2); printf("  Precio: 4289.00");
                gotoxy(60,3);printf("  Stock: %d",stockXLIX);
                x=stockXLIX*282;

                stockXLIX=stockXLIX-stockXLIX;
                system("cls");
                gotoxy(20,2); printf("VODKA ELYX NUEVA EDICION 4.5LT");
                gotoxy(60,2); printf("  Precio: 4289.00");
                gotoxy(60,3);printf("  Stock: %d",stockXLIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*4289;
                system("cls");
                gotoxy(20,2); printf("VODKA ELYX NUEVA EDICION 4.5LT");
                gotoxy(60,2); printf("  Precio: 4289.00");
                gotoxy(60,3);printf("  Stock: %d",stockXLIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }


}


int mezcal(){
            printf("MEZCAL");
            printf("\t\n1.- JARAL DE BERNU 750ML");
            printf("\t\n2.- 33 REPOSADO 750ML");
            printf("\t\n3.- 400 CONEJOS REPOSADO 750ML");
            printf("\t\n4.- AGAVE CRIOLLO NAYAA 750ML");
            printf("\t\n5.- AGUA BENDITA JOVEN 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("JARAL DE BERNU 750ML");
                gotoxy(60,2); printf("  Precio: 249.00");
                gotoxy(60,3); printf("  Stock: %d",stockL);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockL);
                stock51();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockL);
                gotoxy(20,2); printf("JARAL DE BERNU 750ML");
                gotoxy(60,2); printf("  Precio: 249.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockL=stockL-unidad;
                if(stockL < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockL=stockL+unidad;
                if(stockL > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockL);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("JARAL DE BERNU 750ML");
                gotoxy(60,2); printf("  Precio: 249.00");
                gotoxy(60,3);printf("  Stock: %d",stockL);
                x=stockL*282;

                stockL=stockL-stockL;
                system("cls");
                gotoxy(20,2); printf("JARAL DE BERNU 750ML");
                gotoxy(60,2); printf("  Precio: 249.00");
                gotoxy(60,3);printf("  Stock: %d",stockL);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*249;
                system("cls");
                gotoxy(20,2); printf("JARAL DE BERNU 750ML");
                gotoxy(60,2); printf("  Precio: 249.00");
                gotoxy(60,3);printf("  Stock: %d",stockL);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("33 REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 3250.00");
                gotoxy(60,3); printf("  Stock: %d",stockLI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLI);
                stock52();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLI);
                gotoxy(20,2); printf("33 REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 3250.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLI=stockLI-unidad;
                if(stockLI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLI=stockLI+unidad;
                if(stockLI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("33 REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 3250.00");
                gotoxy(60,3);printf("  Stock: %d",stockLI);
                x=stockLI*282;

                stockLI=stockLI-stockLI;
                system("cls");
                gotoxy(20,2); printf("33 REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 3250.00");
                gotoxy(60,3);printf("  Stock: %d",stockLI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*3250;
                system("cls");
                gotoxy(20,2); printf("33 REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 3250.00");
                gotoxy(60,3);printf("  Stock: %d",stockLI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("400 CONEJOS REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 441.00");
                gotoxy(60,3); printf("  Stock: %d",stockLII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLII);
                stock53();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLII);
                gotoxy(20,2); printf("400 CONEJOS REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 441.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLII=stockLII-unidad;
                if(stockLII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLII=stockLII+unidad;
                if(stockLII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("400 CONEJOS REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 441.00");
                gotoxy(60,3);printf("  Stock: %d",stockLII);
                x=stockLII*282;

                stockLII=stockLII-stockLII;
                system("cls");
                gotoxy(20,2); printf("400 CONEJOS REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 441.00");
                gotoxy(60,3);printf("  Stock: %d",stockLII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*441;
                system("cls");
                gotoxy(20,2); printf("400 CONEJOS REPOSADO 750ML");
                gotoxy(60,2); printf("  Precio: 441.00");
                gotoxy(60,3);printf("  Stock: %d",stockLII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("AGAVE CRIOLLO NAYAA 750ML");
                gotoxy(60,2); printf("  Precio: 1539.00");
                gotoxy(60,3); printf("  Stock: %d",stockLIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLIII);
                stock54();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLIII);
                gotoxy(20,2); printf("AGAVE CRIOLLO NAYAA 750ML");
                gotoxy(60,2); printf("  Precio: 1539.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLIII=stockLIII-unidad;
                if(stockLIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLIII=stockLIII+unidad;
                if(stockLIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("AGAVE CRIOLLO NAYAA 750ML");
                gotoxy(60,2); printf("  Precio: 1539.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIII);
                x=stockLIII*282;

                stockLIII=stockLIII-stockLIII;
                system("cls");
                gotoxy(20,2); printf("AGAVE CRIOLLO NAYAA 750ML");
                gotoxy(60,2); printf("  Precio: 1539.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*1539;
                system("cls");
                gotoxy(20,2); printf("AGAVE CRIOLLO NAYAA 750ML");
                gotoxy(60,2); printf("  Precio: 1539.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("AGUA BENDITA JOVEN 750ML");
                gotoxy(60,2); printf("  Precio: 395.00");
                gotoxy(60,3); printf("  Stock: %d",stockLIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLIV);
                stock55();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLIV);
                gotoxy(20,2); printf("AGUA BENDITA JOVEN 750ML");
                gotoxy(60,2); printf("  Precio: 395.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLIV=stockLIV-unidad;
                if(stockLIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLIV=stockLIV+unidad;
                if(stockLIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("AGUA BENDITA JOVEN 750ML");
                gotoxy(60,2); printf("  Precio: 395.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIV);
                x=stockLIV*282;

                stockLIV=stockLIV-stockLIV;
                system("cls");
                gotoxy(20,2); printf("AGUA BENDITA JOVEN 750ML");
                gotoxy(60,2); printf("  Precio: 395.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*395;
                system("cls");
                gotoxy(20,2); printf("AGUA BENDITA JOVEN 750ML");
                gotoxy(60,2); printf("  Precio: 395.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }

}


int ron(){
            system("cls");
            printf("RON");
            printf("\t\n1.- RON ANGOSTURA BITTER NARANJA 100ML");
            printf("\t\n2.- RON 10 CANE RUM 700ML");
            printf("\t\n3.- RON ABUELO AÃ‘EJO 1LT");
            printf("\t\n4.- RON ABUELO CENTURIA 750ML");
            printf("\t\n5.- RON ABUELO XV NAPOLEON 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            system("cls");
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("RON ANGOSTURA BITTER NARANJA 100ML");
                gotoxy(60,2); printf("  Precio: 279.00");
                gotoxy(60,3); printf("  Stock: %d",stockLV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLV);
                stock56();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLV);
                gotoxy(20,2); printf("RON ANGOSTURA BITTER NARANJA 100ML");
                gotoxy(60,2); printf("  Precio: 279.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLV=stockLV-unidad;
                if(stockLV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLV=stockLV+unidad;
                if(stockLV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("RON ANGOSTURA BITTER NARANJA 100ML");
                gotoxy(60,2); printf("  Precio: 279.00");
                gotoxy(60,3);printf("  Stock: %d",stockLV);
                x=stockLV*282;

                stockLV=stockLV-stockLV;
                system("cls");
                gotoxy(20,2); printf("RON ANGOSTURA BITTER NARANJA 100ML");
                gotoxy(60,2); printf("  Precio: 279.00");
                gotoxy(60,3);printf("  Stock: %d",stockLV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*279;
                system("cls");
                gotoxy(20,2); printf("RON ANGOSTURA BITTER NARANJA 100ML");
                gotoxy(60,2); printf("  Precio: 279.00");
                gotoxy(60,3);printf("  Stock: %d",stockLV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("RON 10 CANE RUM 700ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(60,3); printf("  Stock: %d",stockLVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLVI);
                stock57();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLVI);
                gotoxy(20,2); printf("RON 10 CANE RUM 700ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLVI=stockLVI-unidad;
                if(stockLVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLVI=stockLVI+unidad;
                if(stockLVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("RON 10 CANE RUM 700ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVI);
                x=stockLVI*282;

                stockLVI=stockLVI-stockLVI;
                system("cls");
                gotoxy(20,2); printf("RON 10 CANE RUM 700ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*650;
                system("cls");
                gotoxy(20,2); printf("RON 10 CANE RUM 700ML");
                gotoxy(60,2); printf("  Precio: 650.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("RON ABUELO AÃ‘EJO 1LT");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(60,3); printf("  Stock: %d",stockLVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLVII);
                stock58();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLVII);
                gotoxy(20,2); printf("RON ABUELO AÃ‘EJO 1LT");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLVII=stockLVII-unidad;
                if(stockLVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLVII=stockLVII+unidad;
                if(stockLVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("RON ABUELO AÃ‘EJO 1LT");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVII);
                x=stockLVII*282;

                stockLVII=stockLVII-stockLVII;
                system("cls");
                gotoxy(20,2); printf("RON ABUELO AÃ‘EJO 1LT");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*199;
                system("cls");
                gotoxy(20,2); printf("RON ABUELO AÃ‘EJO 1LT");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("RON ABUELO CENTURIA 750ML");
                gotoxy(60,2); printf("  Precio: 2389.00");
                gotoxy(60,3); printf("  Stock: %d",stockLVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLVIII);
                stock59();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLVIII);
                gotoxy(20,2); printf("RON ABUELO CENTURIA 750ML");
                gotoxy(60,2); printf("  Precio: 2389.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLVIII=stockLVIII-unidad;
                if(stockLVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLVIII=stockLVIII+unidad;
                if(stockLVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("RON ABUELO CENTURIA 750ML");
                gotoxy(60,2); printf("  Precio: 2389.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVIII);
                x=stockLVIII*282;

                stockLVIII=stockLVIII-stockLVIII;
                system("cls");
                gotoxy(20,2); printf("RON ABUELO CENTURIA 750ML");
                gotoxy(60,2); printf("  Precio: 2389.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*2389;
                system("cls");
                gotoxy(20,2); printf("RON ABUELO CENTURIA 750ML");
                gotoxy(60,2); printf("  Precio: 2389.00");
                gotoxy(60,3);printf("  Stock: %d",stockLVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("RON ABUELO XV NAPOLEON 750ML");
                gotoxy(60,2); printf("  Precio: 1690.00");
                gotoxy(60,3); printf("  Stock: %d",stockLIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLIX);
                stock60();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLIX);
                gotoxy(20,2); printf("RON ABUELO XV NAPOLEON 750ML");
                gotoxy(60,2); printf("  Precio: 1690.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLIX=stockLIX-unidad;
                if(stockLIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLIX=stockLIX+unidad;
                if(stockLIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("RON ABUELO XV NAPOLEON 750ML");
                gotoxy(60,2); printf("  Precio: 1690.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIX);
                x=stockLIX*282;

                stockLIX=stockLIX-stockLIX;
                system("cls");
                gotoxy(20,2); printf("RON ABUELO XV NAPOLEON 750ML");
                gotoxy(60,2); printf("  Precio: 1690.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*1690;
                system("cls");
                gotoxy(20,2); printf("RON ABUELO XV NAPOLEON 750ML");
                gotoxy(60,2); printf("  Precio: 1690.00");
                gotoxy(60,3);printf("  Stock: %d",stockLIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }

}


int ginebra(){
           system("cls");
            printf("GINEBRA");
            printf("\t\n1.- GINEBRA ELEPHANT GIN 500ML");
            printf("\t\n2.- GINEBRA WEMBLEY 700ML");
            printf("\t\n3.- GINEBRA BEEFEATER 24 700ML");
            printf("\t\n4.- GINEBRA BULLDOG 750ML");
            printf("\t\n5.- GINEBRA HENDNEKS 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
                system("cls");
              case 1:
                gotoxy(20,2); printf("GINEBRA ELEPHANT GIN 500ML");
                gotoxy(60,2); printf("  Precio: 998.00");
                gotoxy(60,3); printf("  Stock: %d",stockLX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLX);
                stock61();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLX);
                gotoxy(20,2); printf("GINEBRA ELEPHANT GIN 500ML");
                gotoxy(60,2); printf("  Precio: 998.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLX=stockLX-unidad;
                if(stockLX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLX=stockLX+unidad;
                if(stockLX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("GINEBRA ELEPHANT GIN 500ML");
                gotoxy(60,2); printf("  Precio: 998.00");
                gotoxy(60,3);printf("  Stock: %d",stockLX);
                x=stockLX*282;

                stockLX=stockLX-stockLX;
                system("cls");
                gotoxy(20,2); printf("GINEBRA ELEPHANT GIN 500ML");
                gotoxy(60,2); printf("  Precio: 998.00");
                gotoxy(60,3);printf("  Stock: %d",stockLX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*998;
                system("cls");
                gotoxy(20,2); printf("GINEBRA ELEPHANT GIN 500ML");
                gotoxy(60,2); printf("  Precio: 998.00");
                gotoxy(60,3);printf("  Stock: %d",stockLX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("GINEBRA WEMBLEY 700ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXI);
                stock62();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXI);
                gotoxy(20,2); printf("GINEBRA WEMBLEY 700ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXI=stockLXI-unidad;
                if(stockLXI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXI=stockLXI+unidad;
                if(stockLXI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("GINEBRA WEMBLEY 700ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXI);
                x=stockLXI*282;

                stockLXI=stockLXI-stockLXI;
                system("cls");
                gotoxy(20,2); printf("GINEBRA WEMBLEY 700ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*189;
                system("cls");
                gotoxy(20,2); printf("GINEBRA WEMBLEY 700ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("GINEBRA BEEFEATER 24 700ML");
                gotoxy(60,2); printf("  Precio: 516.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXII);
                stock63();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXII);
                gotoxy(20,2); printf("GINEBRA BEEFEATER 24 700ML");
                gotoxy(60,2); printf("  Precio: 516.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXII=stockLXII-unidad;
                if(stockLXII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXII=stockLXII+unidad;
                if(stockLXII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("GINEBRA BEEFEATER 24 700ML");
                gotoxy(60,2); printf("  Precio: 516.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXII);
                x=stockLXII*282;

                stockLXII=stockLXII-stockLXII;
                system("cls");
                gotoxy(20,2); printf("GINEBRA BEEFEATER 24 700ML");
                gotoxy(60,2); printf("  Precio: 516.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*516;
                system("cls");
                gotoxy(20,2); printf("GINEBRA BEEFEATER 24 700ML");
                gotoxy(60,2); printf("  Precio: 516.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("GINEBRA BULLDOG 750ML");
                gotoxy(60,2); printf("  Precio: 449.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXIII);
                stock64();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXIII);
                gotoxy(20,2); printf("GINEBRA BULLDOG 750ML");
                gotoxy(60,2); printf("  Precio: 449.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXIII=stockLXIII-unidad;
                if(stockLXIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXIII=stockLXIII+unidad;
                if(stockLXIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("GINEBRA BULLDOG 750ML");
                gotoxy(60,2); printf("  Precio: 449.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIII);
                x=stockLXIII*282;

                stockLXIII=stockLXIII-stockLXIII;
                system("cls");
                gotoxy(20,2); printf("GINEBRA BULLDOG 750ML");
                gotoxy(60,2); printf("  Precio: 449.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*449;
                system("cls");
                gotoxy(20,2); printf("GINEBRA BULLDOG 750ML");
                gotoxy(60,2); printf("  Precio: 449.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("GINEBRA HENDNEKS 750ML");
                gotoxy(60,2); printf("  Precio: 629.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXIV);
                stock65();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXIV);
                gotoxy(20,2); printf("GINEBRA HENDNEKS 750ML");
                gotoxy(60,2); printf("  Precio: 629.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXIV=stockLXIV-unidad;
                if(stockLXIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXIV=stockLXIV+unidad;
                if(stockLXIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("GINEBRA HENDNEKS 750ML");
                gotoxy(60,2); printf("  Precio: 629.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIV);
                x=stockLXIV*282;

                stockLXIV=stockLXIV-stockLXIV;
                system("cls");
                gotoxy(20,2); printf("GINEBRA HENDNEKS 750ML");
                gotoxy(60,2); printf("  Precio: 629.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*629;
                system("cls");
                gotoxy(20,2); printf("GINEBRA HENDNEKS 750ML");
                gotoxy(60,2); printf("  Precio: 629.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }

}


int brandy(){
    system("cls");
            printf("BRANDY");
            printf("\t\n1.- BRANDY CARDENAL DE MENDOZA 750ML");
            printf("\t\n2.- BRANDY AZTECA DE ORO 3LT");
            printf("\t\n3.- BRANDY AZTECA DE ORO ANIVERSARIO 750ML");
            printf("\t\n4.- BRANDY TORRES 10 700ML");
            printf("\t\n5.- BRANDY TORRES 20 700ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
                system("cls");
              case 1:
                gotoxy(20,2); printf("BRANDY CARDENAL DE MENDOZA 750ML");
                gotoxy(60,2); printf("  Precio: 18925.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXV);
                stock66();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXV);
                gotoxy(20,2); printf("BRANDY CARDENAL DE MENDOZA 750ML");
                gotoxy(60,2); printf("  Precio: 18925.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXV=stockLXV-unidad;
                if(stockLXV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXV=stockLXV+unidad;
                if(stockLXV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("BRANDY CARDENAL DE MENDOZA 750ML");
                gotoxy(60,2); printf("  Precio: 18925.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXV);
                x=stockLXV*282;

                stockLXV=stockLXV-stockLXV;
                system("cls");
                gotoxy(20,2); printf("BRANDY CARDENAL DE MENDOZA 750ML");
                gotoxy(60,2); printf("  Precio: 18925.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*18925;
                system("cls");
                gotoxy(20,2); printf("BRANDY CARDENAL DE MENDOZA 750ML");
                gotoxy(60,2); printf("  Precio: 18925.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO 3LT");
                gotoxy(60,2); printf("  Precio: 653.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXVI);
                stock67();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXVI);
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO 3LT");
                gotoxy(60,2); printf("  Precio: 653.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXVI=stockLXVI-unidad;
                if(stockLXVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXVI=stockLXVI+unidad;
                if(stockLXVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO 3LT");
                gotoxy(60,2); printf("  Precio: 653.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVI);
                x=stockLXVI*282;

                stockLXVI=stockLXVI-stockLXVI;
                system("cls");
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO 3LT");
                gotoxy(60,2); printf("  Precio: 653.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*653;
                system("cls");
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO 3LT");
                gotoxy(60,2); printf("  Precio: 653.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO ANIVERSARIO 750ML");
                gotoxy(60,2); printf("  Precio: 4661.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXVII);
                stock68();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXVII);
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO ANIVERSARIO 750ML");
                gotoxy(60,2); printf("  Precio: 4661.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXVII=stockLXVII-unidad;
                if(stockLXVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXVII=stockLXVII+unidad;
                if(stockLXVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO ANIVERSARIO 750ML");
                gotoxy(60,2); printf("  Precio: 4661.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVII);
                x=stockLXVII*282;

                stockLXVII=stockLXVII-stockLXVII;
                system("cls");
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO ANIVERSARIO 750ML");
                gotoxy(60,2); printf("  Precio: 4661.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*4661;
                system("cls");
                gotoxy(20,2); printf("BRANDY AZTECA DE ORO ANIVERSARIO 750ML");
                gotoxy(60,2); printf("  Precio: 4661.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("BRANDY TORRES 10 700ML");
                gotoxy(60,2); printf("  Precio: 239.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXVIII);
                stock69();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXVIII);
                gotoxy(20,2); printf("BRANDY TORRES 10 700ML");
                gotoxy(60,2); printf("  Precio: 239.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXVIII=stockLXVIII-unidad;
                if(stockLXVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXVIII=stockLXVIII+unidad;
                if(stockLXVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("BRANDY TORRES 10 700ML");
                gotoxy(60,2); printf("  Precio: 239.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVIII);
                x=stockLXVIII*282;

                stockLXVIII=stockLXVIII-stockLXVIII;
                system("cls");
                gotoxy(20,2); printf("BRANDY TORRES 10 700ML");
                gotoxy(60,2); printf("  Precio: 239.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*239;
                system("cls");
                gotoxy(20,2); printf("BRANDY TORRES 10 700ML");
                gotoxy(60,2); printf("  Precio: 239.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("BRANDY TORRES 20 700ML");
                gotoxy(60,2); printf("  Precio: 794.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXIX);
                stock70();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXIX);
                gotoxy(20,2); printf("BRANDY TORRES 20 700ML");
                gotoxy(60,2); printf("  Precio: 794.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXIX=stockLXIX-unidad;
                if(stockLXIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXIX=stockLXIX+unidad;
                if(stockLXIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("BRANDY TORRES 20 700ML");
                gotoxy(60,2); printf("  Precio: 794.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIX);
                x=stockLXIX*282;

                stockLXIX=stockLXIX-stockLXIX;
                system("cls");
                gotoxy(20,2); printf("BRANDY TORRES 20 700ML");
                gotoxy(60,2); printf("  Precio: 794.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*794;
                system("cls");
                gotoxy(20,2); printf("BRANDY TORRES 20 700ML");
                gotoxy(60,2); printf("  Precio: 794.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }

}


int jerez(){
    system("cls");
            printf("JEREZ");
            printf("\t\n1.- JEREZ DRY SACK MEDIUM 750ML");
            printf("\t\n2.- JEREZ FINO CLASICO FDO 750ML");
            printf("\t\n3.- JEREZ FINO LA INA 750ML");
            printf("\t\n4.- JEREZ MOSCATEL AMBROSIA 750ML");
            printf("\t\n5.- JEREZ PEDRO XIMENES CARDENAL 250ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            system("cls");
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("JEREZ DRY SACK MEDIUM 750ML");
                gotoxy(60,2); printf("  Precio: 219.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXX);
                stock71();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXX);
                gotoxy(20,2); printf("JEREZ DRY SACK MEDIUM 750ML");
                gotoxy(60,2); printf("  Precio: 219.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXX=stockLXX-unidad;
                if(stockLXX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXX=stockLXX+unidad;
                if(stockLXX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("JEREZ DRY SACK MEDIUM 750ML");
                gotoxy(60,2); printf("  Precio: 219.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXX);
                x=stockLXX*282;

                stockLXX=stockLXX-stockLXX;
                system("cls");
                gotoxy(20,2); printf("JEREZ DRY SACK MEDIUM 750ML");
                gotoxy(60,2); printf("  Precio: 219.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*219;
                system("cls");
                gotoxy(20,2); printf("JEREZ DRY SACK MEDIUM 750ML");
                gotoxy(60,2); printf("  Precio: 219.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("JEREZ FINO CLASICO FDO 750ML");
                gotoxy(60,2); printf("  Precio: 255.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXI);
                stock72();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXI);
                gotoxy(20,2); printf("JEREZ FINO CLASICO FDO 750ML");
                gotoxy(60,2); printf("  Precio: 255.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXI=stockLXXI-unidad;
                if(stockLXXI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXI=stockLXXI+unidad;
                if(stockLXXI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("JEREZ FINO CLASICO FDO 750ML");
                gotoxy(60,2); printf("  Precio: 255.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXI);
                x=stockLXXI*282;

                stockLXXI=stockLXXI-stockLXXI;
                system("cls");
                gotoxy(20,2); printf("JEREZ FINO CLASICO FDO 750ML");
                gotoxy(60,2); printf("  Precio: 255.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*255;
                system("cls");
                gotoxy(20,2); printf("JEREZ FINO CLASICO FDO 750ML");
                gotoxy(60,2); printf("  Precio: 255.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("JEREZ FINO LA INA 750ML");
                gotoxy(60,2); printf("  Precio: 329.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXII);
                stock73();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXII);
                gotoxy(20,2); printf("JEREZ FINO LA INA 750ML");
                gotoxy(60,2); printf("  Precio: 329.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXII=stockLXXII-unidad;
                if(stockLXXII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXII=stockLXXII+unidad;
                if(stockLXXII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("JEREZ FINO LA INA 750ML");
                gotoxy(60,2); printf("  Precio: 329.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXII);
                x=stockLXXII*282;

                stockLXXII=stockLXXII-stockLXXII;
                system("cls");
                gotoxy(20,2); printf("JEREZ FINO LA INA 750ML");
                gotoxy(60,2); printf("  Precio: 329.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*329;
                system("cls");
                gotoxy(20,2); printf("JEREZ FINO LA INA 750ML");
                gotoxy(60,2); printf("  Precio: 329.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("JEREZ MOSCATEL AMBROSIA 750ML");
                gotoxy(60,2); printf("  Precio: 645.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIII);
                stock74();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIII);
                gotoxy(20,2); printf("JEREZ MOSCATEL AMBROSIA 750ML");
                gotoxy(60,2); printf("  Precio: 645.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXIII=stockLXXIII-unidad;
                if(stockLXXIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXIII=stockLXXIII+unidad;
                if(stockLXXIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("JEREZ MOSCATEL AMBROSIA 750ML");
                gotoxy(60,2); printf("  Precio: 645.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIII);
                x=stockLXXIII*282;

                stockLXXIII=stockLXXIII-stockLXXIII;
                system("cls");
                gotoxy(20,2); printf("JEREZ MOSCATEL AMBROSIA 750ML");
                gotoxy(60,2); printf("  Precio: 645.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*645;
                system("cls");
                gotoxy(20,2); printf("JEREZ MOSCATEL AMBROSIA 750ML");
                gotoxy(60,2); printf("  Precio: 645.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("JEREZ PEDRO XIMENES CARDENAL 250ML");
                gotoxy(60,2); printf("  Precio: 518.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIV);
                stock75();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIV);
                gotoxy(20,2); printf("JEREZ PEDRO XIMENES CARDENAL 250ML");
                gotoxy(60,2); printf("  Precio: 518.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXIV=stockLXXIV-unidad;
                if(stockLXXIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXIV=stockLXXIV+unidad;
                if(stockLXXIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("JEREZ PEDRO XIMENES CARDENAL 250ML");
                gotoxy(60,2); printf("  Precio: 518.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIV);
                x=stockLXXIV*282;

                stockLXXIV=stockLXXIV-stockLXXIV;
                system("cls");
                gotoxy(20,2); printf("JEREZ PEDRO XIMENES CARDENAL 250ML");
                gotoxy(60,2); printf("  Precio: 518.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*518;
                system("cls");
                gotoxy(20,2); printf("JEREZ PEDRO XIMENES CARDENAL 250ML");
                gotoxy(60,2); printf("  Precio: 518.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }

}


int champagne(){
    system("cls");
            printf("CHAMPAGNE");
            printf("\t\n1.- CHAMPAGNE POMERY BRUT ROYAL 750ML");
            printf("\t\n2.- CHAMPAGNE RUINART BRUT ROSE COFFRED 750ML");
            printf("\t\n3.- CHAMPAGNE BOLLINGER LA GRANDE ANNEE 750ML");
            printf("\t\n4.- CHAMPAGNE BOLLINGER ROSE 750ML");
            printf("\t\n5.- CHAMPAGNE CRISTAL MILESIME 04 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            system("cls");
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 740.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXV);
                stock76();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXV);
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 740.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXV=stockLXXV-unidad;
                if(stockLXXV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXV=stockLXXV+unidad;
                if(stockLXXV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 740.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXV);
                x=stockLXXV*282;

                stockLXXV=stockLXXV-stockLXXV;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 740.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*740;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 740.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("CHAMPAGNE RUINART BRUT ROSE COFFRED 750ML");
                gotoxy(60,2); printf("  Precio: 1286.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVI);
                stock77();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVI);
                gotoxy(20,2); printf("CHAMPAGNE RUINART BRUT ROSE COFFRED 750ML");
                gotoxy(60,2); printf("  Precio: 1286.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXVI=stockLXXVI-unidad;
                if(stockLXXVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXVI=stockLXXVI+unidad;
                if(stockLXXVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE RUINART BRUT ROSE COFFRED 750ML");
                gotoxy(60,2); printf("  Precio: 1286.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVI);
                x=stockLXXVI*282;

                stockLXXVI=stockLXXVI-stockLXXVI;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE RUINART BRUT ROSE COFFRED 750ML");
                gotoxy(60,2); printf("  Precio: 1286.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*1286;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE RUINART BRUT ROSE COFFRED 750ML");
                gotoxy(60,2); printf("  Precio: 1286.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER LA GRANDE ANNEE 750ML");
                gotoxy(60,2); printf("  Precio: 2996.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVII);
                stock78();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVII);
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER LA GRANDE ANNEE 750ML");
                gotoxy(60,2); printf("  Precio: 2996.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXVII=stockLXXVII-unidad;
                if(stockLXXVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXVII=stockLXXVII+unidad;
                if(stockLXXVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER LA GRANDE ANNEE 750ML");
                gotoxy(60,2); printf("  Precio: 2996.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVII);
                x=stockLXXVII*282;

                stockLXXVII=stockLXXVII-stockLXXVII;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER LA GRANDE ANNEE 750ML");
                gotoxy(60,2); printf("  Precio: 2996.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*2996;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER LA GRANDE ANNEE 750ML");
                gotoxy(60,2); printf("  Precio: 2996.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER ROSE 750ML");
                gotoxy(60,2); printf("  Precio: 1899.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVIII);
                stock79();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXVIII);
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER ROSE 750ML");
                gotoxy(60,2); printf("  Precio: 1899.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXVIII=stockLXXVIII-unidad;
                if(stockLXXVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXVIII=stockLXXVIII+unidad;
                if(stockLXXVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER ROSE 750ML");
                gotoxy(60,2); printf("  Precio: 1899.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVIII);
                x=stockLXXVIII*282;

                stockLXXVIII=stockLXXVIII-stockLXXVIII;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER ROSE 750ML");
                gotoxy(60,2); printf("  Precio: 1899.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*1899;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE BOLLINGER ROSE 750ML");
                gotoxy(60,2); printf("  Precio: 1899.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 11500.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIX);
                stock80();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXIX);
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 11500.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXIX=stockLXXIX-unidad;
                if(stockLXXIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXIX=stockLXXIX+unidad;
                if(stockLXXIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 11500.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIX);
                x=stockLXXIX*282;

                stockLXXIX=stockLXXIX-stockLXXIX;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 11500.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*11500;
                system("cls");
                gotoxy(20,2); printf("CHAMPAGNE POMERY BRUT ROYAL 750ML");
                gotoxy(60,2); printf("  Precio: 11500.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }

}


int licor(){
    system("cls");
            printf("LICOR");
            printf("\t\n1.- ANIS ASTRORIANA 1LT");
            printf("\t\n2.- ANIS DE CAZALLA 1LT");
            printf("\t\n3.- JARABE GRANADINA COLLADO 1LT");
            printf("\t\n4.- KALANI MIYOLOGY 750ML");
            printf("\t\n5.- ORUJO TERRAS DO OGARRON HIERBAS 700ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            system("cls");
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("ANIS ASTRORIANA 1LT");
                gotoxy(60,2); printf("  Precio: 299.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXX);
                stock81();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXX);
                gotoxy(20,2); printf("ANIS ASTRORIANA 1LT");
                gotoxy(60,2); printf("  Precio: 299.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXX=stockLXXX-unidad;
                if(stockLXXX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXX=stockLXXX+unidad;
                if(stockLXXX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("ANIS ASTRORIANA 1LT");
                gotoxy(60,2); printf("  Precio: 299.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXX);
                x=stockLXXX*282;

                stockLXXX=stockLXXX-stockLXXX;
                system("cls");
                gotoxy(20,2); printf("ANIS ASTRORIANA 1LT");
                gotoxy(60,2); printf("  Precio: 299.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*299;
                system("cls");
                gotoxy(20,2); printf("ANIS ASTRORIANA 1LT");
                gotoxy(60,2); printf("  Precio: 299.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("ANIS DE CAZALLA 1LT");
                gotoxy(60,2); printf("  Precio: 462.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXI);
                stock82();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXI);
                gotoxy(20,2); printf("ANIS DE CAZALLA 1LT");
                gotoxy(60,2); printf("  Precio: 462.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXI=stockLXXXI-unidad;
                if(stockLXXXI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXI=stockLXXXI+unidad;
                if(stockLXXXI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("ANIS DE CAZALLA 1LT");
                gotoxy(60,2); printf("  Precio: 462.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXI);
                x=stockLXXXI*282;

                stockLXXXI=stockLXXXI-stockLXXXI;
                system("cls");
                gotoxy(20,2); printf("ANIS DE CAZALLA 1LT");
                gotoxy(60,2); printf("  Precio: 462.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*462;
                system("cls");
                gotoxy(20,2); printf("ANIS DE CAZALLA 1LT");
                gotoxy(60,2); printf("  Precio: 462.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("JARABE GRANADINA COLLADO 1LT");
                gotoxy(60,2); printf("  Precio: 36.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXII);
                stock83();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXII);
                gotoxy(20,2); printf("JARABE GRANADINA COLLADO 1LT");
                gotoxy(60,2); printf("  Precio: 36.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXII=stockLXXXII-unidad;
                if(stockLXXXII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXII=stockLXXXII+unidad;
                if(stockLXXXII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("JARABE GRANADINA COLLADO 1LT");
                gotoxy(60,2); printf("  Precio: 36.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXII);
                x=stockLXXXII*282;

                stockLXXXII=stockLXXXII-stockLXXXII;
                system("cls");
                gotoxy(20,2); printf("JARABE GRANADINA COLLADO 1LT");
                gotoxy(60,2); printf("  Precio: 36.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*36;
                system("cls");
                gotoxy(20,2); printf("JARABE GRANADINA COLLADO 1LT");
                gotoxy(60,2); printf("  Precio: 36.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("KALANI MIYOLOGY 750ML");
                gotoxy(60,2); printf("  Precio: 250.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIII);
                stock84();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIII);
                gotoxy(20,2); printf("KALANI MIYOLOGY 750ML");
                gotoxy(60,2); printf("  Precio: 250.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXIII=stockLXXXIII-unidad;
                if(stockLXXXIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXIII=stockLXXXIII+unidad;
                if(stockLXXXIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("KALANI MIYOLOGY 750ML");
                gotoxy(60,2); printf("  Precio: 250.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIII);
                x=stockLXXXIII*282;

                stockLXXXIII=stockLXXXIII-stockLXXXIII;
                system("cls");
                gotoxy(20,2); printf("KALANI MIYOLOGY 750ML");
                gotoxy(60,2); printf("  Precio: 250.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*250;
                system("cls");
                gotoxy(20,2); printf("KALANI MIYOLOGY 750ML");
                gotoxy(60,2); printf("  Precio: 250.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("ORUJO TERRAS DO OGARRON HIERBAS 700ML");
                gotoxy(60,2); printf("  Precio: 169.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIV);
                stock85();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIV);
                gotoxy(20,2); printf("ORUJO TERRAS DO OGARRON HIERBAS 700ML");
                gotoxy(60,2); printf("  Precio: 169.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXIV=stockLXXXIV-unidad;
                if(stockLXXXIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXIV=stockLXXXIV+unidad;
                if(stockLXXXIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("ORUJO TERRAS DO OGARRON HIERBAS 700ML");
                gotoxy(60,2); printf("  Precio: 169.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIV);
                x=stockLXXXIV*282;

                stockLXXXIV=stockLXXXIV-stockLXXXIV;
                system("cls");
                gotoxy(20,2); printf("ORUJO TERRAS DO OGARRON HIERBAS 700ML");
                gotoxy(60,2); printf("  Precio: 169.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*169;
                system("cls");
                gotoxy(20,2); printf("ORUJO TERRAS DO OGARRON HIERBAS 700ML");
                gotoxy(60,2); printf("  Precio: 169.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }

}


int vino(){
    system("cls");
            printf("VINOS");
          printf("\n1.- Tinto\n2.- Blanco\n3.- Rosado\n4.- Regresar\n Elija una opcion:");
          scanf("%d",&tipo);
          system("cls");
          switch(tipo){
          case 1:
            printf("VINO TINTO");
            printf("\t\n1.- VINO TINTO 93&60 RVA VIÃ‘A 750ML");
            printf("\t\n2.- VINO TINTO 3V CASA MADERO 750ML");
            printf("\t\n3.- VINO TINTO AKAXI 750ML");
            printf("\t\n4.- VINO TINTO ALA ROTA 750ML");
            printf("\t\n5.- VINO TINTO BALCHE ORO PREMIUM 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            system("cls");
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("VINO TINTO 93&60 RVA VIÃ‘A 750ML");
                gotoxy(60,2); printf("  Precio: 659.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXV);
                stock86();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXV);
                gotoxy(20,2); printf("VINO TINTO 93&60 RVA VIÃ‘A 750ML");
                gotoxy(60,2); printf("  Precio: 659.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXV=stockLXXXV-unidad;
                if(stockLXXXV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXV=stockLXXXV+unidad;
                if(stockLXXXV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VINO TINTO 93&60 RVA VIÃ‘A 750ML");
                gotoxy(60,2); printf("  Precio: 659.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXV);
                x=stockLXXXV*282;

                stockLXXXV=stockLXXXV-stockLXXXV;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO 93&60 RVA VIÃ‘A 750ML");
                gotoxy(60,2); printf("  Precio: 659.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*659;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO 93&60 RVA VIÃ‘A 750ML");
                gotoxy(60,2); printf("  Precio: 659.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("VINO TINTO 3V CASA MADERO 750ML");
                gotoxy(60,2); printf("  Precio: 296.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVI);
                stock87();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVI);
                gotoxy(20,2); printf("VINO TINTO 3V CASA MADERO 750ML");
                gotoxy(60,2); printf("  Precio: 296.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXVI=stockLXXXVI-unidad;
                if(stockLXXXVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXVI=stockLXXXVI+unidad;
                if(stockLXXXVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VINO TINTO 3V CASA MADERO 750ML");
                gotoxy(60,2); printf("  Precio: 296.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVI);
                x=stockLXXXVI*282;

                stockLXXXVI=stockLXXXVI-stockLXXXVI;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO 3V CASA MADERO 750ML");
                gotoxy(60,2); printf("  Precio: 296.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*296;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO 3V CASA MADERO 750ML");
                gotoxy(60,2); printf("  Precio: 296.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("VINO TINTO AKAXI 750ML");
                gotoxy(60,2); printf("  Precio: 161.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVII);
                stock88();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVII);
                gotoxy(20,2); printf("VINO TINTO AKAXI 750ML");
                gotoxy(60,2); printf("  Precio: 161.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXVII=stockLXXXVII-unidad;
                if(stockLXXXVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXVII=stockLXXXVII+unidad;
                if(stockLXXXVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VINO TINTO AKAXI 750ML");
                gotoxy(60,2); printf("  Precio: 161.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVII);
                x=stockLXXXVII*282;

                stockLXXXVII=stockLXXXVII-stockLXXXVII;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO AKAXI 750ML");
                gotoxy(60,2); printf("  Precio: 161.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*161;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO AKAXI 750ML");
                gotoxy(60,2); printf("  Precio: 161.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("VINO TINTO ALA ROTA 750ML");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVIII);
                stock89();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXVIII);
                gotoxy(20,2); printf("VINO TINTO ALA ROTA 750ML");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXVIII=stockLXXXVIII-unidad;
                if(stockLXXXVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXVIII=stockLXXXVIII+unidad;
                if(stockLXXXVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VINO TINTO ALA ROTA 750ML");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVIII);
                x=stockLXXXVIII*282;

                stockLXXXVIII=stockLXXXVIII-stockLXXXVIII;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO ALA ROTA 750ML");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*450;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO ALA ROTA 750ML");
                gotoxy(60,2); printf("  Precio: 450.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("VINO TINTO BALCHE ORO PREMIUM 750ML");
                gotoxy(60,2); printf("  Precio: 3904.00");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIX);
                stock90();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockLXXXIX);
                gotoxy(20,2); printf("VINO TINTO BALCHE ORO PREMIUM 750ML");
                gotoxy(60,2); printf("  Precio: 3904.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockLXXXIX=stockLXXXIX-unidad;
                if(stockLXXXIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockLXXXIX=stockLXXXIX+unidad;
                if(stockLXXXIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockLXXXIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VINO TINTO BALCHE ORO PREMIUM 750ML");
                gotoxy(60,2); printf("  Precio: 3904.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIX);
                x=stockLXXXIX*282;

                stockLXXXIX=stockLXXXIX-stockLXXXIX;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO BALCHE ORO PREMIUM 750ML");
                gotoxy(60,2); printf("  Precio: 3904.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*3904;
                system("cls");
                gotoxy(20,2); printf("VINO TINTO BALCHE ORO PREMIUM 750ML");
                gotoxy(60,2); printf("  Precio: 3904.00");
                gotoxy(60,3);printf("  Stock: %d",stockLXXXIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

            }
              break;
             case 2:
            printf("VINOS BLANCOS");
            printf("\t\n1.- BLANC DE BANCS DON ANGEL 750ML");
            printf("\t\n2.- BLANC DE BANCS XA DOMECO 375ML");
            printf("\t\n3.- BLANCA MEXICO 750ML");
            printf("\t\n4.- VINO BLANCO CALEFIA 750ML");
            printf("\t\n5.- CAPRICORNIUS EL CIELO 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("BLANC DE BANCS DON ANGEL 750ML");
                gotoxy(60,2); printf("  Precio: 74.00");
                gotoxy(60,3); printf("  Stock: %d",stockXC);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXC);
                stock91();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXC);
                gotoxy(20,2); printf("BLANC DE BANCS DON ANGEL 750ML");
                gotoxy(60,2); printf("  Precio: 74.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXC=stockXC-unidad;
                if(stockXC < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXC=stockXC+unidad;
                if(stockXC > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXC);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("BLANC DE BANCS DON ANGEL 750ML");
                gotoxy(60,2); printf("  Precio: 74.00");
                gotoxy(60,3);printf("  Stock: %d",stockXC);
                x=stockXC*282;

                stockXC=stockXC-stockXC;
                system("cls");
                gotoxy(20,2); printf("BLANC DE BANCS DON ANGEL 750ML");
                gotoxy(60,2); printf("  Precio: 74.00");
                gotoxy(60,3);printf("  Stock: %d",stockXC);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*74;
                system("cls");
                gotoxy(20,2); printf("BLANC DE BANCS DON ANGEL 750ML");
                gotoxy(60,2); printf("  Precio: 74.00");
                gotoxy(60,3);printf("  Stock: %d",stockXC);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("BLANC DE BANCS XA DOMECO 375ML");
                gotoxy(60,2); printf("  Precio: 49.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCI);
                stock92();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCI);
                gotoxy(20,2); printf("BLANC DE BANCS XA DOMECO 375ML");
                gotoxy(60,2); printf("  Precio: 49.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCI=stockXCI-unidad;
                if(stockXCI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCI=stockXCI+unidad;
                if(stockXCI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("BLANC DE BANCS XA DOMECO 375ML");
                gotoxy(60,2); printf("  Precio: 49.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCI);
                x=stockXCI*282;

                stockXCI=stockXCI-stockXCI;
                system("cls");
                gotoxy(20,2); printf("BLANC DE BANCS XA DOMECO 375ML");
                gotoxy(60,2); printf("  Precio: 49.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*49;
                system("cls");
                gotoxy(20,2); printf("BLANC DE BANCS XA DOMECO 375ML");
                gotoxy(60,2); printf("  Precio: 49.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("BLANCA MEXICO 750ML");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCII);
                stock93();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCII);
                gotoxy(20,2); printf("BLANCA MEXICO 750ML");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCII=stockXCII-unidad;
                if(stockXCII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCII=stockXCII+unidad;
                if(stockXCII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("BLANCA MEXICO 750ML");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCII);
                x=stockXCII*282;

                stockXCII=stockXCII-stockXCII;
                system("cls");
                gotoxy(20,2); printf("BLANCA MEXICO 750ML");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*199;
                system("cls");
                gotoxy(20,2); printf("BLANCA MEXICO 750ML");
                gotoxy(60,2); printf("  Precio: 199.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("VINO BLANCO CALEFIA 750ML");
                gotoxy(60,2); printf("  Precio: 58.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCIII);
                stock94();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCIII);
                gotoxy(20,2); printf("VINO BLANCO CALEFIA 750ML");
                gotoxy(60,2); printf("  Precio: 58.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCIII=stockXCIII-unidad;
                if(stockXCIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCIII=stockXCIII+unidad;
                if(stockXCIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("VINO BLANCO CALEFIA 750ML");
                gotoxy(60,2); printf("  Precio: 58.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCIII);
                x=stockXCIII*282;

                stockXCIII=stockXCIII-stockXCIII;
                system("cls");
                gotoxy(20,2); printf("VINO BLANCO CALEFIA 750ML");
                gotoxy(60,2); printf("  Precio: 58.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*58;
                system("cls");
                gotoxy(20,2); printf("VINO BLANCO CALEFIA 750ML");
                gotoxy(60,2); printf("  Precio: 58.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("CAPRICORNIUS EL CIELO 750ML");
                gotoxy(60,2); printf("  Precio: 348.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCIV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCIV);
                stock95();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCIV);
                gotoxy(20,2); printf("CAPRICORNIUS EL CIELO 750ML");
                gotoxy(60,2); printf("  Precio: 348.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCIV=stockXCIV-unidad;
                if(stockXCIV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCIV=stockXCIV+unidad;
                if(stockXCIV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCIV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("CAPRICORNIUS EL CIELO 750ML");
                gotoxy(60,2); printf("  Precio: 348.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCIV);
                x=stockXCIV*282;

                stockXCIV=stockXCIV-stockXCIV;
                system("cls");
                gotoxy(20,2); printf("CAPRICORNIUS EL CIELO 750ML");
                gotoxy(60,2); printf("  Precio: 348.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*348;
                system("cls");
                gotoxy(20,2); printf("CAPRICORNIUS EL CIELO 750ML");
                gotoxy(60,2); printf("  Precio: 348.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCIV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

          }
          break;
             case 3:
            printf("VINO ROSADO");
            printf("\t\n1.- EMINA ROSADO 750ML");
            printf("\t\n2.- LOS VASCOS ROSADO 750ML");
            printf("\t\n3.- ALIWEN UNDURRAGA 750ML");
            printf("\t\n4.- CABERNET SAUVIGON ABDED 750ML");
            printf("\t\n5.- CANALS NUBIONA 750ML");
            printf("\t\n6.- Regresar");
            printf("\t\n\nSeleccione la opcion deseada: ");
            scanf("%d",&tipo1);
            switch(tipo1){
              case 1:
                gotoxy(20,2); printf("EMINA ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCV);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCV);
                stock96();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCV);
                gotoxy(20,2); printf("EMINA ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCV=stockXCV-unidad;
                if(stockXCV < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCV=stockXCV+unidad;
                if(stockXCV > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCV);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("EMINA ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCV);
                x=stockXCV*282;

                stockXCV=stockXCV-stockXCV;
                system("cls");
                gotoxy(20,2); printf("EMINA ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*189;
                system("cls");
                gotoxy(20,2); printf("EMINA ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCV);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 2:
                gotoxy(20,2); printf("LOS VASCOS ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCVI);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCVI);
                stock97();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCVI);
                gotoxy(20,2); printf("LOS VASCOS ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCVI=stockXCVI-unidad;
                if(stockXCVI < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCVI=stockXCVI+unidad;
                if(stockXCVI > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCVI);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("LOS VASCOS ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVI);
                x=stockXCVI*282;

                stockXCVI=stockXCVI-stockXCVI;
                system("cls");
                gotoxy(20,2); printf("LOS VASCOS ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*189;
                system("cls");
                gotoxy(20,2); printf("LOS VASCOS ROSADO 750ML");
                gotoxy(60,2); printf("  Precio: 189.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVI);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 3:
                gotoxy(20,2); printf("ALIWEN UNDURRAGA 750ML");
                gotoxy(60,2); printf("  Precio: 209.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCVII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCVII);
                stock98();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCVII);
                gotoxy(20,2); printf("ALIWEN UNDURRAGA 750ML");
                gotoxy(60,2); printf("  Precio: 209.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCVII=stockXCVII-unidad;
                if(stockXCVII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCVII=stockXCVII+unidad;
                if(stockXCVII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCVII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("ALIWEN UNDURRAGA 750ML");
                gotoxy(60,2); printf("  Precio: 209.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVII);
                x=stockXCVII*282;

                stockXCVII=stockXCVII-stockXCVII;
                system("cls");
                gotoxy(20,2); printf("ALIWEN UNDURRAGA 750ML");
                gotoxy(60,2); printf("  Precio: 209.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*209;
                system("cls");
                gotoxy(20,2); printf("ALIWEN UNDURRAGA 750ML");
                gotoxy(60,2); printf("  Precio: 209.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 4:
                gotoxy(20,2); printf("CABERNET SAUVIGON ABDED 750ML");
                gotoxy(60,2); printf("  Precio: 119.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCVIII);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCVIII);
                stock69();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCVIII);
                gotoxy(20,2); printf("CABERNET SAUVIGON ABDED 750ML");
                gotoxy(60,2); printf("  Precio: 119.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCVIII=stockXCVIII-unidad;
                if(stockXCVIII < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCVIII=stockXCVIII+unidad;
                if(stockXCVIII > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCVIII);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("CABERNET SAUVIGON ABDED 750ML");
                gotoxy(60,2); printf("  Precio: 119.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVIII);
                x=stockXCVIII*282;

                stockXCVIII=stockXCVIII-stockXCVIII;
                system("cls");
                gotoxy(20,2); printf("CABERNET SAUVIGON ABDED 750ML");
                gotoxy(60,2); printf("  Precio: 119.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*119;
                system("cls");
                gotoxy(20,2); printf("CABERNET SAUVIGON ABDED 750ML");
                gotoxy(60,2); printf("  Precio: 119.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCVIII);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 5:
                gotoxy(20,2); printf("CANALS NUBIONA 750ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(60,3); printf("  Stock: %d",stockXCIX);
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCIX);
                stock100();
                system("cls");
                gotoxy(60,3); printf("  Stock: %d",stockXCIX);
                gotoxy(20,2); printf("CANALS NUBIONA 750ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(10,5); printf("Â¿Cuantas unidades desea comprar?: ");
                scanf("%d",&unidad);

                stockXCIX=stockXCIX-unidad;
                if(stockXCIX < 0){
                   gotoxy(10,7); printf("No hay unidades suficientes.");
                    stockXCIX=stockXCIX+unidad;
                if(stockXCIX > 0){
                    gotoxy(10,8); printf("Solo quedan disponibles %d unidades",stockXCIX);
                    gotoxy(10,9); printf("Â¿Le gustaria comprarlas? S/N :  ");
                    scanf("%s",&resp1);

                    if(resp1 == 'S' || resp1 == 's'){

                system("cls");
                gotoxy(20,2); printf("CANALS NUBIONA 750ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCIX);
                x=stockXCIX*282;

                stockXCIX=stockXCIX-stockXCIX;
                system("cls");
                gotoxy(20,2); printf("CANALS NUBIONA 750ML ");
                gotoxy(60,2); printf("  Precio: 127.00 ");
                gotoxy(60,3);printf("  Stock: %d ",stockXCIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d ",x);
                    }
                   else

                       k=2;

                }
                }
                else
                {
                x=unidad*127;
                system("cls");
                gotoxy(20,2); printf("CANALS NUBIONA 750ML");
                gotoxy(60,2); printf("  Precio: 127.00");
                gotoxy(60,3);printf("  Stock: %d",stockXCIX);
                gotoxy(10,7);printf("AÃ±adio a su cuenta: $%d",x);
                }
                suma=suma+x;
                {
                    getchar();
                    getchar();
                }
                break;
              case 6:
                regresar();
              break;

              default:
                printf("La opcion ingresada no es valida.");

          }
          break;
}
}


int salir(){
     system("cls");
     gotoxy(20,10); printf("Hasta pronto");
     gotoxy(20,11); printf("Sus ganancia de hoy fue de: %d",ventadia);
     getchar();
     getchar();
     exit(1);
}


int regresar(){
    k=2;
}

/*
         STOCK TEQUILA BLANCO
                               */

//stock tequila alacran
int stock1(){


       if(stock <= 0){
          printf("\nEl producto esta agotado");
          printf(" \nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stock=stock+aum;

        }
       }
        else
{
            if(stock > 0 ){
             k=2;
            }
}

}

//stock tequila capote frambuesa granada
int stock2(){


       if(stockI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockI=stockI+aum;

        }
       }
        else
{
            if(stockI > 0 ){
             k=2;
            }
}

}

//stock tequila capote zarzamora
int stock3(){


       if(stockII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockII=stockII+aum;

        }
       }
        else
{
            if(stockII > 0 ){
             k=2;
            }
}

}

//stock tequila clasico blanco
int stock4(){


       if(stockIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockIII=stockIII+aum;

        }
       }
        else
{
            if(stockIII > 0 ){
             k=2;
            }
}

}

//stock tequila herradura
int stock5(){


       if(stockIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockIV=stockIV+aum;

        }
       }
        else
{
            if(stockIV > 0 ){
             k=2;
            }
}

}

/*
     STOCK TEQUILA REPOSADO
                             */

//stock TEQUILA EL CAPRICHO MADURO
int stock6(){


       if(stockV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockV=stockV+aum;

        }
       }
        else
{
            if(stockV > 0 ){
             k=2;
            }
}
}

//stock TEQUILA SAUZA 100 AÃ‘OS AZUL
int stock7(){


       if(stockVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockVI=stockVI+aum;

        }
       }
        else
{
            if(stockVI > 0 ){
             k=2;
            }
}
}

//stock TEQUILA 1800 REPOSADO
int stock8(){


       if(stockVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockVII=stockVII+aum;

        }
       }
        else
{
            if(stockVII > 0 ){
             k=2;
            }
}
}

//stock TEQUILA CABRITO REPOSADO
int stock9(){


       if(stockVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockVIII=stockVIII+aum;

        }
       }
        else
{
            if(stockVIII > 0 ){
             k=2;
            }
}
}

//stock TEQUILA CENTENARIO REPOSADO 700ML
int stock10(){


       if(stockIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockIX=stockIX+aum;

        }
       }
        else
{
            if(stockIX > 0 ){
             k=2;
            }
}
}

/*
      TEQUILA AÃ‘EJO
                      */

//stock TEQUILA CAPOTE AÃ‘EJO
int stock11(){


       if(stockX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockX=stockX+aum;

        }
       }
        else
{
            if(stockX > 0 ){
             k=2;
            }
}
}

//stock TEQUILA 1800 RESERVA ANTIGUA(AÃ‘EJO)
int stock12(){


       if(stockXI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXI=stockXI+aum;

        }
       }
        else
{
            if(stockXI > 0 ){
             k=2;
            }
}
}

//stock TEQUILA 30-30 AÃ‘EJO
int stock13(){


       if(stockXII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXII=stockXII+aum;

        }
       }
        else
{
            if(stockXII > 0 ){
             k=2;
            }
}
}

//stock TEQUILA 7 LEGUAS AÃ‘EJO 750ML
int stock14(){


       if(stockXIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXIII=stockXIII+aum;

        }
       }
        else
{
            if(stockXIII > 0 ){
             k=2;
            }
}
}

//stock TEQUILA CAZADORES AÃ‘EJO 750ML
int stock15(){


       if(stockXIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXIV=stockXIV+aum;

        }
       }
        else
{
            if(stockXIV > 0 ){
             k=2;
            }
}
}

/*
      TEQUILA EXTRA AÃ‘EJO
                      */

//stock TEQUILA 1800 MILENIO EXTRA AÃ‘EJO 750ML
int stock16(){


       if(stockXV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXV=stockXV+aum;

        }
       }
        else
{
            if(stockXV > 0 ){
             k=2;
            }
}
}

//stock TEQUILA 7 LEGUAS EXTRA AÃ‘EJO SIMGLE BARREL 750ML
int stock17(){


       if(stockXVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXVI=stockXVI+aum;

        }
       }
        else
{
            if(stockXVI > 0 ){
             k=2;
            }
}
}

//stock TEQUILA CUERVO RESERVA DE LA FAMILIA 2.5LT
int stock18(){


       if(stockXVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXVII=stockXVII+aum;

        }
       }
        else
{
            if(stockXVII > 0 ){
             k=2;
            }
}
}

//stock TEQUILA ALACRAN EXTRA AÃ‘EJO 750ML
int stock19(){


       if(stockXVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXVIII=stockXVIII+aum;

        }
       }
        else
{
            if(stockXVIII > 0 ){
             k=2;
            }
}
}

//stock TEQUILA 1800 COLECCION BOSCO SODI 750ML
int stock20(){


       if(stockXIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXIX=stockXIX+aum;

        }
       }
        else
{
            if(stockXIX > 0 ){
             k=2;
            }
}
}

/*
      WHISKY  "MALTAS"
                         */

//stock WHISKY ABERFELDY 750ML
int stock21(){


       if(stockXX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXX=stockXX+aum;

        }
       }
        else
{
            if(stockXX > 0 ){
             k=2;
            }
}
}

//stock WHISKY ARDMORE 750ML
int stock22(){


       if(stockXXI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXI=stockXXI+aum;

        }
       }
        else
{
            if(stockXXI > 0 ){
             k=2;
            }
}
}

//stock WHISKY ARDBEG 10 YEAR OLD MALT 750ML
int stock23(){


       if(stockXXII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXII=stockXXII+aum;

        }
       }
        else
{
            if(stockXXII > 0 ){
             k=2;
            }
}
}

//stock WHISKY BALVENIE 12 AÃ‘OS 750ML
int stock24(){


       if(stockXXIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXIII=stockXXIII+aum;

        }
       }
        else
{
            if(stockXXIII > 0 ){
             k=2;
            }
}
}

//stock WHISKY BALVENIE 17 DOUBLEWOOD 750ML
int stock25(){


       if(stockXXIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXIV=stockXXIV+aum;

        }
       }
        else
{
            if(stockXXIV > 0 ){
             k=2;
            }
}
}

/*
      WHISKY  "BLENDED"
                         */

//stock WHISKY CHARLES NUGENT 750ML
int stock26(){


       if(stockXXV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXV=stockXXV+aum;

        }
       }
        else
{
            if(stockXXV > 0 ){
             k=2;
            }
}
}

//stock WHISKY BALLENTINES 12 AÃ‘OS 750ML
int stock27(){


       if(stockXXVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXVI=stockXXVI+aum;

        }
       }
        else
{
            if(stockXXVI > 0 ){
             k=2;
            }
}
}

//stock WHISKY BALLENTINES 21 AÃ‘OS 700ML
int stock28(){


       if(stockXXVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXVII=stockXXVII+aum;

        }
       }
        else
{
            if(stockXXVII > 0 ){
             k=2;
            }
}
}

//stock WHISKY BALLENTINES 30 AÃ‘OS 700ML
int stock29(){


       if(stockXXVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXVIII=stockXXVIII+aum;

        }
       }
        else
{
            if(stockXXVIII > 0 ){
             k=2;
            }
}
}

//stock WHISKY WALKER ODYSSEY 750ML
int stock30(){


       if(stockXXIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXIX=stockXXIX+aum;

        }
       }
        else
{
            if(stockXXIX > 0 ){
             k=2;
            }
}
}

/*
      WHISKY  "BOURBON"
                         */

//stock WHISKY WOODFORD RESERVA 750ML
int stock31(){


       if(stockXXX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXX=stockXXX+aum;

        }
       }
        else
{
            if(stockXXX > 0 ){
             k=2;
            }
}
}

//stock WHISKY EARLY TIMES 1LT
int stock32(){


       if(stockXXXI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXI=stockXXXI+aum;

        }
       }
        else
{
            if(stockXXXI > 0 ){
             k=2;
            }
}
}

//stock WHISKY EARLY TIMES 750ML
int stock33(){


       if(stockXXXII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXII=stockXXXII+aum;

        }
       }
        else
{
            if(stockXXXII > 0 ){
             k=2;
            }
}
}

//stock WHISKY JIM BEAM NEGRO 8 AÃ‘OS 750ML
int stock34(){


       if(stockXXXIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXIII=stockXXXIII+aum;

        }
       }
        else
{
            if(stockXXXIII > 0 ){
             k=2;
            }
}
}

//stock WHISKY WID TURKEY 700ML
int stock35(){


       if(stockXXXIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXIV=stockXXXIV+aum;

        }
       }
        else
{
            if(stockXXXIV > 0 ){
             k=2;
            }
}
}

/*
      WHISKY  "TENNESSE"
                         */

//stock WHISKY ENTLEMAN JACKS 750ML
int stock36(){


       if(stockXXXV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXV=stockXXXV+aum;

        }
       }
        else
{
            if(stockXXXV > 0 ){
             k=2;
            }
}
}

//stock WHISKY JACK DANIEL'S 1750ML
int stock37(){


       if(stockXXXVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXVI=stockXXXVI+aum;

        }
       }
        else
{
            if(stockXXXVI > 0 ){
             k=2;
            }
}
}

//stock WHISKY JACK DANIEL'S 1LT
int stock38(){


       if(stockXXXVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXVII=stockXXXVII+aum;

        }
       }
        else
{
            if(stockXXXVII > 0 ){
             k=2;
            }
}
}

//stock WHISKY JACK DANIEL'S HONEY 700ML
int stock39(){


       if(stockXXXVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXVIII=stockXXXVIII+aum;

        }
       }
        else
{
            if(stockXXXVIII > 0 ){
             k=2;
            }
}
}

//stock WHISKY JACK DANIEL'S 700ML
int stock40(){


       if(stockXXXIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXIX=stockXXXIX+aum;

        }
       }
        else
{
            if(stockXXXIX > 0 ){
             k=2;
            }
}
}

/*
         COGNAC
                         */

//stock COGNAC COURVOISIER 12A 750ML
int stock41(){


       if(stockXXXX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXX=stockXXXX+aum;

        }
       }
        else
{
            if(stockXXXX > 0 ){
             k=2;
            }
}
}

//stock COGNAC REMYM X O GOLD EDICION LIMITADA 700ML
int stock42(){


       if(stockXXXXI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXXI=stockXXXXI+aum;

        }
       }
        else
{
            if(stockXXXXI > 0 ){
             k=2;
            }
}
}

//stock COGNAC BISCUIT X O 700ML
int stock43(){


       if(stockXXXXII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXXII=stockXXXXII+aum;

        }
       }
        else
{
            if(stockXXXXII > 0 ){
             k=2;
            }
}
}

//stock COGNAC BISCUIT PASSION 750ML
int stock44(){


       if(stockXXXXIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXXIII=stockXXXXIII+aum;

        }
       }
        else
{
            if(stockXXXXIII > 0 ){
             k=2;
            }
}
}

//stock COGNAC CAMUS EXTRA ELEGANCE 700ML
int stock45(){


       if(stockXXXXIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXXIV=stockXXXXIV+aum;

        }
       }
        else
{
            if(stockXXXXIV > 0 ){
             k=2;
            }
}
}

/*
           VODKA
                         */

//stock VODKA ABSOLUT 100 1LT
int stock46(){


       if(stockXXXXV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXXV=stockXXXXV+aum;

        }
       }
        else
{
            if(stockXXXXV > 0 ){
             k=2;
            }
}
}

//stock VODKA ABSOLUT 100 750ML
int stock47(){


       if(stockXXXXVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXXVI=stockXXXXVI+aum;

        }
       }
        else
{
            if(stockXXXXVI > 0 ){
             k=2;
            }
}
}

//stock VODKA ABSOLUT AZUL 1LT
int stock48(){


       if(stockXXXXVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXXVII=stockXXXXVII+aum;

        }
       }
        else
{
            if(stockXXXXVII > 0 ){
             k=2;
            }
}
}

//stock VODKA ABSOLUT AZUL 750ML
int stock49(){


       if(stockXXXXVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXXXXVIII=stockXXXXVIII+aum;

        }
       }
        else
{
            if(stockXXXXVIII > 0 ){
             k=2;
            }
}
}

//stock VODKA ELYX NUEVA EDICION 4.5LT
int stock50(){


       if(stockXLIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXLIX=stockXLIX+aum;

        }
       }
        else
{
            if(stockXLIX > 0 ){
             k=2;
            }
}
}

/*
         MEZCAL
                         */

//stock JARAL DE BERNU 750ML
int stock51(){


       if(stockL <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockL=stockL+aum;

        }
       }
        else
{
            if(stockL > 0 ){
             k=2;
            }
}
}

//stock 33 REPOSADO 750ML
int stock52(){


       if(stockLI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLI=stockLI+aum;

        }
       }
        else
{
            if(stockLI > 0 ){
             k=2;
            }
}
}

//stock 400 CONEJOS REPOSADO 750ML
int stock53(){


       if(stockLII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLII=stockLII+aum;

        }
       }
        else
{
            if(stockLII > 0 ){
             k=2;
            }
}
}

//stock AGAVE CRIOLLO NAYAA 750ML
int stock54(){


       if(stockLIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLIII=stockLIII+aum;

        }
       }
        else
{
            if(stockLIII > 0 ){
             k=2;
            }
}
}

//stock AGUA BENDITA JOVEN 750ML
int stock55(){


       if(stockLIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLIV=stockLIV+aum;

        }
       }
        else
{
            if(stockLIV > 0 ){
             k=2;
            }
}
}

/*
         RON
                         */

//stock RON ANGOSTURA BITTER NARANJA 100ML
int stock56(){


       if(stockLV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLV=stockLV+aum;

        }
       }
        else
{
            if(stockLV > 0 ){
             k=2;
            }
}
}

//stock RON 10 CANE RUM 700ML
int stock57(){


       if(stockLVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLVI=stockLVI+aum;

        }
       }
        else
{
            if(stockLVI > 0 ){
             k=2;
            }
}
}

//stock RON ABUELO AÃ‘EJO 1LT
int stock58(){


       if(stockLVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLVII=stockLVII+aum;

        }
       }
        else
{
            if(stockLVII > 0 ){
             k=2;
            }
}
}

//stock RON ABUELO CENTURIA 750ML
int stock59(){


       if(stockLVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLVIII=stockLVIII+aum;

        }
       }
        else
{
            if(stockLVIII > 0 ){
             k=2;
            }
}
}

//stock RON ABUELO XV NAPOLEON 750ML
int stock60(){


       if(stockLIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLIX=stockLIX+aum;

        }
       }
        else
{
            if(stockLIX > 0 ){
             k=2;
            }
}
}

/*
         GINEBRA
                         */

//stock ELEPHANT GIN 500ML
int stock61(){


       if(stockLX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLX=stockLX+aum;

        }
       }
        else
{
            if(stockLX > 0 ){
             k=2;
            }
}
}

//stock GINEBRA WEMBLEY 700ML
int stock62(){


       if(stockLXI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXI=stockLXI+aum;

        }
       }
        else
{
            if(stockLXI > 0 ){
             k=2;
            }
}
}

//stock GINEBRA BEEFEATER 24 700ML
int stock63(){


       if(stockLXII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXII=stockLXII+aum;

        }
       }
        else
{
            if(stockLXII > 0 ){
             k=2;
            }
}
}

//stock GINEBRA BULLDOG 750ML
int stock64(){


       if(stockLXIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXIII=stockLXIII+aum;

        }
       }
        else
{
            if(stockLXIII > 0 ){
             k=2;
            }
}
}

//stock GINEBRA HENDNEKS 750ML
int stock65(){


       if(stockLXIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXIV=stockLXIV+aum;

        }
       }
        else
{
            if(stockLXIV > 0 ){
             k=2;
            }
}
}

/*
         BRANDY
                         */
//stock BRANDY CARDENAL DE MENDOZA 750ML
int stock66(){


       if(stockLXV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXV=stockLXV+aum;

        }
       }
        else
{
            if(stockLXV > 0 ){
             k=2;
            }
}
}

//stock BRANDY AZTECA DE ORO 3LT
int stock67(){


       if(stockLXVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXVI=stockLXVI+aum;

        }
       }
        else
{
            if(stockLXVI > 0 ){
             k=2;
            }
}
}

//stock BRANDY AZTECA DE ORO ANIVERSARIO 750ML
int stock68(){


       if(stockLXVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXVII=stockLXVII+aum;

        }
       }
        else
{
            if(stockLXVII > 0 ){
             k=2;
            }
}
}

//stock BRANDY TORRES 10 700ML
int stock69(){


       if(stockLXVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXVIII=stockLXVIII+aum;

        }
       }
        else
{
            if(stockLXVIII > 0 ){
             k=2;
            }
}
}

//stock BRANDY TORRES 20 700ML
int stock70(){


       if(stockLXIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXIX=stockLXIX+aum;

        }
       }
        else
{
            if(stockLXIX > 0 ){
             k=2;
            }
}
}

/*
         JEREZ
                         */

//stock JEREZ DRY SACK MEDIUM 750ML
int stock71(){


       if(stockLXX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXX=stockLXX+aum;

        }
       }
        else
{
            if(stockLXX > 0 ){
             k=2;
            }
}
}

//stock JEREZ FINO CLASICO FDO 750ML
int stock72(){


       if(stockLXXI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXI=stockLXXI+aum;

        }
       }
        else
{
            if(stockLXXII > 0 ){
             k=2;
            }
}
}

//stock JEREZ FINO LA INA 750ML
int stock73(){


       if(stockLXXII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXII=stockLXXII+aum;

        }
       }
        else
{
            if(stockLXXII > 0 ){
             k=2;
            }
}
}

//stock JEREZ MOSCATEL AMBROSIA 750ML
int stock74(){


       if(stockLXXIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXIII=stockLXXIII+aum;

        }
       }
        else
{
            if(stockLXXIII > 0 ){
             k=2;
            }
}
}

//stock JEREZ PEDRO XIMENES CARDENAL 250ML
int stock75(){


       if(stockLXXIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXIV=stockLXXIV+aum;

        }
       }
        else
{
            if(stockLXXIV > 0 ){
             k=2;
            }
}
}

/*
         CHAMPAGNE
                         */

//stock CHAMPAGNE POMERY BRUT ROYAL 750ML
int stock76(){


       if(stockLXXV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXV=stockLXXV+aum;

        }
       }
        else
{
            if(stockLXXV > 0 ){
             k=2;
            }
}
}

//stock CHAMPAGNE RUINART BRUT ROSE COFFRED 750ML
int stock77(){


       if(stockLXXVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXVI=stockLXXVI+aum;

        }
       }
        else
{
            if(stockLXXVI > 0 ){
             k=2;
            }
}
}

//stock CHAMPAGNE BOLLINGER LA GRANDE ANNEE 750ML
int stock78(){


       if(stockLXXVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXVII=stockLXXVII+aum;

        }
       }
        else
{
            if(stockLXXVII > 0 ){
             k=2;
            }
}
}

//stock CHAMPAGNE BOLLINGER ROSE 750ML
int stock79(){


       if(stockLXXVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXVIII=stockLXXVIII+aum;

        }
       }
        else
{
            if(stockLXXVIII > 0 ){
             k=2;
            }
}
}

//stock CHAMPAGNE CRISTAL MILESIME 04 750ML
int stock80(){


       if(stockLXXIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXIX=stockLXXIX+aum;

        }
       }
        else
{
            if(stockLXXIX > 0 ){
             k=2;
            }
}
}

/*
         LICOR
                         */

//stock ANIS ASTRORIANA 1LT
int stock81(){


       if(stockLXXX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXX=stockLXXX+aum;

        }
       }
        else
{
            if(stockLXXX > 0 ){
             k=2;
            }
}
}

//stock ANIS DE CAZALLA 1LT
int stock82(){


       if(stockLXXXI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXI=stockLXXXI+aum;

        }
       }
        else
{
            if(stockLXXXI > 0 ){
             k=2;
            }
}
}

//stock JARABE GRANADINA COLLADO 1LT
int stock83(){


       if(stockLXXXII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXII=stockLXXXII+aum;

        }
       }
        else
{
            if(stockLXXXII > 0 ){
             k=2;
            }
}
}

//stock KALANI MIYOLOGY 750ML
int stock84(){


       if(stockLXXXIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXIII=stockLXXXIII+aum;

        }
       }
        else
{
            if(stockLXXXIII > 0 ){
             k=2;
            }
}
}

//stock ORUJO TERRAS DO OGARRON HIERBAS 700ML
int stock85(){


       if(stockLXXXIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXIV=stockLXXXIV+aum;

        }
       }
        else
{
            if(stockLXXXIV > 0 ){
             k=2;
            }
}
}

/*
         VINO TINTO
                         */

//stock VINO TINTO 93&60 RVA VIÃ‘A 750ML
int stock86(){


       if(stockLXXXV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXV=stockLXXXV+aum;

        }
       }
        else
{
            if(stockLXXXV > 0 ){
             k=2;
            }
}
}

//stock VINO TINTO 3V CASA MADERO 750ML
int stock87(){


       if(stockLXXXVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXVI=stockLXXXVI+aum;

        }
       }
        else
{
            if(stockLXXXVI > 0 ){
             k=2;
            }
}
}

//stock VINO TINTO AKAXI 750ML
int stock88(){


       if(stockLXXXVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXVII=stockLXXXVII+aum;

        }
       }
        else
{
            if(stockLXXXVII > 0 ){
             k=2;
            }
}
}

//stock VINO TINTO ALA ROTA 750ML
int stock89(){


       if(stockLXXXVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXVIII=stockLXXXVIII+aum;

        }
       }
        else
{
            if(stockLXXXVIII > 0 ){
             k=2;
            }
}
}

//stock VINO TINTO BALCHE ORO PREMIUM 750ML
int stock90(){


       if(stockLXXXIX <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockLXXXIX=stockLXXXIX+aum;

        }
       }
        else
{
            if(stockLXXXIX > 0 ){
             k=2;
            }
}
}

/*
         VINO BLANCO
                         */

//stock BLANC DE BANCS DON ANGEL 750ML
int stock91(){


       if(stockXC <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXC=stockXC+aum;

        }
       }
        else
{
            if(stockXC > 0 ){
             k=2;
            }
}
}

//stock BLANC DE BANCS XA DOMECO 375ML
int stock92(){


       if(stockXCI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCI=stockXCI+aum;

        }
       }
        else
{
            if(stockXCI > 0 ){
             k=2;
            }
}
}

//stock BLANCA MEXICO 750ML
int stock93(){


       if(stockXCII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCII=stockXCII+aum;

        }
       }
        else
{
            if(stockXCII > 0 ){
             k=2;
            }
}
}

//stock VINO BLANCO CALEFIA 750ML
int stock94(){


       if(stockXCIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCIII=stockXCIII+aum;

        }
       }
        else
{
            if(stockXCIII > 0 ){
             k=2;
            }
}
}

//stock CAPRICORNIUS EL CIELO 750ML
int stock95(){


       if(stockXCIV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCIV=stockXCIV+aum;

        }
       }
        else
{
            if(stockXCIV > 0 ){
             k=2;
            }
}
}

/*
         VINO ROSADO
                         */

//stock EMINA ROSADO 750ML
int stock96(){


       if(stockXCV <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCV=stockXCV+aum;

        }
       }
        else
{
            if(stockXCV > 0 ){
             k=2;
            }
}
}

//stock LOS VASCOS ROSADO 750ML
int stock97(){


       if(stockXCVI <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCVI=stockXCVI+aum;

        }
       }
        else
{
            if(stockXCVI > 0 ){
             k=2;
            }
}
}

//stock ALIWEN UNDURRAGA 750ML
int stock98(){


       if(stockXCVII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCVII=stockXCVII+aum;

        }
       }
        else
{
            if(stockXCVII > 0 ){
             k=2;
            }
}
}

//stock CABERNET SAUVIGON ABDED 750ML
int stock99(){


       if(stockXCVIII <= 0){
          printf("\nEl producto esta agotado");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCVIII=stockXCVIII+aum;

        }
       }
        else
{
            if(stockXCVIII > 0 ){
             k=2;
            }
}
}

//stock CANALS NUBIONA 750ML
int stock100(){


       if(stockXCIX <= 0){
          printf("\nEl producto esta agotado ");
          printf("\nÂ¿Desea surtir el producto?  Si=s No=n ");
          surtirp = getch();
        if( surtirp == 's' || surtirp == 'S'){
            printf("\nÂ¿Cuantas unidades desea surtir?\n");
            scanf("%d",&aum);
            stockXCIX=stockXCIX+aum;

        }
       }
        else
{
            if(stockXCIX > 0 ){
             k=2;
            }
}
}

int pagar(){
    system("cls");
    printf("Su Total a pagar es de: %d",suma);
    if(suma>= 1000){
        descuento=(suma*10)/100;
        printf("\nSu descuento es de: %d",descuento);
        total=suma-descuento;
        printf("\nTotal a pagar incluyendo el descuento: %d",total);
        suma=0;
    }
    printf("\n 1.- Aceptar ");
    printf("\n 2.- Cancelar");
    printf("\nSeleccione una opcion: ");
    scanf("%d",&opcpago);
    switch(opcpago){
case 1:
    system("cls");
    system("color 0A");
    gotoxy(20,10); printf("MUCHAS GRACIAS POR SU COMPRA");
    gotoxy(20,11); printf("VINOS IMPERIAL AGRADECE SU PREFERENCIA");
    ventadia=ventadia+total+suma;
    suma=0;
    total=0;

    break;
case 2:
    system("cls");
    system("color 0C");
    gotoxy(20,10); printf("SU COMPRA SE A CANCELADO");
    gotoxy(20,11); printf("Si tuvo algun inconveniente al realizar su pedido");
    gotoxy(20,12); printf("Comuniquese al correo ventasimperial@yopmail.com");
    suma=0;
    total=0;
    break;
    }
    getchar();
    getchar();
   k=2;
}

int progressbar()
{
    system("color 0A");
    gotoxy(25,20); cout << "VINOS Y LICORES LA IMPERIAL";
    gotoxy(4,10); cout << "EN LA COMPRA DE DE 1000 PESOS O MAS SE LE APLICARA UN 10% DE DESCUENTO";
int segundos=5;
for(int i=0; i<=21; i++)
cout << "\n";
cout << "\t\t\t\t CARGANDO...\n";
for(int i=0; i<=79; i++)
cout << "_";
for(int i=0; i<=79; i++)
{
cout<<char(219);
Sleep(segundos*1000/80);
}
cout<<"\nCompletado!";
getch();
}
