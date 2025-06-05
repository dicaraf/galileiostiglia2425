/*Scrivi una funzione che confronti due array e restituisca 1 se sono uguali, 0 altrimenti. Usa questo prototipo per implementare la funzione: int confrontaArray(int arr1[], int arr2[], int dim1, int dim2);*/

int confrontaArray(int arr1[], int arr2[], int dim1, int dim2){
    if(dim1!=dim2) return 0;

    for(int i=0; i<dim1; i++){
        if(arr1[i]!=arr2[i]) return 0;
    }
    return 1;
}