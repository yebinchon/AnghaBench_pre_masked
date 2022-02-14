
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zd_zilog; int zd_dirobj_lock; int zd_zilog_lock; int * zd_os; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef int uint64_t ;
typedef int objset_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_8(ztest_ds_t *VAR_3, uint64_t VAR_4)
{
 objset_t *VAR_5 = VAR_3->zd_os;






 FUNC_1(&VAR_2);






 FUNC_1(&VAR_3->zd_dirobj_lock);
 (void) FUNC_4(&VAR_3->zd_zilog_lock);


 FUNC_5(VAR_3->zd_zilog);


 FUNC_0(FUNC_6(VAR_5, VAR_0) == VAR_3->zd_zilog);
 FUNC_7(VAR_5, VAR_3, VAR_1);

 (void) FUNC_3(&VAR_3->zd_zilog_lock);
 FUNC_2(&VAR_3->zd_dirobj_lock);
 FUNC_2(&VAR_2);
}
