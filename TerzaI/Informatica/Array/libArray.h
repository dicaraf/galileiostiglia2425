/**
 * funzione che stampa gli elementi di un vettore.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 * @param char separatore tra un elemento e un altro 
 */
void stampaVettore(int vettore[], int dim, char sep);
/**
 * funzione che riempie un vettore con valori scelti dall'utente.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 */
void riempiVettore(int vettore[], int dim);
/**
 * funzione riempie un vettore con numeri casuali compresi tra un minimo e un massimo.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 * @param int minimo valore minimo dei numeri casuali
 * @param int massimo valore dei numeri casuali
 */
void riempiVettoreCasuale(int vettore[], int dim, int minimo, int massimo);
/**
 * questa funzione restituisce il numero di volte in cui compare la variabile valore all'interno del vettore
 * @param int[]vettore in ingresso
 * @param int dimensione del vettore
 * @param int valore da ricercare
 * @return int numero di occorrenze
 */
int contaOccorrenze(int vettore[], int dim, int valore);