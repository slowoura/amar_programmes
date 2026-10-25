#include <stdio.h>

int main() {
	int i,j,k,l,m,n;

	scanf("%d",&n);
	int a[n],b[n];
	//printf("n:%d",n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//printf("%d",a[0]);
    b[0]=a[0];
	for(k=1;k<n;k++){
        for(j=0;j<k;j++){
            if(a[k]!=a[j]){
               // printf(" %d",a[k]);
               if(j==k){
                b[k]=a[k];
               }

            }

        }

		//scanf("%d",&a[i]);
	}
    for(l=0;l<n;l++){
        printf(" %d",b[l]);
    }

	//printf("%d",a[n]);

	return 0;
}
