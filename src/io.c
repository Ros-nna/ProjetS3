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

struct job_t * new_empty_job ();
struct job_t * new_job ( char *title );
void free_job ( struct job_t **ptrJ );

void view_job ( struct job_t *J );

char *get_job_tilte ( struct job_t *J );
void set_job_title ( struct job_t *J , char * title );

double get_job_life ( struct job_t *J );
void set_job_life ( struct job_t *J , double life );

int get_job_iDegree ( struct job_t *J );
void set_job_iDegree ( struct job_t *J , int iDegree );
void incr_job_iDegree ( struct job_t *J );
void decr_job_iDegree ( struct job_t *J );

int get_job_oDegree ( struct job_t *J );
void set_job_oDegree ( struct job_t *J , int oDegree );
void incr_job_oDegree ( struct job_t *J );
void decr_job_oDegree ( struct job_t *J );

int get_job_rank ( struct job_t *J );
void set_rank ( struct job_t *J , int rank );

int titleJobCmp ( struct job_t *J1 , struct job_t *J2 );
int iDegreeJobCmp ( struct job_t *J1 , struct job_t *J2 );
int oDegreeJobCmp ( struct job_t *J1 , struct job_t *J2 );
int rangJobCmp ( struct job_t *J1 , struct job_t *J2 );