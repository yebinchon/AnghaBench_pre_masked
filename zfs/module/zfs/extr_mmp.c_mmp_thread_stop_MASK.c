
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mmp_thread_exiting; int * mmp_thread; int mmp_thread_lock; int mmp_thread_cv; } ;
struct TYPE_5__ {TYPE_2__ spa_mmp; } ;
typedef TYPE_1__ spa_t ;
typedef TYPE_2__ mmp_thread_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int ,int ) ;

void
FUNC_8(spa_t *VAR_0)
{
 mmp_thread_t *VAR_1 = &VAR_0->spa_mmp;

 FUNC_4(&VAR_1->mmp_thread_lock);
 VAR_1->mmp_thread_exiting = 1;
 FUNC_1(&VAR_1->mmp_thread_cv);

 while (VAR_1->mmp_thread) {
  FUNC_2(&VAR_1->mmp_thread_cv, &VAR_1->mmp_thread_lock);
 }
 FUNC_5(&VAR_1->mmp_thread_lock);
 FUNC_7("MMP thread stopped pool '%s' gethrtime %llu",
     FUNC_6(VAR_0), FUNC_3());

 FUNC_0(VAR_1->mmp_thread == ((void*)0));
 VAR_1->mmp_thread_exiting = 0;
}
