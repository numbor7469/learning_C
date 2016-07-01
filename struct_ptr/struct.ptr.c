/*
 * =====================================================================================
 *
 *       Filename:  struct.ptr.c
 *
 *    Description:  test for struct ptr;
 *
 *        Version:  1.0
 *        Created:  06/28/2016 17:17:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100
struct tnode {
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
};

struct tnode *add_tree(struct tnode *, char *);
void tree_print(struct tnode *);
int get_word(char *, int);

int main() {
	struct tnode *root;
	char word[MAXWORD];

	root = NULL;
	//'\t' is just for indicate the end 
	while (get_word(word, MAXWORD) != -1)
		if (isalpha(word[0]))
			root = add_tree(root, word);
	tree_print(root);
	return 0;
}

struct tnode *talloc(void);
char *str_dump(char *);

struct tnode *add_tree(struct tnode *p, char *w)
{
	int cond;

	if (p == NULL) {
		p = talloc();
		p->word = str_dump(w);
		p->count = 1;
		p->left = p->right = NULL;
	} else if ((cond = strcmp(w, p->word)) == 0)
		p->count++;
	else if (cond < 0)
		p->left = add_tree(p->left, w);
	else
		p->right = add_tree(p->right, w);
	return p;
}


void tree_print(struct tnode *p)
{
	if (p != NULL) {
		tree_print(p->left);
		printf("%4d %s\n", p->count, p->word);
		tree_print(p->right);
	}
}


#include <stdlib.h>

struct tnode *talloc(void) 
{
	return (struct tnode *) malloc(sizeof(struct tnode));
}

char *str_dump(char *s)
{
	char *p;

	p = (char *) malloc(strlen(s) + 1);
	if (p != NULL)
		strcpy(p, s);
	return p;
}

int get_word(char *word, int max_word)
{
	int i, c;

	for (i = 0; i < max_word; ++i){
		while ((c = getchar()) != '\n' && c != '\t' && c != ' ')
			strcat(&word[i], (const char *)&c);
		if (c == '\t')
			return -1;
	}
	return i;
}
