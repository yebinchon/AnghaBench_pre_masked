
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t tl_offset; int ** tl_head; int * tl_spa; int tl_lock; } ;
typedef TYPE_1__ txg_list_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *) ;

void
FUNC_1(txg_list_t *VAR_2, spa_t *VAR_3, size_t VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_2->tl_lock, ((void*)0), VAR_0, ((void*)0));

 VAR_2->tl_offset = VAR_4;
 VAR_2->tl_spa = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_2->tl_head[VAR_5] = ((void*)0);
}
