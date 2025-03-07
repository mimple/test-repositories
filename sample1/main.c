#include <stdio.h>

// void func(int b[]) {
//   b[0] = 10;
// }

// アドレスに足し算をする
// int main(){
//   char c[] = {'a', 'b', 'c', '\0'};
//   char *p = c;
//   printf("%c\n", *p+1);
//   return 0;
// }

void func(int b) {
  b = 2;
}

int main(){
  int a = 1;

  func(a);

  printf("%d\n", a);

  return 0;
}

// 配列を結合する
// int main() {
//   char arr1[] = {'v', 'a', 'l', 'u', 'u', 'p', '\0'};
//   char arr2[] = {'m', 'i', 'm', 'p', 'l', 'e', '\0'};

//   char str[13];

//   for(int i = 0; i < 6; i++) {
//     str[i] = arr1[i];
//   }
//   // printf("%s", str);
//   for(int i = 0; i < 7; i++) {
//     str[i + 6] = arr2[i];
//   }
//   printf("%s", str);

//   return 0;
// }

// // 構造体を作る
// typedef struct node {
//   int date;
//   struct node* next;
// } Node;

// void push(Node* n, int data) {
//   // リストの先頭のアドレスを受け取って、そのリストの最後に新しい要素を追加する
// }

// int main() {
//   Node* n;
//   Node* current;
//   n = (Node*)malloc(sizeof(Node));
//   n->date = 0;
//   n->next = NULL;
//   current = n;

//   for(int i = 0; i < 10; i++) {
//     push(n, i);
//   }
// }

// int main() {
//   Node n;
//   n.date = 5;
//   n.next = NULL;

//   Node n2;
//   n2.date = 10;
//   n2.next = NULL;
//   n.next = &n2;

//   Node current;
//   current = &n;


// }


// int sum(int q, int w) {
//   //戻り値も方を決める
//   return q + w;
// }
// メインでないとダメ
// 変数は全て型に入る
// int main(){

//   int q = sum();

//   int a = 10;
//   char b = 'A';
//   float c = 3.14;
//   a = a % 3;
//   printf("Hello, %d %f %a %cWorld!\n",a,c,b); // fはformat
//   // dは文字　fフロート
//   if(){

//   }
//   else if (){

//   }
//   else {

//   }
//   for (int i = 0; i < 10; i++) {
//     printf(i);
//   }
//   while (i < 10){
//     printf("%d",)
//   }

//   do {

//   }while ()

//   // 配列
//   int a[4] = {1, 2, 3, 4}; 
//   int a[] = {1, 2, 3, 4}; 

//   return 0;// 正常終了の意味
// }