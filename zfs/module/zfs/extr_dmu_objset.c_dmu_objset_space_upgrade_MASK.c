
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int os_upgrade_lock; scalar_t__ os_upgrade_exit; } ;
typedef TYPE_1__ objset_t ;
typedef int dmu_tx_t ;
typedef int dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(objset_t *VAR_6)
{
 uint64_t VAR_7;
 int VAR_8 = 0;
 for (VAR_7 = 0; VAR_8 == 0; VAR_8 = FUNC_4(VAR_6, &VAR_7, VAR_1, 0)) {
  dmu_tx_t *VAR_9;
  dmu_buf_t *VAR_10;
  int VAR_11;

  FUNC_11(&VAR_6->os_upgrade_lock);
  if (VAR_6->os_upgrade_exit)
   VAR_8 = FUNC_0(VAR_0);
  FUNC_12(&VAR_6->os_upgrade_lock);
  if (VAR_8 != 0)
   return (VAR_8);

  if (FUNC_10(VAR_4) && FUNC_10(VAR_2))
   return (FUNC_0(VAR_0));

  VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_3, &VAR_10);
  if (VAR_11 != 0)
   continue;
  VAR_9 = FUNC_8(VAR_6);
  FUNC_9(VAR_9, VAR_7);
  VAR_11 = FUNC_6(VAR_9, VAR_5);
  if (VAR_11 != 0) {
   FUNC_2(VAR_10, VAR_3);
   FUNC_5(VAR_9);
   continue;
  }
  FUNC_3(VAR_10, VAR_9);
  FUNC_2(VAR_10, VAR_3);
  FUNC_7(VAR_9);
 }
 return (0);
}
