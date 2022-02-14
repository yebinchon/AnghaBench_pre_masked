
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct args_value {int value; } ;
struct args_entry {int count; int values; int flag; } ;
struct args {int tree; } ;


 int FUNC_0 (int ,int *,struct args_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct args_value*,struct args_entry*) ;
 struct args_entry* FUNC_3 (struct args*,int ) ;
 int VAR_0 ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (char const*) ;

void
FUNC_6(struct args *VAR_1, u_char VAR_2, const char *VAR_3)
{
 struct args_entry *VAR_4;
 struct args_value *VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_4(1, sizeof *VAR_4);
  VAR_4->flag = VAR_2;
  VAR_4->count = 1;
  FUNC_1(&VAR_4->values);
  FUNC_0(VAR_0, &VAR_1->tree, VAR_4);
 } else
  VAR_4->count++;

 if (VAR_3 != ((void*)0)) {
  VAR_5 = FUNC_4(1, sizeof *VAR_5);
  VAR_5->value = FUNC_5(VAR_3);
  FUNC_2(&VAR_4->values, VAR_5, VAR_4);
 }
}
