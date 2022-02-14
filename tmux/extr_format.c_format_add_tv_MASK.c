
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct format_tree {int tree; } ;
struct format_entry {struct format_entry* value; int t; int * cb; struct format_entry* key; } ;


 struct format_entry* FUNC_0 (int ,int *,struct format_entry*) ;
 int VAR_0 ;
 int FUNC_1 (struct format_entry*) ;
 struct format_entry* FUNC_2 (int) ;
 struct format_entry* FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(struct format_tree *VAR_1, const char *VAR_2, struct timeval *VAR_3)
{
 struct format_entry *VAR_4;
 struct format_entry *VAR_5;

 VAR_4 = FUNC_2(sizeof *VAR_4);
 VAR_4->key = FUNC_3(VAR_2);

 VAR_5 = FUNC_0(VAR_0, &VAR_1->tree, VAR_4);
 if (VAR_5 != ((void*)0)) {
  FUNC_1(VAR_4->key);
  FUNC_1(VAR_4);
  FUNC_1(VAR_5->value);
  VAR_4 = VAR_5;
 }

 VAR_4->cb = ((void*)0);
 VAR_4->t = VAR_3->tv_sec;

 VAR_4->value = ((void*)0);
}
