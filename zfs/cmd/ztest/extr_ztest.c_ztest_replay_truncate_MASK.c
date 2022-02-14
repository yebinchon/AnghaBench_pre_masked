
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * zd_os; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef scalar_t__ uint64_t ;
typedef int rl_t ;
typedef int objset_t ;
struct TYPE_10__ {int lr_foid; int lr_length; int lr_offset; } ;
typedef TYPE_2__ lr_truncate_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int * FUNC_9 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_12(void *VAR_5, void *VAR_6, boolean_t VAR_7)
{
 ztest_ds_t *VAR_8 = VAR_5;
 lr_truncate_t *VAR_9 = VAR_6;
 objset_t *VAR_10 = VAR_8->zd_os;
 dmu_tx_t *VAR_11;
 uint64_t VAR_12;
 rl_t *VAR_13;

 if (VAR_7)
  FUNC_1(VAR_9, sizeof (*VAR_9));

 FUNC_7(VAR_8, VAR_9->lr_foid, VAR_2);
 VAR_13 = FUNC_9(VAR_8, VAR_9->lr_foid, VAR_9->lr_offset, VAR_9->lr_length,
     VAR_3);

 VAR_11 = FUNC_4(VAR_10);

 FUNC_5(VAR_11, VAR_9->lr_foid, VAR_9->lr_offset, VAR_9->lr_length);

 VAR_12 = FUNC_11(VAR_11, VAR_4, VAR_1);
 if (VAR_12 == 0) {
  FUNC_10(VAR_13);
  FUNC_8(VAR_8, VAR_9->lr_foid);
  return (VAR_0);
 }

 FUNC_0(FUNC_2(VAR_10, VAR_9->lr_foid, VAR_9->lr_offset,
     VAR_9->lr_length, VAR_11) == 0);

 (void) FUNC_6(VAR_8, VAR_11, VAR_9);

 FUNC_3(VAR_11);

 FUNC_10(VAR_13);
 FUNC_8(VAR_8, VAR_9->lr_foid);

 return (0);
}
