#ifndef __MYLIST_H__
#define __MYLIST_H__

#include <stdlib.h>
#include <stdio.h>


typedef struct llligada *LList;
typedef struct mylist *MYLIST;

MYLIST 	init_MYLIST			(void * f_comp,void * dest_key,void * dest_data);
void 	free_MYLIST			(MYLIST r);
LList 	create_box			(void * key,void * data);
int 	search_list			(MYLIST pai,void * key);
MYLIST 	insere_list			(MYLIST r,void * key,void * data);
void * 	getElemente_LList	(LList r);
LList 	getNext_LList		(LList r);
LList 	getFirst_BOX		(MYLIST r);
int 	get_NUM_ele			(MYLIST r);

#endif
