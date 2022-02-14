
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spa_t ;
typedef int nvlist_t ;
typedef int dmu_tx_t ;
struct TYPE_3__ {int dp_mos_dir; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int ,int ,int *) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int **,int ) ;
 int FUNC_12 (int *,int ,int **) ;
 int FUNC_13 (int *,int ) ;
 TYPE_1__* FUNC_14 (int *) ;
 int VAR_9 ;
 int * FUNC_15 () ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int
FUNC_18(spa_t *VAR_10, nvlist_t *VAR_11)
{
 int VAR_12 = 0;
 dmu_tx_t *VAR_13;
 nvlist_t *VAR_14, *VAR_15 = ((void*)0);

 if (FUNC_16(VAR_10) < VAR_2 || !FUNC_17(VAR_10))
  return (FUNC_1(VAR_0));

 VAR_12 = FUNC_12(VAR_11, VAR_6, &VAR_15);
 if (VAR_12 == 0) {
  (void) FUNC_13(VAR_15, VAR_5);
 }

 VAR_13 = FUNC_7(FUNC_14(VAR_10)->dp_mos_dir);
 VAR_12 = FUNC_5(VAR_13, VAR_3);
 if (VAR_12) {
  FUNC_4(VAR_13);
  return (VAR_12);
 }

 FUNC_2(FUNC_11(VAR_11, &VAR_14, VAR_1));
 if (FUNC_15() != ((void*)0)) {
  FUNC_9(VAR_14, VAR_8,
      FUNC_15());
 }
 FUNC_10(VAR_14, VAR_7, FUNC_3(FUNC_0()));


 FUNC_8(FUNC_14(VAR_10), VAR_9,
     VAR_14, 0, VAR_4, VAR_13);
 FUNC_6(VAR_13);


 return (VAR_12);
}
