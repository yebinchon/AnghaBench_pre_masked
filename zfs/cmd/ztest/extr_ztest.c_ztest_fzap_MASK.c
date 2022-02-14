
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ od_object; } ;
typedef TYPE_1__ ztest_od_t ;
struct TYPE_10__ {int * zd_os; } ;
typedef TYPE_2__ ztest_ds_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;
typedef int name ;
typedef int dmu_tx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int ,char*) ;
 int FUNC_4 (char*,int,char*,int ,int ) ;
 TYPE_1__* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *,scalar_t__,char*,int,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_1__*,int,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;

void
FUNC_12(ztest_ds_t *VAR_7, uint64_t VAR_8)
{
 objset_t *VAR_9 = VAR_7->zd_os;
 ztest_od_t *VAR_10;
 uint64_t VAR_11, VAR_12;
 int VAR_13;

 VAR_10 = FUNC_5(sizeof (ztest_od_t), VAR_5);
 FUNC_9(VAR_10, VAR_8, VAR_3, 0, VAR_1, 0, 0, 0);

 if (FUNC_8(VAR_7, VAR_10, sizeof (ztest_od_t),
     !FUNC_10(2)) != 0)
  goto out;
 VAR_11 = VAR_10->od_object;






 for (VAR_13 = 0; VAR_13 < 2050; VAR_13++) {
  char VAR_14[VAR_6];
  uint64_t VAR_15 = VAR_13;
  dmu_tx_t *VAR_16;
  int VAR_17;

  (void) FUNC_4(VAR_14, sizeof (VAR_14), "fzap-%llu-%llu",
      (u_longlong_t)VAR_8, (u_longlong_t)VAR_15);

  VAR_16 = FUNC_2(VAR_9);
  FUNC_3(VAR_16, VAR_11, VAR_0, VAR_14);
  VAR_12 = FUNC_11(VAR_16, VAR_4, VAR_3);
  if (VAR_12 == 0)
   goto out;
  VAR_17 = FUNC_7(VAR_9, VAR_11, VAR_14, sizeof (uint64_t), 1,
      &VAR_15, VAR_16);
  FUNC_0(VAR_17 == 0 || VAR_17 == VAR_2);
  FUNC_1(VAR_16);
 }
out:
 FUNC_6(VAR_10, sizeof (ztest_od_t));
}
