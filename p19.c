.#include<stdio.h>
void main(){
int n,i,j;
printf("Enter rows:");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
if(j%2==1)
printf(" 1");
else
printf(" 0");
}
printf("\n");
}}
2.#include<stdio.h>
int main(){
int diff=6,i,j,x;
for(i=1;i<=9;i++)
printf("%d",i);
printf("\n");
for(i=2;i<=5;i++){
for(j=1;j<i;j++){
printf(" ");
}
printf("%d",i);
for(x=1;x<diff;x++)
printf(" ")

if(diff>0){
printf("%d\n",diff+i);
diff-=2;
}
}
}

3.
#include <stdio.h>
int main() {
int n = 5, i, s, j, k;
for (i = 1; i <= n; i++) {
k = n - i + 1;
for (s = 1; s < i; s++) {
printf(" ");
}
for (j = k; j >= 1; j--) {
printf("%d", j);
}

for (j = 2; j <= k; j++) {
printf("%d", j);
}
printf("\n");
}
for (i = 2; i <= n; i++){
for (s = 0; s < n-i; s++) {
printf(" ");
}
for (j = i; j >= 1; j--) {
printf("%d", j);
}
for (j = 2; j <= i; j++) {
printf("%d", j);
}
printf("\n");
}
}
4.
#include<stdio.h>
int main()
{
int n=4;
for(int i=1; i<=n; i++) {
for(int s=1; s<=n-i; s++) {
printf(" ");
}
for(int j=1; j<=i; j++) {
printf("%c", 'A'+j-1);
}
for(int j=i-1; j>=1; j--) {
printf("%c", 'A' +j-1);
}
printf("\n");
}
for(int i =n-1; i>=1; i--) {
for(int s=1; s<=n-i; s++) {
printf(" ");
}
for(int j=1; j<=i; j++) {
printf("%c", 'A' +j-1);
}
for(int j=i-1; j>=1; j--) {
printf("%c", 'A'+j-1);
}
printf("\n");
}
}
