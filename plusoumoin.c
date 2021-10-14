#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int keep = 1;


int main(void){
  while (keep = 1){
      int (n);
      srand(time(NULL));
      n = rand() % 100;
      int life = 7;
      int try;
      while (life>0 && try!=n) {
	
	printf("entrez un nombre\n");
	scanf("%d", &try);
	if (try == n){
	  printf("bien jouer\n");
	}
	else if (try < n){
	  printf("plus haut\n");
	}
	else if (try > n){
	  printf("plus bas\n");
	}
	if (life == 1){
	  printf("perdu\n");
	}
	life = life-1;
      }
      char* request;
      char* verif = "ok";
      printf("voulez vous continuer\n");
      scanf("&f", &request);
      if (request != verif){
	  keep = 0;
	    }
    }
}
