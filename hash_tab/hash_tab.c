/*
 * =====================================================================================
 *
 *       Filename:  hash_tab.c
 *
 *    Description:  it's a list
 *
 *        Version:  1.0
 *        Created:  07/01/2016 23:19:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jasen (), numbor7469@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <string.h>

struct list_node {
	struct list_node *next;
	char *name;
	char *defn;
};

#define HASHSIZE 101
static struct list_node *hash_tab[HASHSIZE];

unsigned hash(char *s)
{
	unsigned hash_val;

	for (hash_val = 0; *s != '\0'; s++)
		hash_val = *s + 31 *hash_val;
	return hash_val % HASHSIZE;
}

struct list_node *look_up(char *s)
{
	struct list_node *np;

	for (np = hash_tab[hash(s)]; np != NULL; np = np->next)
		if (strcmp(s, np->name) == 0)
			return np;
	return NULL;
}

char *str_dump(char *);

struct list_node *install(char *name, char *defn)
{
	struct list_node *np;
	unsigned hash_val;

	if ((np = look_up(name)) != NULL) {
		np = (struct list_node *) malloc(sizeof(*np));
		if (np == NULL || (np->name = str_dump(name)) == NULL)
			return NULL;
		hash_val = hash(name);
		np->next = hash_tab[hash_val];
		hash_tab[hash_val] = np;
	} else
		free((void *) np->defn);
	if ((np->defn = str_dump(defn)) == NULL)
		return NULL;
	return np;
}


char *str_dump(char *s)
{
	char *p = (char *)malloc(strlen(s) + 1);
	if (p != NULL)
		strcpy(p, s);
	return p;
}
