
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tq_nalloc; scalar_t__ tq_minalloc; int tq_free_list; int tqent_list; scalar_t__ tqent_flags; int * tqent_arg; int * tqent_func; int tqent_id; int tqent_waitq; } ;
typedef TYPE_1__ taskq_t ;
typedef TYPE_1__ taskq_ent_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(taskq_t *VAR_1, taskq_ent_t *VAR_2)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);


 FUNC_4(&VAR_2->tqent_waitq);

 FUNC_2(&VAR_2->tqent_list);

 if (VAR_1->tq_nalloc <= VAR_1->tq_minalloc) {
  VAR_2->tqent_id = VAR_0;
  VAR_2->tqent_func = ((void*)0);
  VAR_2->tqent_arg = ((void*)0);
  VAR_2->tqent_flags = 0;

  FUNC_1(&VAR_2->tqent_list, &VAR_1->tq_free_list);
 } else {
  FUNC_3(VAR_1, VAR_2);
 }
}
