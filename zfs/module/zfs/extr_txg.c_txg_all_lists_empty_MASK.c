
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tl_lock; } ;
typedef TYPE_1__ txg_list_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;

boolean_t
FUNC_3(txg_list_t *VAR_3)
{
 FUNC_0(&VAR_3->tl_lock);
 for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_2(VAR_3, VAR_4)) {
   FUNC_1(&VAR_3->tl_lock);
   return (VAR_0);
  }
 }
 FUNC_1(&VAR_3->tl_lock);
 return (VAR_1);
}
