
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tl_lock; } ;
typedef TYPE_1__ txg_list_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;

void
FUNC_5(txg_list_t *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_1->tl_lock);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(FUNC_4(VAR_1, VAR_2));
 FUNC_3(&VAR_1->tl_lock);

 FUNC_1(&VAR_1->tl_lock);
}
