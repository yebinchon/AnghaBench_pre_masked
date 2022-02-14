
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pl_user_prop; struct TYPE_4__* pl_next; } ;
typedef TYPE_1__ zprop_list_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(zprop_list_t *VAR_0)
{
 zprop_list_t *VAR_1;

 while (VAR_0 != ((void*)0)) {
  VAR_1 = VAR_0->pl_next;
  FUNC_0(VAR_0->pl_user_prop);
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
