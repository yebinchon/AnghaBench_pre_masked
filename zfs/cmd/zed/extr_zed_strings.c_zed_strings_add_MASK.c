
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tree; } ;
typedef TYPE_1__ zed_strings_t ;
typedef int zed_strings_node_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;

int
FUNC_5(zed_strings_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
 zed_strings_node_t *VAR_5, *VAR_6;

 if (!VAR_2 || !VAR_4) {
  VAR_1 = VAR_0;
  return (-1);
 }
 if (VAR_3 == VAR_4)
  VAR_3 = ((void*)0);

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_5)
  return (-1);

 VAR_6 = FUNC_3(&VAR_2->tree, VAR_5, ((void*)0));
 if (VAR_6) {
  FUNC_4(&VAR_2->tree, VAR_6);
  FUNC_1(VAR_6);
 }
 FUNC_2(&VAR_2->tree, VAR_5);
 return (0);
}
