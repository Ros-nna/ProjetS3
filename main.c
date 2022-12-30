#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include "io.h"
#include "rank.h"

int main(int argc, char ** argv){
    if(argc < 2) exit(-1);
    struct list_t * G = read_graph(argv[1]);
    printf("Liste des tâches lue\n");
    view_list(G, &view_job);
    quick_sort(G, &iDegreeJobCmp);
    printf("Liste des tâches triée par degrée d'entrée croissant\n");
    view_list(G,&view_job);
    ranking(G);
    printf("Liste des tâches triée par rang croissant\n");
    view_list(G,&view_job);
    printf("Prune edges\n");
    prune(G);
    view_list(G,&view_job);
    printf("\nMarges totales des tâches\n");
    marges_totales(G);
    view_list(G,&view_job);
    return 0;
}