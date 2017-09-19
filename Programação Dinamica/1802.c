#include <stdio.h>

int main (){
	int i, exemplares, j, exemplaresp, exemplaresm, exemplaresf, exemplaresq, exemplaresb, k, l, m, conjuntos[100000], cont=0, ultimo, total=0;
	int portugues[10], biologia[10], quimica[10], matematica[10], fisica[10];
	biologia[0]=0; fisica[0]=0; matematica[0]=0; portugues[0]=0; quimica[0]=0;
	biologia[1]=0; fisica[1]=0; matematica[1]=0; portugues[1]=0; quimica[1]=0;
	biologia[2]=0; fisica[2]=0; matematica[2]=0; portugues[2]=0; quimica[2]=0;
	biologia[3]=0; fisica[3]=0; matematica[3]=0; portugues[3]=0; quimica[3]=0;
	biologia[4]=0; fisica[4]=0; matematica[4]=0; portugues[4]=0; quimica[4]=0;
	biologia[5]=0; fisica[5]=0; matematica[5]=0; portugues[5]=0; quimica[5]=0;
	biologia[6]=0; fisica[6]=0; matematica[6]=0; portugues[6]=0; quimica[6]=0;
	biologia[7]=0; fisica[7]=0; matematica[7]=0; portugues[7]=0; quimica[7]=0;
	biologia[8]=0; fisica[8]=0; matematica[8]=0; portugues[8]=0; quimica[8]=0;
	biologia[9]=0; fisica[9]=0; matematica[9]=0; portugues[9]=0; quimica[9]=0;
	for (i=0;i<100000;i++){
		conjuntos[i]=0;
	}
	for (i=0;i<5;i++){
		scanf ("%d", &exemplares);
		if (i==0){
			for (j=0;j<exemplares;j++){
				scanf ("%d", &portugues[j]);
			}
			exemplaresp=exemplares;
		}
		else if (i==1){
			for (j=0;j<exemplares;j++){
				scanf ("%d", &matematica[j]);
			}
			exemplaresm=exemplares;
		}
		else if (i==2){
			for (j=0;j<exemplares;j++){
				scanf ("%d", &fisica[j]);
			}
			exemplaresf=exemplares;
		}
		else if (i==3){
			for (j=0;j<exemplares;j++){
				scanf ("%d", &quimica[j]);
			}
			exemplaresq=exemplares;
		}
		else if (i==4){
			for (j=0;j<exemplares;j++){
				scanf ("%d", &biologia[j]);
			}
			exemplaresb=exemplares;
		}
	}
    for (i=0;i<exemplaresp;i++){
    	for (j=0;j<exemplaresm;j++){
    		for(k=0;k<exemplaresf;k++){
    			for(l=0;l<exemplaresq;l++){
    				for (m=0;m<exemplaresb;m++){
    					conjuntos[cont]=portugues[i]+matematica[j]+fisica[k]+quimica[l]+biologia[m];
    					cont++;
					}
				}
			}
		}
	}
	scanf ("%d", &ultimo);
    int max=0, aux=0;
	for (i=0;i<(exemplaresp*exemplaresm*exemplaresf*exemplaresb*exemplaresq)-1;i++){
    	max=i;
    	for (j=i+1;j<(exemplaresp*exemplaresm*exemplaresf*exemplaresb*exemplaresq);j++){
       		if(conjuntos[j]>conjuntos[max]){
				max=j;
			}
     	}
     	if (i!=max){
			aux=conjuntos[i];
      		conjuntos[i]=conjuntos[max];
       		conjuntos[max]=aux;
     	}
    }
    for (i=0;i<ultimo;i++){
    	total=total+conjuntos[i];
	}
	printf ("%d\n", total);
}