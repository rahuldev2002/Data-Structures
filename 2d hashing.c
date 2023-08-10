#include<stdio.h>
int main(){
int n,m,k,u,v,count=0;
float lf;
scanf("%d%d",&n,&m);
int a[n],b[2*m],c[2*m];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<m;i++){
c[i]=0;
b[i]=0;
}
for(int i=0;i<n;i++){
	float p=m;
k=a[i]%m;
if(c[k]==0){
b[k]=a[i];
c[k]=1;
}
else{
for(int j=0;j<m;j++){
u=k;
v=1+(a[i]%(m-1));
u=(u+j*v)%m;
if(c[u]==0){
b[u]=a[i];
c[u]=1;
break;
}
}
}
lf=(i+1)/p;
if(lf>=0.75){
printf("Load factor is %f at index %d\n",lf,i);
break;
}
}
if(lf>=0.75){
	m=m*2;
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
v=1+(a[i]%(m-1));
u=(u+j*v)%m;
if(c[u]==0){
b[u]=a[i];
c[u]=1;
break;
}	
}
}
}
}
for(int i=0;i<m;i++)
printf("%d ",b[i]);
}
