
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int od_object; } ;
typedef TYPE_1__ ztest_od_t ;
typedef int ztest_ds_t ;
typedef unsigned long long uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ,unsigned long long) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ,int ,int ,int ) ;
 unsigned long long FUNC_5 (int) ;

void
FUNC_6(ztest_ds_t *VAR_7, uint64_t VAR_8)
{
 ztest_od_t *VAR_9;

 VAR_9 = FUNC_0(sizeof (ztest_od_t), VAR_5);
 uint64_t VAR_10 = (1ULL << (FUNC_5(20) + 43)) +
     (FUNC_5(VAR_6) << VAR_4);






 FUNC_4(VAR_9, VAR_3, VAR_2, 0, VAR_1, 0, 0, 0);

 if (FUNC_3(VAR_7, VAR_9, sizeof (ztest_od_t), VAR_0) != 0)
  return;

 while (FUNC_5(10) != 0)
  FUNC_2(VAR_7, VAR_9->od_object, VAR_10);

 FUNC_1(VAR_9, sizeof (ztest_od_t));
}
