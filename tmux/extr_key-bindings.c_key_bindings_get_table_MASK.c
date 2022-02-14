
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_table {char const* name; int references; int key_bindings; } ;


 struct key_table* FUNC_0 (int ,int *,struct key_table*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,struct key_table*) ;
 int VAR_0 ;
 struct key_table* FUNC_3 (int) ;
 char const* FUNC_4 (char const*) ;

struct key_table *
FUNC_5(const char *VAR_1, int VAR_2)
{
 struct key_table VAR_3, *VAR_4;

 VAR_3.name = VAR_1;
 VAR_4 = FUNC_0(VAR_0, &VAR_0, &VAR_3);
 if (VAR_4 != ((void*)0) || !VAR_2)
  return (VAR_4);

 VAR_4 = FUNC_3(sizeof *VAR_4);
 VAR_4->name = FUNC_4(VAR_1);
 FUNC_1(&VAR_4->key_bindings);

 VAR_4->references = 1;
 FUNC_2(VAR_0, &VAR_0, VAR_4);

 return (VAR_4);
}
