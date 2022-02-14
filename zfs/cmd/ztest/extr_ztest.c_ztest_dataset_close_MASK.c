
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zd_os; int zd_zilog; } ;
typedef TYPE_1__ ztest_ds_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(int VAR_2)
{
 ztest_ds_t *VAR_3 = &VAR_1[VAR_2];

 FUNC_1(VAR_3->zd_zilog);
 FUNC_0(VAR_3->zd_os, VAR_0, VAR_3);

 FUNC_2(VAR_3);
}
