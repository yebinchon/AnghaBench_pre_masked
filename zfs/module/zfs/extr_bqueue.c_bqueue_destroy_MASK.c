
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bq_lock; int bq_list; int bq_pop_cv; int bq_add_cv; int bq_size; } ;
typedef TYPE_1__ bqueue_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(bqueue_t *VAR_0)
{
 FUNC_4(&VAR_0->bq_lock);
 FUNC_0(VAR_0->bq_size);
 FUNC_1(&VAR_0->bq_add_cv);
 FUNC_1(&VAR_0->bq_pop_cv);
 FUNC_2(&VAR_0->bq_list);
 FUNC_5(&VAR_0->bq_lock);
 FUNC_3(&VAR_0->bq_lock);
}
