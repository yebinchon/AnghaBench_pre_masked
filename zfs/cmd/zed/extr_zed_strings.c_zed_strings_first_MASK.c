
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iteratorp; int tree; } ;
typedef TYPE_1__ zed_strings_t ;
struct TYPE_5__ {char const* val; } ;
typedef TYPE_2__ zed_strings_node_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;

const char *
FUNC_1(zed_strings_t *VAR_2)
{
 if (!VAR_2) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }
 VAR_2->iteratorp = FUNC_0(&VAR_2->tree);
 if (!VAR_2->iteratorp)
  return (((void*)0));

 return (((zed_strings_node_t *)VAR_2->iteratorp)->val);

}
