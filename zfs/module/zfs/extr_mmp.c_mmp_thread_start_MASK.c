
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int mmp_thread_lock; scalar_t__ mmp_thread; } ;
struct TYPE_7__ {TYPE_2__ spa_mmp; } ;
typedef TYPE_1__ spa_t ;
typedef TYPE_2__ mmp_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,TYPE_1__*,int ,int *,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;

void
FUNC_7(spa_t *VAR_4)
{
 mmp_thread_t *VAR_5 = &VAR_4->spa_mmp;

 if (FUNC_4(VAR_4)) {
  FUNC_1(&VAR_5->mmp_thread_lock);
  if (!VAR_5->mmp_thread) {
   VAR_5->mmp_thread = FUNC_5(((void*)0), 0, VAR_2,
       VAR_4, 0, &VAR_3, VAR_0, VAR_1);
   FUNC_6("MMP thread started pool '%s' "
       "gethrtime %llu", FUNC_3(VAR_4), FUNC_0());
  }
  FUNC_2(&VAR_5->mmp_thread_lock);
 }
}
