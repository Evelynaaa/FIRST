// PROGRAMA QUE LISTA CARPETAS DE FORMA RECURSIVA 
#include<iostream>
#include<windows.h>

using namespace std;


// creamos la funcion listar_directorio que en teoria no devolvera nada
void listar_directorio(char* dir)// ingreso el char como un puntero a la direccion de esa varible 
{
    // todo archivo tieene propiedades, nombres, etc pero essos nombres se guardan en la 
	// metadata del archivo y en el sistema directorio, si yo quiero recuperarlo lo podria 
	// recuperar en la estrucutra win32 de viento que es find_data 
    WIN32_FIND_DATA wfd;// aca voy a guardar en la estructura de windows.h y lo pondre como una data del archivo 
    
    
    // el HNDLE es un manejador hacia un tipo de objeto de la estrucutra de windows como una carpeta o un soucket 
    // aca creare un manejador que es un HANDLE de archivo , el hFind es un manejador al cual estoy buscando 
    HANDLE      hFind;// que es un manejador de archivo que sirve para ver si el archivo exite se guardara en ese HANDLE 
    
    // aca voy a crear una variable temporal que es char que sera la ruta actual que sera un valor
    // szcurrenpath que es la ruta actual donde estoy  y esta ruta actual va a tener un valor de 
    // max path : 
    char          szCurrentPath[MAX_PATH];
    // aca voy a crear otro char que lo voy a llamar next path que sera la sigueinte ruta y que
    // tambien lo colocare como longitud maxima
    char          szNextPath[MAX_PATH];
    
    // ACA CREARE UNA COPIARE LO QUE HAY EN LA DIRECCION DE MEMORIA PARA QUE NO HAYA EQUIVOCACIONES
    strcpy(szCurrentPath, dir);
    // aca tambien voy a concatenar para que pueda buscar todos los archivos y para que comience a listar todos los archivos 
    strcat(szCurrentPath, "\\*.*");
    
    
    
    // aca realizare la busqueda 
    hFind = FindFirstFile(szCurrentPath, &wfd);// esto es una funcion definida en windows.h donde
    // le pasare la ruta que en ese caso seria el szcurrentPath donde guardara toda la data que
    // si lo encuentro debo pasarle la direccion de "wfd", aca almacenare toda la informacion de 
	// del primero que encuentro y si existe ese archivo empezare a hacer la recutsivdad , si no 
	/// existe saldria un eror y diria :
	if(hFind == INVALID_HANDLE_VALUE)
	
		cout<<"La ruta ingresada no existe, ruta incorrecta-----"<<endl;
		
	else //caso contrario: si tengo la ruta encontrada y si tengo el archivo de handle 
	    
	    	// comenzare a trabajar la estructura y comenzare a imprimmir el primer valor
	    	// eso quiere decir q la estructura que es "wfd" . y ahi pido el nombre del archivo
	    	cout<<wfd.cFileName;
}


// caebecera principal 
int main()
{
	char dir[MAX_PATH];
	
	cout<<"Ingrese la ruta a explorar : ";
	cin>>dir;// lo almaceno en la variable directorio 
	
	cout<<endl;// salto de linea 
	
	
	listar_directorio(dir);//llamo a mi funcion recursiva listar directorio
    


}
