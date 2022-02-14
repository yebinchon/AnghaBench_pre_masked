
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int va_list ;
typedef int spa_t ;
typedef int nvlist_t ;
struct TYPE_7__ {int tx_txg; } ;
typedef TYPE_1__ dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int (*) (int *,TYPE_1__*),int *,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int ,char const*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(nvlist_t *VAR_4, const char *VAR_5, spa_t *VAR_6,
    dmu_tx_t *VAR_7, const char *VAR_8, va_list VAR_9)
{
 char *VAR_10;






 if (FUNC_9(VAR_6) || !FUNC_10(VAR_6)) {
  FUNC_4(VAR_4);
  return;
 }

 VAR_10 = FUNC_6(VAR_8, VAR_9);
 FUNC_2(VAR_4, VAR_2, VAR_10);
 FUNC_5(VAR_10);

 FUNC_2(VAR_4, VAR_1, VAR_5);
 FUNC_3(VAR_4, VAR_3, VAR_7->tx_txg);

 if (FUNC_0(VAR_7)) {
  FUNC_8(VAR_4, VAR_7);
 } else {
  FUNC_1(FUNC_7(VAR_6),
      FUNC_8, VAR_4, 0, VAR_0, VAR_7);
 }

}
