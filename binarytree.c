#include <stdio.h>
#include "binarytree.h"

node_t *root=NULL;

void add(int data)
{
	node_t *tmp = (node_t*)malloc(sizeof(node_t)*1);
	if(tmp==NULL) return;

 	tmp->data=data;
	tmp->left=NULL;
 	tmp->right=NULL;
	
	if(root==NULL)
	{
		root = tmp;
	}
	else
	{	
		node_t *node=root;
		while(node != NULL)
		{
			if(data < node->data)
			{
				if(node->left==NULL)
				{
					node->left=tmp;
					break;
				}
				else
				{
					node=node->left;
				}
			}
			else
			{
				if(node->right==NULL)
				{
					node->right=tmp;
					break;
				}
				else
				{
					node=node->right;
				}
			}	
		}
	}	
}

void list_r(node_t *node)
{
	int i,sp;
	if(node==NULL) return;
	printf("[");
	printf("(%d) ",node->data);
	if(node->left)
	{
		printf("L:");
		list_r(node->left);
	}
	if(node->right)
	{
		printf("R:");
		list_r(node->right);
	}
	printf("] ");
}

void list()
{
	list_r(root);	
}

int count(node_t *node)
{
	int say=0;
	if(node==NULL) return 0;
	if(node->left!=NULL) say++;
	say+=count(node->left);
	if(node->right!=NULL) say++;
	say+=count(node->right);
	return say;
}
