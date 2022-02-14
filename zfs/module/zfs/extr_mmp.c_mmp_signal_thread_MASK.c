
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mmp_thread_lock; int mmp_thread_cv; scalar_t__ mmp_thread; } ;
struct TYPE_4__ {TYPE_2__ spa_mmp; } ;
typedef TYPE_1__ spa_t ;
typedef TYPE_2__ mmp_thread_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_0)
{
 mmp_thread_t *VAR_1 = &VAR_0->spa_mmp;

 FUNC_1(&VAR_1->mmp_thread_lock);
 if (VAR_1->mmp_thread)
  FUNC_0(&VAR_1->mmp_thread_cv);
 FUNC_2(&VAR_1->mmp_thread_lock);
}
