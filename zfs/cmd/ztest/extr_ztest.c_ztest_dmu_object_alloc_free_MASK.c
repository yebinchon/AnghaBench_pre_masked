
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int od_object; } ;
typedef TYPE_1__ ztest_od_t ;
typedef int ztest_ds_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ,size_t) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int,int ,int ,int ,int ) ;
 size_t FUNC_5 (int) ;

void
FUNC_6(ztest_ds_t *VAR_7, uint64_t VAR_8)
{
 ztest_od_t *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = sizeof (ztest_od_t) * VAR_3;
 VAR_9 = FUNC_0(VAR_11, VAR_5);
 VAR_10 = VAR_3;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  FUNC_4(VAR_9 + VAR_12, VAR_8, VAR_2, VAR_12, VAR_1,
      0, 0, 0);





 if (FUNC_3(VAR_7, VAR_9, VAR_11, VAR_0) != 0)
  return;

 while (FUNC_5(4 * VAR_10) != 0)
  FUNC_2(VAR_7, VAR_9[FUNC_5(VAR_10)].od_object,
      FUNC_5(VAR_6) << VAR_4);

 FUNC_1(VAR_9, VAR_11);
}
