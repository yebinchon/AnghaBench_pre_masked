
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tq_nalloc; scalar_t__ tq_minalloc; scalar_t__ tq_maxalloc; int tq_lock; int tq_maxalloc_wait; int tq_maxalloc_cv; TYPE_2__* tq_freelist; } ;
typedef TYPE_1__ taskq_t ;
struct TYPE_7__ {int tqent_flags; struct TYPE_7__* tqent_next; } ;
typedef TYPE_2__ taskq_ent_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static taskq_ent_t *
FUNC_6(taskq_t *VAR_3, int VAR_4)
{
 taskq_ent_t *VAR_5;
 int VAR_6;

again: if ((VAR_5 = VAR_3->tq_freelist) != ((void*)0) && VAR_3->tq_nalloc >= VAR_3->tq_minalloc) {
  FUNC_0(!(VAR_5->tqent_flags & VAR_1));
  VAR_3->tq_freelist = VAR_5->tqent_next;
 } else {
  if (VAR_3->tq_nalloc >= VAR_3->tq_maxalloc) {
   if (!(VAR_4 & VAR_0))
    return (((void*)0));
   VAR_3->tq_maxalloc_wait++;
   VAR_6 = FUNC_1(&VAR_3->tq_maxalloc_cv,
       &VAR_3->tq_lock, FUNC_2() + VAR_2);
   VAR_3->tq_maxalloc_wait--;
   if (VAR_6 > 0)
    goto again;
  }
  FUNC_5(&VAR_3->tq_lock);

  VAR_5 = FUNC_3(sizeof (taskq_ent_t), VAR_4);

  FUNC_4(&VAR_3->tq_lock);
  if (VAR_5 != ((void*)0)) {

   VAR_5->tqent_flags = 0;
   VAR_3->tq_nalloc++;
  }
 }
 return (VAR_5);
}
