
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zd_seq; } ;
typedef TYPE_1__ ztest_shared_ds_t ;
struct TYPE_6__ {int * zd_range_lock; int * zd_object_lock; int zd_dirobj_lock; int zd_zilog_lock; TYPE_1__* zd_shared; int zd_name; int zd_zilog; int * zd_os; } ;
typedef TYPE_2__ ztest_ds_t ;
typedef int objset_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ztest_ds_t *VAR_3, ztest_shared_ds_t *VAR_4, objset_t *VAR_5)
{
 VAR_3->zd_os = VAR_5;
 VAR_3->zd_zilog = FUNC_2(VAR_5);
 VAR_3->zd_shared = VAR_4;
 FUNC_1(VAR_5, VAR_3->zd_name);
 int VAR_6;

 if (VAR_3->zd_shared != ((void*)0))
  VAR_3->zd_shared->zd_seq = 0;

 FUNC_0(FUNC_4(&VAR_3->zd_zilog_lock, ((void*)0)));
 FUNC_3(&VAR_3->zd_dirobj_lock, ((void*)0), VAR_0, ((void*)0));

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_5(&VAR_3->zd_object_lock[VAR_6]);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_5(&VAR_3->zd_range_lock[VAR_6]);
}
