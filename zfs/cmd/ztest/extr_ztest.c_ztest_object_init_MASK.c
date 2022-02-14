
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ztest_od_t ;
struct TYPE_6__ {int zd_dirobj_lock; int * zd_od; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int
FUNC_5(ztest_ds_t *VAR_0, ztest_od_t *VAR_1, size_t VAR_2, boolean_t VAR_3)
{
 int VAR_4 = VAR_2 / sizeof (*VAR_1);
 int VAR_5 = 0;

 FUNC_0(&VAR_0->zd_dirobj_lock);
 if ((FUNC_3(VAR_0, VAR_1, VAR_4) != 0 || VAR_3) &&
     (FUNC_4(VAR_0, VAR_1, VAR_4) != 0 ||
     FUNC_2(VAR_0, VAR_1, VAR_4) != 0))
  VAR_5 = -1;
 VAR_0->zd_od = VAR_1;
 FUNC_1(&VAR_0->zd_dirobj_lock);

 return (VAR_5);
}
