#include <iostream>
using namespace std;

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
	 
   int arr[] = { 2, 5, 7, 12, 18, 20, 25, 28, 30, 42, 50 }; // arreglo ordenado
  	
   int n = sizeof(arr) / sizeof(arr[0]); // tamaño del arreglo
	int x; // elemento a buscar
   cout<<"Ingrese el valor que desea encontrar"<<endl;cin>>x;
   
  
   int result = binarySearch(arr, 0, n - 1, x); // llamar a la búsqueda binaria

   if (result == -1) {
      cout << "El elemento no se encuentra en el arreglo" << endl;
   }
   else {
      cout << "El elemento se encuentra en el índice " << result << endl;
   }
   
   cout<<"Valores del arbol"<<endl;
	 cout<<"2, 5, 7, 12, 18, 20, 25, 28, 30, 42, 50"<<endl;
   return 0;
} 

