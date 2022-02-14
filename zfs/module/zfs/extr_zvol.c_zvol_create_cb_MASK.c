
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * zct_props; } ;
typedef TYPE_1__ zfs_creat_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
typedef int dmu_tx_t ;
typedef int cred_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_6 (int *,int ,char*,int,int,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(objset_t *VAR_7, void *VAR_8, cred_t *VAR_9, dmu_tx_t *VAR_10)
{
 zfs_creat_t *VAR_11 = VAR_8;
 nvlist_t *VAR_12 = VAR_11->zct_props;
 int VAR_13;
 uint64_t VAR_14, VAR_15;

 FUNC_1(FUNC_3(VAR_12,
     FUNC_8(VAR_4), &VAR_15) == 0);
 if (FUNC_3(VAR_12,
     FUNC_8(VAR_3), &VAR_14) != 0)
  VAR_14 = FUNC_7(VAR_3);





 FUNC_1(FUNC_4(VAR_12,
     FUNC_8(VAR_4)) == 0);
 (void) FUNC_4(VAR_12,
     FUNC_8(VAR_3));

 VAR_13 = FUNC_2(VAR_7, VAR_5, VAR_1, VAR_14,
     VAR_0, 0, VAR_10);
 FUNC_0(VAR_13 == 0);

 VAR_13 = FUNC_5(VAR_7, VAR_6, VAR_2,
     VAR_0, 0, VAR_10);
 FUNC_0(VAR_13 == 0);

 VAR_13 = FUNC_6(VAR_7, VAR_6, "size", 8, 1, &VAR_15, VAR_10);
 FUNC_0(VAR_13 == 0);
}
