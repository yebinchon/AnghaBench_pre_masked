
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ub_timestamp; } ;
typedef TYPE_1__ uberblock_t ;
struct TYPE_9__ {int mmp_seq; int mmp_io_lock; TYPE_1__ mmp_ub; } ;
struct TYPE_8__ {TYPE_3__ spa_mmp; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ mmp_thread_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(spa_t *VAR_1, uberblock_t *VAR_2)
{
 mmp_thread_t *VAR_3 = &VAR_1->spa_mmp;

 FUNC_2(&VAR_3->mmp_io_lock);
 VAR_3->mmp_ub = *VAR_2;
 VAR_3->mmp_seq = 1;
 VAR_3->mmp_ub.ub_timestamp = FUNC_0();
 FUNC_1(VAR_1, VAR_0);
 FUNC_3(&VAR_3->mmp_io_lock);
}
