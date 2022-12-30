#pragma once
# define UNDEF -2
#include <stdbool.h>

/** Des redondancespossibles avec d 'autres TAs ! */
struct job_t {
char * title; // Nom de la tâche
double life; // Durée de la tâche
int input_degree; // Son degré de dépendance
int output_degree; // Les tâches qui en dépendent
int rank; // Rang de la tâche
int dyn_input_degree; // Facilité de prog
struct list_t * precedence; // Les tâches précédentes
struct list_t * posteriority; // Les tâches ultérieures
double au_plus_tot; // Date au plus tôt
double au_plus_tard; // Date au plus tard
double marge_totale; // Marge totale
double marge_libre; // Marge libre
bool critique; // Une tâche critique ?
};

// Créer une tâche vide
struct job_t * new_empty_job ();

// Créer une tâche
struct job_t * new_job ( char *title );

// Vide la tâche
void free_job ( struct job_t **ptrJ );

// Affiche la tâche
void view_job ( struct job_t *J );

// Donne le nom de la tâche
char *get_job_tilte ( struct job_t *J );

// Change le nom de la tâche
void set_job_title ( struct job_t *J , char * title );

// Donne la durée de la tâche
double get_job_life ( struct job_t *J );

// Change la durée de la tâche
void set_job_life ( struct job_t *J , double life );

// Donne le degrée de dépendance
int get_job_iDegree ( struct job_t *J );

// Change le degrée de dépendance
void set_job_iDegree ( struct job_t *J , int iDegree );

// ???
void incr_job_iDegree ( struct job_t *J );

// ???
void decr_job_iDegree ( struct job_t *J );

// Donne les tâches qui en dépendent
int get_job_oDegree ( struct job_t *J );

// Change les tâches qui en dépendent
void set_job_oDegree ( struct job_t *J , int oDegree );

// ???
void incr_job_oDegree ( struct job_t *J );

// ???
void decr_job_oDegree ( struct job_t *J );

// Donne le rang de la tâche
int get_job_rank ( struct job_t *J );

// Change le rang de la tâche
void set_rank ( struct job_t *J , int rank );

// ???
int titleJobCmp ( struct job_t *J1 , struct job_t *J2 );

// ???
int iDegreeJobCmp ( struct job_t *J1 , struct job_t *J2 );

// ???
int oDegreeJobCmp ( struct job_t *J1 , struct job_t *J2 );

// ???
int rangJobCmp ( struct job_t *J1 , struct job_t *J2 );