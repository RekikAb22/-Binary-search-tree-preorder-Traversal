/*  Binary search tree preorder raversal


        
 Rekik Abere   Oct 26, 2021
*/

#include<iostream>
#include<conio.h>
#include<String.h>
#include<stdlib.h>
using namespace std;

struct tree{
int data;
tree *left;
tree *right;
};
tree *node,*root=NULL;

void insertNode(tree *nd){
if(root==NULL){
root=node;
root->left=NULL;
root->right=NULL;
}
else{

if(node->data < nd->data){
if(nd->left==NULL)
nd->left=node;
else
insertNode(nd->left);
}
else{
if(nd->right==NULL)
nd->right=node;
else
insertNode(nd->right);
}
} 

}

void preorder(tree *nd){
 
 if(root==NULL)
{
  cout<<"list is empty!";
 return;
}
 if(nd==NULL)
 return;
 
 cout<<nd->data<<" ";
 preorder(nd->left);
 preorder(nd->right);
}

int main() 
{ 

char exitchoice;
char choice;
do{

cout<<"\t\t**Binary Search Tree**\n";
cout<<"1.Insert\n2.Display preorder\n3.Exit\n";
cout<<"-> ";
cin>>choice;

int num;
switch(choice){
case '1':
cout<<"how many nodes do u want to insert ? -> ";
cin>>num;
for(int i=0;i<num;i++){
node = new tree; // creat 
cout<<"enter data ("<<i+1<<") : ";
cin>>node->data;
node->left=NULL;
node->right=NULL;
insertNode(root);
}
cout<<"Node(s) inserted successfully !\n";
break;

case '2': {
	preorder(root);
	cout<<endl;
	break;
}


case '3':
exit(0);
break;
}
cout<<"\nContinue ? (y/n)" ;
cin>>exitchoice;

}while(exitchoice=='y');
getch();
}



