/**
 * @file Trie.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _TRIE_H
#define _TRIE_H

#include <stdio.h>
#define MAX 25

typedef struct Trie
{
	struct Trie *child[25];
	int end;

} Trie;

void TrieFree(Trie *obj);
bool TrieStartWith(Trie *obj, char *prefix);
bool TrieSearch(Trie *obj, char *word);
void TrieInsert(Trie *obj, char *word);
Trie *TrieCreate(void);
#endif