#include <stdbool.h>
#include <list.h> 

// Créer une liste vide
struct list_t *new_list ();
// Supprime la liste, ses élements et ses données
void del_list ( struct list_t **ptrL , void (*ptrf ) () );
// Nettoie la liste, supprimes ses éléments mais garde les données et la liste
void clean ( struct list_t *L );
// Est-ce que la liste L est vide?
bool is_empty ( struct list_t *L );
// Donne la tête de la liste L
struct elmlist_t *get_head ( struct list_t *L );
// Donne la queue de la liste L
struct elmlist_t *get_tail ( struct list_t *L );

// Donne le nombre d'élément de L
int get_numelm ( struct list_t *L ) ;
// Retire la donnée D de la liste L si elle est présente
void take_out ( struct list_t *L , void *D );
// Ajoute un élément contenant une donnée à la tête de L
void cons ( struct list_t *L , void *data );
// Ajoute un élément contenant une donnée à la queue de L
void queue ( struct list_t *L , void *data );
// Insère dans L un élément contenant une donnée avec l'ordre donné par cmp_ptrf
void ordered_insert ( struct list_t *L , void * data , int (*cmp_ptrf ) () );
// Fait un tri rapide
void quick_sort ( struct list_t *L , int (*cmpFct ) () );
// Affiche la liste
void view_list ( struct list_t *L , void (*ptrf ) () );
// Retourne un ptr à élément où la donnée est la clée, sinon NULL
void find ( struct list_t *L , void **ptrKey , int (*cmpFct ) () , void (*delFct ) () );