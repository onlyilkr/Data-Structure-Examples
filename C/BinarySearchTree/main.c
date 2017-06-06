#include <stdio.h>
#include <stdlib.h>

struct n {
	int data;
	struct n *sol;
	struct n *sag;
};
typedef struct n node;
struct node *ekle(node *agac,int x){
	if (agac == NULL){
		node *root = (node *)malloc(sizeof(node));
		root->sag = NULL;
		root->sol = NULL;
		root->data = x;
		return root;
	}
	else if(agac->data < x){
			agac->sag = ekle(agac->sag,x);
			return agac;
	}
	agac->sol =ekle(agac->sol,x);
			
	
	return agac;
}
void dolas( node *agac){
	if (agac == NULL){
		return;
	}
	
	dolas(agac->sol);
	printf("%d ",agac->data);
	dolas(agac->sag);
	
	
}

struct node *sil(node *agac,int x){
	if (agac==NULL) return NULL;
	if(agac->data == x){
		if(agac->sol==NULL && agac->sag == NULL){
			return NULL;
		}
		if(agac->sag != NULL){
		
			agac->data = min(agac->sag);
			agac->sag = sil(agac->sag,min(agac->sag));
			return agac;
		}
		agac->data = max(agac->sol);
		agac->sol = sil(agac->sol,max(agac->sol));
		return agac;
	}
	if(agac->data < x){
		agac->sag=sil(agac->sag,x);
		return agac;
	}
	agac->sol= sil(agac->sol,x);
	return agac;
		
}



int bul(node *agac, int aranan){
     if(aranan == agac->data){
        return 1;
    }
    else if(aranan > agac->data ){
	if(agac->sag != NULL)
	        return bul(agac->sag, aranan);
	else
		return NULL;
    }
    else{
		if(agac->sag != NULL)
		        return bul(agac->sol,aranan);
		else {
		
			return NULL;
	   }
	}
}


int max(node *agac){
	while(agac->sag != NULL)
		agac=agac->sag;
	return agac->data;
}
int min(node *agac){
	while(agac->sol != NULL)
		agac=agac->sol;
	return agac->data;
}


int main() {
	node *agac =NULL;
	agac=ekle(agac,12);
	agac=ekle(agac,11);
	agac=ekle(agac,14);
	agac=ekle(agac,9);
	agac=ekle(agac,13);
	dolas(agac);
	printf("\nAranama sonucu: %d \n",bul(agac,9));
	printf("Max: %d \nMin %d\n",max(agac),min(agac));
	//agac= sil(agac,56);
	dolas(agac);
	
}




