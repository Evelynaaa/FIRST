#include<iostream>
#include<windows.h>

using namespace std;

// PROGRAMA QUE LISTA CARPETAS Y ARCHIVOS DE FORMA RECURSIVA
 
 void lista_directorio(char* dir)
 {
 	// estructura de dato donde guardo informacion de mi archivo o carpeta 
 	WIN32_FIND_DATA wfd;// aca voy a guardar mi archivo en esta estructura 
 	
 	// manejador al archivo carpetta
    HANDLE   hFind; // aca colocare un manejador de busqueda
    char      szCurrentPath[MAX_PATH]; //creo una variable temporal
    char      szNextPath[MAX_PATH];// es la sigueinte ruta 
    
    strcpy(szCurrentPath, dir);// esto es como una copia
    strcat(szCurrentPath, "\\*.*"); // aca ovy a concatenar
    
    hFind = FindFirstFile(szCurrentPath, &wfd);// aca lo paso la direccion de wfd y aca almaceno toda la infor del primer archivo que encuentro 
    
    // si en caso no tenga el arcvhivo encontrado ni en finle 
    if(hFind == INVALID_HANDLE_VALUE)
           cout<< "Ruta incorrecta"<<endl;
    else
    {
    	// aca pondre un do while hasta que exista un valor sifuiente 
    	do
    	{
    		if(strcmp(wfd.cFileName, ".") || !strcmp(wfd.cFileName, ".."))// no imprmir el directorio principal 
             continue;// le damos continuar 
    	
			cout<< wfd.cFileName<<endl;

    		
			if(wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
				// TENGO Q ARMAR UNA VARIBLE CON UNA FINCION
				wsprintf(szNextPath, "%s\\%s", dir, wfd.cFileName );
				lista_directorio(szNextPath);
			}
		//	cout<< wfd.cFileName<<endl;
		
		}while(FindNextFile(hFind, &wfd) != 0);
	}
	
       // cout<<wfd.cFileName;// ACA ME DEVULEVE EL NOMBRE DE LA CARPETA 
 }
 
 
 int main()
 {
 	char dir[MAX_PATH];// es una constante de un sistema que esta en la libreria windows 
 	
 	cout<<"============BIENVENIDOS==============="<<endl;
 	cout<<"Ingrese la ruta a explorar : ";
 	cin.getline(dir, MAX_PATH );
 	cout<<endl;
 	
	lista_directorio(dir);// llamo a la carpeta directorio
 	
 	
 }
