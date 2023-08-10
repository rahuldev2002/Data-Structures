#include<stdio.h>
int main(){
int n,m,k,u;
scanf("%d%d",&n,&m);
int a[n],b[m],c[m];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<m;i++){
c[i]=0;
b[i]=0;
}
for(int i=0;i<n;i++){
k=a[i]%m;
if(c[k]==0){
b[k]=a[i];
c[k]=1;
}
else{
for(int j=1;j<m;j++){
u=k;
u=(u+j)%m;
if(c[u]==0){
b[u]=a[i];
c[u]=1;
break;
}
}
}
}
for(int i=0;i<m;i++)
printf("%d ",b[i]);
}
