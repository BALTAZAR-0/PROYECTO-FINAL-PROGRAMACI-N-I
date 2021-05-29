#include <iostream>
#include <fstream>
#include <stdlib.h>
#include<windows.h>
#include <iomanip>
#include <conio.h> 
#include <vector>
#include <cstdlib>
#include <string>


#define ENTER 13 
#define BACKSPACE 8

#define MAX 800
using namespace std;
struct Sistema{
	char placa[50];
	int codigo;
	char marca[50];
	char modelo[50];
	char cilindrada[50];
	char velocidad[50];
	char traccion[50];
	char gasolina[50];
	char anticipo[50];	
	string cliente;
	char tel[50];
	char dpi[50];
};


void gotoxy(int x,int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}


void registrarvehi(), vertodo(), buscarvehiculo(), eliminarvehiculo();


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
main(){
	void mostrartexto();
	vector<string> usuarios;
	vector<string> claves;
 
 	usuarios.push_back("jaime");
	usuarios.push_back("jonathan");
	usuarios.push_back("richard");
	usuarios.push_back("rodas");
	claves.push_back("45986051");
	claves.push_back("49020033");
	claves.push_back("48919736");
	claves.push_back("53202284");


	string usuario, password;
 
	int contador = 0;
	bool ingresa = false;
 
	do {
		system("cls");
		
	cout<<("       ------------      ");cout<<("\t      -----   --------------  "); cout<<("\t  _________________________ ");cout<<("\t       o  o            \n");
	cout<<("      |           |     ");cout<<("\t ___ / °   |__/_o_o_o_o_o_o |  ");	cout<<("\t |  _  _____------Bus------|");cout<<("\t      /__/     _____  \n");
	cout<<(" -----   °    °    ----- ");cout<<("\t/  truck                  /   "); cout<<("\t | |_| |   | ______________|");cout<<("\t      //______/    /  \n");
	cout<<("´--@---------------@---´ ");cout<<("\t`--@---@----------@---@---´   "); cout<<("\t |     |  o| |___|____|____|");cout<<("\t     //___________/  \n");
	cout<<("                                                                "); 	cout<<(" |__   |___|            ___|_");cout<<("        @           @   \n");
	cout<<("                                                                  ");  cout<<("  O---O----------O---O    ");
		
		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		cout << "\n\n\n\n\t\t\t\t   I N G R E S E   D A T O S   S O L I C I T A D O S"<< endl;
		cout << "\t\t\t  -------------------------------------------------------------------" << endl;
		cout << "\n\n\n\t\tINGRESE USUARIO : ";
		getline(cin, usuario);
		
		char caracter;
 
		cout <<"\n\t\tINGRESE PASSWORD: ";
		caracter = getch();
 
		password = "";
		
		while (caracter != ENTER) {
 
			if (caracter != BACKSPACE) {
				password.push_back(caracter);
				cout << "*";
 
			} else {
				if (password.length() > 0) {
					cout << "\b \b";
					password = password.substr(0, password.length() - 1);
				}
			}
 
			caracter = getch();
		}
 
		for (int i = 0; i < usuarios.size(); i++) {
			if (usuarios[i] == usuario && claves[i] == password) {
				ingresa = true;
				break;
			}
		}
 
		if (!ingresa) {
			cout << "\n\n\n\n\t\tINGRESE DATOS CORRECTAMENTE" << endl;
			cin.get();
			contador++;
		}
 
	} while (ingresa == false && contador < 3);
 
	if (ingresa == false) {
		cout << "\n\tERROR EN INGRESO,CERRADO SISTEMA AUTOMATICAMENTE...." << endl;
	} else {

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
system("cls");
	string mensaje = "....BIENVENIDO EQUIPO RAYO MCQUEEN.....";
	cout << endl;
	cout << endl;
	cout << "                                      ";
	for (int i = 0; i < mensaje.length(); i++)
	{
		cout << mensaje[i];
		Sleep(60);
	}
	int opc;
system("cls");
	do{

system("cls");
cout<<"\n\t\t\t******************************************************************";
cout<<"\n\t\t\t  C O N T R O L  D E  M O V I M I E N T O  A U T O M O V I L E S";
cout<<"\n\t\t\t\t\t\t       RAYO MCQUEEN";
cout<<"\n\t\t\t******************************************************************\n";
        cout<<"\n\t\t  -------------------------------\n";
        cout<<"\n\t\t[1]. RESERVACION DE AUTOMOVILES\n";
        cout<<"\t\t[2]. SALIR DEL SISTEMA\n";
        cout<<"\n\t\tINGRESE OPCION A PROCESAR: [ ]\b\b";
        cout<<"\n\t\t  -------------------------------\n";
        gotoxy (44,11); cin>>opc;
		cin.ignore();

switch(opc){

//////////////////////////////////////////////////////////////////////////////////////
case 1:{
int opc;
system("cls");
do{
system("cls");
cout<<"\n\t\t\t******************************************************************";
cout<<"\n\t\t\t  C O N T R O L  D E  M O V I M I E N T O  A U T O M O V I L E S";
cout<<"\n\t\t\t\t\t\t       RAYO MCQUEEN";
cout<<"\n\t\t\t******************************************************************\n";
        cout<<"\n\t\t  -------------------------------\n";
        cout<<"\n\t\t[1]. REGISTRAR NUEVO AUTOMOVIL\n";
        cout<<"\t\t[2]. MOSTRAR TODOS LOS AUTOMOVILES REGISTRADOS\n";
        cout<<"\t\t[3]. BUSCAR AUTOMOVIL DENTRO DEL SISTEMA \n";
        cout<<"\t\t[4]. ELIMINAR RESERVACION \n";
        cout<<"\t\t[5]. REGRESAR AL SISTEMA PRINCIPAL\n";
        cout<<"\n\t\tINGRESE OPCION A PROCESAR: [ ]\b\b";
        cout<<"\n\t\t  -------------------------------\n";
        gotoxy (44,14); cin>>opc;
		cin.ignore();
	switch(opc){
		case 1:{
		registrarvehi();
		break;
		}
		case 2:{
		vertodo();
			break;
		}
		case 3:{
		buscarvehiculo();
			break;
		}
		case 4:{
		eliminarvehiculo();
			break;
		}
		case 5:{
			system("cls");
	string mensaje = "....REGRESANDO A MENU PRINCIPAL.....";
	cout << endl;
	cout << endl;
	cout << "                                          ";
	for (int i = 0; i < mensaje.length(); i++)
	{
		cout << mensaje[i];
		Sleep(60);
	}
			break;
		
		}

	}
}while(opc!=5);	
		break;
		}
/////////////////////////////////////////////////////////////////////////////////////
	
		
////////////////////////////////////////////////////////////////////////////////////
		case 2:{
		system("cls");
	string mensaje = "....CERRANDO SESION AUTOMATICAMENTE.....";
	cout << endl;
	cout << endl;
	cout << "                                          ";
	for (int i = 0; i < mensaje.length(); i++)
	{
		cout << mensaje[i];
		Sleep(60);
	}
			return main();
		}
	}
}while(opc!=6);
}

 
	
	}

/////////////////////////////////////////////////////////////////////////////////////
void registrarvehi(){

	
	system("cls");
	Sistema vehiculos; 
	ofstream escribir;
	ifstream consulta;
	bool repetido = false;
	int auxcodigo=0;
	consulta.open("McQueen.txt", ios::in);
	escribir.open("McQueen.txt", ios::out | ios::app); 

	if (escribir.is_open() && consulta.is_open() )
	{
			
	gotoxy(40,3);		
	string mensaje = "R E G I S T R A R  A U T O M O V I L";
	cout << endl;
	cout << endl;
	cout << "                                          ";
	for (int i = 0; i < mensaje.length(); i++)
	{
		cout << mensaje[i];
		Sleep(30);
	}
			gotoxy(27,7);
			cout << "FECHA RESERVACION         : ";
			cin >> auxcodigo;


		consulta >> vehiculos.codigo;
		
		while(!consulta.eof())
		{
			consulta >> vehiculos.placa >> vehiculos.marca >> vehiculos.modelo  >> vehiculos.cilindrada >> vehiculos.velocidad>> vehiculos.traccion >> vehiculos.gasolina >> vehiculos.cliente >> vehiculos.dpi >> vehiculos.tel >> vehiculos.anticipo ;

			if(vehiculos.codigo == auxcodigo)
			{

                gotoxy(27, 10);
				cout << "FECHA YA EXISTENTE ->" << auxcodigo << "\tELIJA OTRA FECHA"<<endl;
				repetido = true;

			}
			consulta >> vehiculos.codigo;
		}
		if (repetido == false)
		{
			gotoxy(27,8);
			cout << "No.PLACA DEL AUTOMOVIL    : ";
			cin >> vehiculos.placa;
			fflush(stdin);
			gotoxy(27,9);
			cout << "MARCA DEL AUTOMOVIL       : ";
			cin >> vehiculos.marca;
			fflush(stdin);
			gotoxy(27,10);
			cout << "MODELO DEL AUTOMOVIL      : ";
			cin >> vehiculos.modelo;
			fflush(stdin);
			gotoxy(27,11);
			cout << "CILIND. DEL AUTOMOVIL     : ";
			cin >> vehiculos.cilindrada;
			fflush(stdin);
			gotoxy(27,12);
			cout << "VEL.MAX DEL AUTOMOVIL     : " ;
			cin >> vehiculos.velocidad;
			fflush(stdin);
			gotoxy(27,13);
			cout << "TIP.TRACCION AUTOMOVIL    : ";
			cin >> vehiculos.traccion;
			fflush(stdin);
			gotoxy(27,14);
			cout << "TIP.CUMBUSTI.AUTOMOVIL    : ";
			cin >> vehiculos.gasolina;
			fflush(stdin);
			gotoxy(27,15);
			cout << "NOMBRE DEL CLIENTE        : ";
			getline(cin, vehiculos.cliente);
			cin.ignore();
			gotoxy(27,16);
			cout << "TELEFONO CLIENTE          : ";
			cin >> vehiculos.tel;
			fflush(stdin);	
			gotoxy(27,17);
			cout << "DPI CLIENTE               : ";
			cin >> vehiculos.dpi;
			fflush(stdin);
			
			gotoxy(27,18);
			cout <<"ANTICIPO                Q.: ";
			cin >> vehiculos.anticipo;	
			fflush(stdin);
			

			

			escribir << auxcodigo << " " << vehiculos.placa << " " << vehiculos.marca << " " << vehiculos.modelo << " " << vehiculos.cilindrada << " " << vehiculos.velocidad << " " << vehiculos.traccion << " " << vehiculos.gasolina << " " << vehiculos.cliente << " " << vehiculos.dpi<< " " << vehiculos.tel<< " " << vehiculos.anticipo<< endl;

		}
	}
	else{
		
		cout << "ERROR AL ABRIR REGISTROS" << endl;
	}


	escribir.close();
	consulta.close();
	gotoxy(27,20);
	system("pause");

}

///////////////////////////////////////////////////////////////////////////////////////////

void vertodo()
{
	system("cls");
	Sistema vehiculos;
	ifstream lectura;
	lectura.open("McQueen.txt",ios::out | ios::in);

	if(lectura.is_open())
	{

	string mensaje = "A U T O M O V I L E S   R E G I S T R A D O S";
	cout << endl;
	cout << endl;
	cout << "                                       ";
	for (int i = 0; i < mensaje.length(); i++)
	{
		cout << mensaje[i];
		Sleep(30);
	}
	cout << "\n   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout <<"   "<<setw(7)<< "| Fecha|" << setw(10) <<" Placa |" << setw(10) <<"Marca|" << setw(9)<< "Modelo |" << setw(12) << "Cilindraje|" << setw(12)<< "Velocidad |" << setw(14) <<"T.Combustible |" << setw(13)<<"Tip Traccion|" << setw(12)<<"Cliente|" << setw(16)<<"DPI|" << setw(16)<<"Telefono|" << setw(16)<<"Anticipo|"<<endl;
	cout << "   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	 
	 lectura >> vehiculos.codigo;
	 while(!lectura.eof())
	 {
	 	lectura >> vehiculos.placa >> vehiculos.marca >> vehiculos.modelo >> vehiculos.cilindrada >> vehiculos.velocidad >> vehiculos.traccion >> vehiculos.gasolina >> vehiculos.cliente >> vehiculos.dpi >> vehiculos.tel >> vehiculos.anticipo;

		
	cout <<"   |"<<setw(5)<< vehiculos.codigo<<"|" << setw(9) << vehiculos.placa<<"|"<< setw(9) << vehiculos.marca<<"|" << setw(8) << vehiculos.modelo<<"|" << setw(6)<< vehiculos.cilindrada<<"     |"<< setw(8)<< vehiculos.velocidad<<"   |" << setw(14)<< vehiculos.gasolina<<"|"<< setw(12)<< vehiculos.traccion<<"|"<< setw(11)<< vehiculos.cliente<<"|"<< setw(15)<< vehiculos.dpi<<"|"<< setw(15)<< vehiculos.tel<<"|"<< setw(15)<< vehiculos.anticipo<<"|"<<endl;
		lectura >> vehiculos.codigo;
		
	 }

	cout << "   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	 
	 system("pause");
	}else{
		cout << "ERROR AL ABRIR REGISTROS" << endl;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////

void buscarvehiculo()
{
	system("cls");
	Sistema vehiculos;
	ifstream lectura;
	int codigo,p;
	bool encontrado = false;
	lectura.open("McQueen.txt", ios::out | ios::in);

    gotoxy(40,4);
	string mensaje = "B U S C A R   A U T O M O V I L";
	cout << endl;
	cout << endl;
	cout << "                                          ";
	for (int i = 0; i < mensaje.length(); i++)
	{
		cout << mensaje[i];
		Sleep(30);
	}
	
	if(lectura.is_open())
	{
		gotoxy(17,8);
        cout << "INGRESE LA FECHA DE LA RESERVACION A BUSCAR-> ";
        cin >> codigo;
        lectura >> vehiculos.codigo;

        while(!lectura.eof())
        {
        	
	 		lectura >> vehiculos.placa >> vehiculos.marca >> vehiculos.modelo >> vehiculos.cilindrada >> vehiculos.velocidad >> vehiculos.traccion >> vehiculos.gasolina >> vehiculos.cliente >> vehiculos.dpi >> vehiculos.tel >> vehiculos.anticipo;


            if(codigo == vehiculos.codigo)
            {
                encontrado = true;

    cout << "\n   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout <<"   "<<setw(7)<< "| Fecha|" << setw(10) <<" Placa |" << setw(10) <<"Marca|" << setw(9)<< "Modelo |" << setw(12) << "Cilindraje|" << setw(12)<< "Velocidad |" << setw(14) <<"T.Combustible |" << setw(13)<<"Tip Traccion|" << setw(12)<<"Cliente|" << setw(16)<<"DPI|" << setw(16)<<"Telefono|" << setw(16)<<"Anticipo|"<<endl;
	cout << "   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	
	cout <<"   |"<<setw(5)<< vehiculos.codigo<<"|" << setw(9) << vehiculos.placa<<"|"<< setw(9) << vehiculos.marca<<"|" << setw(8) << vehiculos.modelo<<"|" << setw(6)<< vehiculos.cilindrada<<"     |"<< setw(8)<< vehiculos.velocidad<<"   |" << setw(14)<< vehiculos.gasolina<<"|"<< setw(12)<< vehiculos.traccion<<"|"<< setw(11)<< vehiculos.cliente<<"|"<< setw(15)<< vehiculos.dpi<<"|"<< setw(15)<< vehiculos.tel<<"|"<< setw(15)<< vehiculos.anticipo<<"|"<<endl;
    cout << "   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		    }
        
            
            lectura >> vehiculos.codigo;
        }
        if(!encontrado)
        {
			gotoxy(17,11);
            cout << "NO SE ENCONTRARON RESERVACIONES EN ESA FECHA" << endl;
        }
    }
    else{
        cout << "ERROR AL ABRIR REGISTROS" << endl;
    }
        system("pause");
}

/////////////////////////////////////////////////////////////////////////////////////////////

void eliminarvehiculo()
{
	system("cls");
	Sistema vehiculos;
	ofstream aux;
    ifstream lectura;
    int i= 0;
    bool encontrado = false;
    int auxCodigo = 0;
    aux.open("auxiliar2.txt",ios::out);
    lectura.open("McQueen.txt",ios::in);
    
    if(aux.is_open() && lectura.is_open()){

        cout<<"\nINGRESE LA FECHA DE LA RESERVACION A ELIMINAR->  ";
        cin>>auxCodigo;
        lectura >> vehiculos.codigo;
	 while(!lectura.eof())
	 {
		 lectura >> vehiculos.placa >> vehiculos.marca >> vehiculos.modelo >> vehiculos.cilindrada >> vehiculos.velocidad >> vehiculos.traccion >> vehiculos.gasolina >> vehiculos.cliente >> vehiculos.dpi >> vehiculos.tel >> vehiculos.anticipo;
	 	
		 if(auxCodigo == vehiculos.codigo){
                encontrado = true;
                
    string mensaje = "......ELIMINANDO RESERVACION......";
	cout << endl;
	cout << endl;
	cout << "                                          ";
	for (int i = 0; i < mensaje.length(); i++)
	{
		cout << mensaje[i];
		Sleep(60);
	}
    
		cout << "\n   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout <<"   "<<setw(7)<< "| Fecha|" << setw(10) <<" Placa |" << setw(10) <<"Marca|" << setw(9)<< "Modelo |" << setw(12) << "Cilindraje|" << setw(12)<< "Velocidad |" << setw(14) <<"T.Combustible |" << setw(13)<<"Tip Traccion|" << setw(12)<<"Cliente|" << setw(16)<<"DPI|" << setw(16)<<"Telefono|" << setw(16)<<"Anticipo|"<<endl;
		cout << "   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	
		cout <<"   |"<<setw(5)<< vehiculos.codigo<<"|" << setw(9) << vehiculos.placa<<"|"<< setw(9) << vehiculos.marca<<"|" << setw(8) << vehiculos.modelo<<"|" << setw(6)<< vehiculos.cilindrada<<"     |"<< setw(8)<< vehiculos.velocidad<<"   |" << setw(14)<< vehiculos.gasolina<<"|"<< setw(12)<< vehiculos.traccion<<"|"<< setw(11)<< vehiculos.cliente<<"|"<< setw(15)<< vehiculos.dpi<<"|"<< setw(15)<< vehiculos.tel<<"|"<< setw(15)<< vehiculos.anticipo<<"|"<<endl;
    	cout << "   -----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;         
                
            }else{
                
		aux << vehiculos.codigo << vehiculos.placa << " " << vehiculos.marca << " " << vehiculos.modelo << " " << vehiculos.cilindrada << " " << vehiculos.velocidad << " " << vehiculos.traccion << " " << vehiculos.gasolina << " " << vehiculos.cliente << " " << vehiculos.dpi<< " " << vehiculos.tel<< " " << vehiculos.anticipo<< endl;
            }         
		lectura>>vehiculos.codigo;
	}
    if(encontrado==false){
    	
        cout<<"\n\nEL LA RESERVACION HA SIDO ELIMINIDA-->"<<auxCodigo<<endl;
    }
    aux.close();
    lectura.close();
    remove("McQueen.txt");
    rename("auxiliar2.txt","McQueen.txt");
    }
    else{
            cout<<"ERROR AL ABRIR REGISTROS"<<endl;
    }
    system("pause");
}

//////////////////////////////////////////////////////////////////////////////////////////


