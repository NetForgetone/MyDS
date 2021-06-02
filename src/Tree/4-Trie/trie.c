/**
 * @file trie.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 26

typedef struct Trie
{
	struct Trie *child[26];
	int end;

} Trie;


Trie* TrieCreate()
{
	Trie *t = (Trie *)malloc(sizeof(Trie));
	memset(t, 0, sizeof(Trie));
	t->end = 0;
	return t;
}

/* inserts a word into the trie */
void TrieInsert(Trie* obj ,char* word)
{
	while (*word)
	{
		if (!obj->child[*word - 'a'])
			obj->child[*word - 'a'] = TrieCreate();
		obj = obj->child[*word - 'a'];
		++word;
	}
	obj->end = 1;
}

/* Return  if the word is in thse trie */
bool TrieSearch(Trie* obj, char* word)
{
	while(*word)
	{
		//判断是否有字符
		if(!obj->child[*word- 'a'])
			return false;
		obj = obj->child[*word - 'a'];
		word++;
	}
	return (obj->end);
}

/** Returns if there is any word in the trie 
 * that starts with the given prefix. */
bool TrieStartWith(Trie*  obj, char* prefix)
{
	while(*prefix)
	{
		if(!obj->child[*prefix-'a'])
			return false;
		obj = obj->child[*prefix - 'a'];
		prefix++;
	}
	return true;
}

void TrieFree(Trie* obj)
{
	int i;
	if(!obj)
		return;
	for (i = 0; i < 26;i++)
	{
		if(obj->child[i])
			TrieFree(obj->child[i]);
	}
	free(obj);
}