
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* val; void* key; } ;
typedef TYPE_1__ zed_strings_node_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 void* FUNC_3 (char const*) ;

zed_strings_node_t *
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 zed_strings_node_t *VAR_2;

 FUNC_1(VAR_1 != ((void*)0));

 VAR_2 = FUNC_2(1, sizeof (*VAR_2));
 if (!VAR_2)
  return (((void*)0));

 VAR_2->val = FUNC_3(VAR_1);
 if (!VAR_2->val)
  goto nomem;

 if (VAR_0) {
  VAR_2->key = FUNC_3(VAR_0);
  if (!VAR_2->key)
   goto nomem;
 } else {
  VAR_2->key = VAR_2->val;
 }
 return (VAR_2);

nomem:
 FUNC_0(VAR_2);
 return (((void*)0));
}
