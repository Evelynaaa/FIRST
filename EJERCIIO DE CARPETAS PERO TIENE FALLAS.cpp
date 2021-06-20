// PROGRAMA QUE LISTA CARPETAS DE FORMA RECURSIVA 
#include<iostream>
#include<windows.h>
using namespace std;

void listar_directorio(char* dir)// ingreso el char como un puntero a la direccion de esa varible 
{
  
    WIN32_FIND_DATA wfd;// aca voy a guardar en la estructura de windows.h y lo pondre como una data del archivo  
    HANDLE      hFind;// que es un manejador de archivo que sirve para ver si el archivo exite se guardara en ese HANDLE 
    char          szCurrentPath[MAX_PATH];
    char          szNextPath[MAX_PATH];
   
   
    strcpy(szCurrentPath, dir);
    strcat(szCurrentPath, "\\*.*");
    
    // aca realizare la busqueda 
    hFind = FindFirstFile(szCurrentPath, &wfd);// esto es una funcion definida en windows.h donde
   
	if(hFind == INVALID_HANDLE_VALUE)
		cout<<"La ruta ingresada no existe, ruta incorrecta-----"<<endl;
	else{ //caso contrario: si tengo la ruta encontrada y si tengo el archivo de handle 
       	do
         {
         	
         	if(!strcmp(wfd.cFileName, ".") || !strcmp(wfd.cFileName, ".."))
         	         continue;
        	cout<<wfd.cFileName<<endl;	
		 }while(FindNextFile(hFind, &wfd) != 0);// mientras busque el primer archivo sea diferneten de cero
	   
    }	    
}


// caebecera principal 
int main()
{
	char dir[MAX_PATH];
	
	cout<<"Ingrese la ruta a explorar : ";
	cin.getline(dir, MAX_PATH);// lo almaceno en la variable directorio 	
	cout<<endl;// salto de linea 	
	//listar_directorio(dir);//llamo a mi funcion recursiva listar directorio

}
