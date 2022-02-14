
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tq_lock; int tq_nspawn; int tq_lock_class; } ;
typedef TYPE_1__ taskq_t ;


 int FUNC_0 (int *,unsigned long,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 taskq_t *VAR_1 = (taskq_t *)VAR_0;
 unsigned long VAR_2;

 if (FUNC_2(VAR_1) == ((void*)0)) {

  FUNC_0(&VAR_1->tq_lock, VAR_2,
      VAR_1->tq_lock_class);
  VAR_1->tq_nspawn--;
  FUNC_1(&VAR_1->tq_lock, VAR_2);
 }
}
