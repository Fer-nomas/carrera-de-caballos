#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;
	void gotoxy(int x,int y){  
	    HANDLE hcon;  
	    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	    COORD dwPos;  
	    dwPos.X = x;  
	    dwPos.Y= y;  
	    SetConsoleCursorPosition(hcon,dwPos);  
	}
	void pista(){
	cout<<"===================Carrera de Caballos======================"<<endl;
	cout<<"============================================================"<<endl;
	cout<<"|                                                          |"<<endl;
	cout<<"|                                                          |"<<endl;
	cout<<"|                                                          |"<<endl;
	cout<<"============================================================"<<endl;
	cout<<" "<<endl;
	
	}
	main(){
		system("title Carrera de Caballos");	
		
		
	int dinero; 
    const double apuesta_minima = 300; 


    cout << "Ingrese la cantidad de dinero : ";
    cin >> dinero;


    if (dinero < apuesta_minima) {
        cout << "La cantidad de dinero ingresada es insuficiente para realizar una apuesta." << endl;
        system("pause");
    }

	int apu;
    char seguir_apostando = 's';
    while (dinero >= apuesta_minima && (seguir_apostando == 's' || seguir_apostando == 'S')) {
        double apuesta;


        cout << "Dinero actual: $" << dinero << endl;
        cout << "Ingrese la cantidad a apostar (minimo $" << apuesta_minima << "): ";
        cin >> apuesta;
		
        
        cout<<"Por cual caballo apuestas?(Arriba: 1 /Abajo: 2 )"<<endl;
        cin>> apu ;
        
        if (apuesta < apuesta_minima || apuesta > dinero) {
            cout << "Apuesta inválida. Debe ser al menos $" << apuesta_minima << " y no puede exceder su cantidad de dinero actual." << endl;
            continue; 
        }

    	
    	srand((unsigned)time(NULL));
		
		int rojo = 0 ;
		int negro = 0 ;
		int n;
	
		int gan;
		
			system("cls");
			for(int i=0;i<149;i++){
			system("cls");
			pista();
			
			
			
			
			
			n=int(rand()%2)+1;
			
			if(rojo== 60){
				gan = 1;
				break;
			}
			if(negro== 60){
				gan = 2;
				break;
			}
		
			
			if(n == 1){
				rojo++;
			}else{
				negro++;
			}
			gotoxy(rojo,2);cout<<"*"<<endl;
			gotoxy(negro,4);cout<<"*"<<endl;
			Sleep(100);
			}
			
    
    	if(gan == apu){
    		cout<<"Ganaste! "<<endl;
    		apuesta = apuesta * 2;
    		dinero = dinero + apuesta;
		}else{
			dinero = dinero - apuesta;
				cout<<"Perdiste! "<<endl;
		}
		Sleep(3000);
    	system("cls");
        if (dinero < apuesta_minima) {
            cout << "No tienes suficiente dinero para seguir apostando. Fin del juego." << endl;
            break;
        }


        cout << "¿Quieres seguir apostando? (s/n): ";
        cin >> seguir_apostando;
    }

  
    cout << "Has terminado el juego con $" << dinero << ". Gracias por jugar." << endl;


 }
	
	
	
	
	
