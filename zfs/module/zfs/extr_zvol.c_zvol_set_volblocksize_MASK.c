
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zv_flags; int zv_suspend_lock; int zv_state_lock; int zv_volblocksize; int zv_objset; } ;
typedef TYPE_1__ zvol_state_t ;
typedef int uint64_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (char const*,int ) ;

int
FUNC_13(const char *VAR_8, uint64_t VAR_9)
{
 zvol_state_t *VAR_10;
 dmu_tx_t *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_12(VAR_8, VAR_4);

 if (VAR_10 == ((void*)0))
  return (FUNC_3(VAR_2));

 FUNC_0(FUNC_1(&VAR_10->zv_state_lock));
 FUNC_0(FUNC_2(&VAR_10->zv_suspend_lock));

 if (VAR_10->zv_flags & VAR_7) {
  FUNC_10(&VAR_10->zv_state_lock);
  FUNC_11(&VAR_10->zv_suspend_lock);
  return (FUNC_3(VAR_3));
 }

 VAR_11 = FUNC_8(VAR_10->zv_objset);
 FUNC_9(VAR_11, VAR_6);
 VAR_12 = FUNC_6(VAR_11, VAR_5);
 if (VAR_12) {
  FUNC_5(VAR_11);
 } else {
  VAR_12 = FUNC_4(VAR_10->zv_objset, VAR_6,
      VAR_9, 0, VAR_11);
  if (VAR_12 == VAR_1)
   VAR_12 = FUNC_3(VAR_0);
  FUNC_7(VAR_11);
  if (VAR_12 == 0)
   VAR_10->zv_volblocksize = VAR_9;
 }

 FUNC_10(&VAR_10->zv_state_lock);
 FUNC_11(&VAR_10->zv_suspend_lock);

 return (FUNC_3(VAR_12));
}
