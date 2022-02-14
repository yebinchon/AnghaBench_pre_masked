
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tq_nalloc; scalar_t__ tq_minalloc; int tq_maxalloc_cv; scalar_t__ tq_maxalloc_wait; int tq_lock; TYPE_2__* tq_freelist; } ;
typedef TYPE_1__ taskq_t ;
struct TYPE_7__ {struct TYPE_7__* tqent_next; } ;
typedef TYPE_2__ taskq_ent_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(taskq_t *VAR_0, taskq_ent_t *VAR_1)
{
 if (VAR_0->tq_nalloc <= VAR_0->tq_minalloc) {
  VAR_1->tqent_next = VAR_0->tq_freelist;
  VAR_0->tq_freelist = VAR_1;
 } else {
  VAR_0->tq_nalloc--;
  FUNC_3(&VAR_0->tq_lock);
  FUNC_1(VAR_1, sizeof (taskq_ent_t));
  FUNC_2(&VAR_0->tq_lock);
 }

 if (VAR_0->tq_maxalloc_wait)
  FUNC_0(&VAR_0->tq_maxalloc_cv);
}
