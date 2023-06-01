#include <iostream>
#include <algorithm>
using namespace std;

void eliminarValor(int arr[], int& tam, int valor) {
    int indiceaEliminar=-1;
    
    // Buscar el valor a eliminar y obtener su índice
    for (int i = 0; i < tam; i++) {
        if (arr[i] == valor) {
            indiceaEliminar = i;
            break;
        }
    }
    
    if (indiceaEliminar != -1) {
        for (int i = indiceaEliminar; i < tam - 1; i++) {
arr[i] = arr[i + 1];
        }
        tam--;
}
}
        
int binarySearch(int arr[], int left, int right, int x) {
   while (left <= right) {
      int mid = left + (right - left) / 2; // calcula el índice medio del arreglo
      // verifica si x está presente en la mitad del arreglo
      if (arr[mid] == x) {
      	
         return mid;
      }
      // si x es mayor, ignora la mitad izquierda
      if (arr[mid] < x) {
      	
         left = mid + 1;
      }
      // si x es menor, ignora la mitad derecha
      else {
         right = mid - 1;
      }
   }
   // si x no se encuentra en el arreglo, devuelve -1
   return -1;
}

int main(void) {

	int i,p,h,u,g;
	
	cout<<"Ingrese cuantos numeros desea agregar"<<endl;cin>>i;
	int arr[i];
	for(p=0; p<i; p++){
	 	 
		 cout<<"Ingrese valor "<<p<<" : "<<endl;cin>>arr[p];
	
	 }
	sort(arr,arr+i);
   // arreglo ordenado
  	
   int n = sizeof(arr) / sizeof(arr[0]); // tamaño del arreglo
	int x; // elemento a buscar
   cout<<"Ingrese el valor que desea encontrar"<<endl;cin>>x;
   
  
   int result = binarySearch(arr, 0, i - 1, x); // llamar a la búsqueda binaria

   if (result == -1) {
      cout << "El elemento no se encuentra en el arreglo" << endl;
   }
   else {
      cout << "El elemento se encuentra en el índice " << result << endl;
   }
   cout<<"Valores del arbol ordenados de forma ascendente"<<endl;
   for(h=0;h<i;h++){
   	 
	 cout<<arr[h]<<", ";
   	 
   }
  	cout<<"Que valor desea eliminar"<<endl;cin>>g;
  	eliminarValor( arr,  i, g);
  	for(h=0;h<i;h++){
   	 
	 cout<<arr[h]<<", ";
   	 
   }
   return 0;
} 

