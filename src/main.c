#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "const.h"
#include "graph.h"
#include "affiche.h"
#include "connexe.h"
#include "routage.h"
#include "input.h"

int test_connexe(graphe* G) {
	int connexe = parcours_graphe(G);
	if(connexe == 1)
	{
		printf("\nLe graphe est connexe\n");
		return 1;
	}
	else
	{
		printf("\nLe graphe n'est pas connexe\n");
		return 0;
	}
}

void calcul_graphe(graphe* G) 
{
	calculTier1(G);
	calculTier2(G);
	calculTier3(G);
}

void calcul_routage(routage* R) {
	Floyd_Warshall(R, TAILLE_GRAPHE);
}

void input_keyboard(routage * R)
{
	int in,out,is_dest = 0;
	char * buf = malloc(32 * sizeof(char));		// > pour stoker l'entrée
	while(((in = input_value(&is_dest,buf)) != -1  && (out = input_value(&is_dest,buf)) != -1)) affiche_chemin(R,in,out);
	free(buf);
}

int main()
{	
	srand(time(NULL));
	graphe* G = init_graphe(TAILLE_GRAPHE);
	
	calcul_graphe(G);
	
	if(test_connexe(G)){
		routage* R = init(G, TAILLE_GRAPHE);
		calcul_routage(R);
		input_keyboard(R);
		libere_routage(R);
	}
	free(G);
	return 0;
}
