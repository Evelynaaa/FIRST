//prograa que lista carpetas y archivos de forma recursiva
#include <iostream>
#include <windows.h>

using namespace std;

void listar_directorio(char* dir){
    int cont=0;
	WIN32_FIND_DATA wfd;
    HANDLE		hFind;
	char 		szCurrentPath[MAX_PATH];	
	char 		szNextPath[MAX_PATH];
	
	strcpy(szCurrentPath, dir);
	strcat(szCurrentPath, "\\*.*");
	
	hFind = FindFirstFile(szCurrentPath, &wfd);
	
	if(hFind == INVALID_HANDLE_VALUE)
		cout<<"Ruta incorrecta";
	else{
		do{
			
			while(strcmp(wfd.cFileName,".txt") != NULL )
			{
			if(!strcmp(wfd.cFileName, ".") || !strcmp(wfd.cFileName, ".."))
				continue;
			cout<<wfd.cFileName<<endl;
			
			if(wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY){
				wsprintf(szNextPath, "%s\\%s", dir, wfd.cFileName);
				listar_directorio(szNextPath);
			}
			cont++;
			}
		
			
		}while(FindNextFile(hFind, &wfd)!=0);
	} 
}

int main()
{
	char dir[MAX_PATH]; //NO MAS DE 512 CARACTERES
	cout<<"Ingrese la ruta a explorar: "<<endl;
	cin>>dir;
	cout<<endl;
	listar_directorio(dir); //c:
}
