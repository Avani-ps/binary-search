#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node*creatNode(int value)
{
struct node*newNode;
newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct node*insert(struct node*root,int value)
{
if(root==NULL)
return creatNode(value);
if(value<root->data)
root->left=insert(root->left,value);
else if(value<root->data)
root->right= insert(root->data);
root->right=insert(root->right,value);
else
printf("Duplicate element are not allowed.\n);
return root;
}
void inorder(struct node*root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d",root->data);
inoder(root->right):
}
}
void preorder(struct node*root)
{
if(root!=NULL)
{
postoder(root->left);
postorder(root->right);
printf("%",root->data);
}
}
struct node*deletenode(struct node*root,int value)
{
struct node*temp;
if(root==NULL)
{
print(Element not found!\n");
return NULL;
}
if(value<root->data)
root->left=deletenode(root->right,value);
else
{
  if(root->left==NULL&&root->right==NULL)
{
free(root);
return NULL;
}
else if(root->left==NULL)
}
temp=root->right;
free(root);
return temp;
}
else
{
temp=findMin(root->right);
root->data=temp->data;
root->right=deleteNode(root_>right,temp->data);
}
}
return root;
}
int main()
{
struct node*root=NULL;
int choice,value;
do
{
printf("\n--Binary Search Tree--\n");
printf("1.Insert\n");
printf("2.Inorder Traversal\n");
printf("3.Preorder Travesal\n");
printf("4.Postorder traversal\n");
printf("5.Delete a Node\n");
printf("6.Exit\n");
printf("Enter value to insert:");
scanf("%d",&choice);
Switch(choice);
{
 case 1:
 printf("Enter value tominsert:");
 scanf("%d",&value);
 root=insert(root,value);
 break;
 case 2:
 printf("Inorder Traversal:");
 inorder(root);
 printf("\n");
 break;
 case 3:
 printf("Preorder Traversal:");
 preorder(root);
 printf("\n");
 break;
 case 4:
 printf("Postorder Traversal:");
 Postorder(root);
 printf("/n");
 break;
 case 5:
 printf("Enter value to delete:");
 scanf("%d",value);
 root=deleteNode(root,value);
 break;
 case 6:
 printf("Exiting program...\n");
}
}
while(choice!=6);
return 0;
}

