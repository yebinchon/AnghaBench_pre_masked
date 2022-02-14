
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mmp_kstat_id; int mmp_delay; int mmp_last_write; int mmp_io_lock; int mmp_thread_cv; int mmp_thread_lock; } ;
struct TYPE_4__ {TYPE_2__ spa_mmp; } ;
typedef TYPE_1__ spa_t ;
typedef TYPE_2__ mmp_thread_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int VAR_2 ;

void
FUNC_5(spa_t *VAR_3)
{
 mmp_thread_t *VAR_4 = &VAR_3->spa_mmp;

 FUNC_4(&VAR_4->mmp_thread_lock, ((void*)0), VAR_1, ((void*)0));
 FUNC_2(&VAR_4->mmp_thread_cv, ((void*)0), VAR_0, ((void*)0));
 FUNC_4(&VAR_4->mmp_io_lock, ((void*)0), VAR_1, ((void*)0));
 VAR_4->mmp_kstat_id = 1;






 VAR_4->mmp_last_write = FUNC_3();
 VAR_4->mmp_delay = FUNC_1(FUNC_0(VAR_2));
}
