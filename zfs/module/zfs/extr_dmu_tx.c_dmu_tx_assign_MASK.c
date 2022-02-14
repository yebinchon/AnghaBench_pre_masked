
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ tx_txg; int tx_txgh; int tx_dirty_delayed; int tx_pool; } ;
typedef TYPE_1__ dmu_tx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(dmu_tx_t *VAR_4, uint64_t VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4->tx_txg == 0);
 FUNC_1(VAR_5 & ~(VAR_3 | VAR_2));
 FUNC_0(!FUNC_7(VAR_4->tx_pool));


 FUNC_2((VAR_5 & VAR_3), !FUNC_6(VAR_4->tx_pool));

 if ((VAR_5 & VAR_2))
  VAR_4->tx_dirty_delayed = VAR_0;

 while ((VAR_6 = FUNC_3(VAR_4, VAR_5)) != 0) {
  FUNC_4(VAR_4);

  if (VAR_6 != VAR_1 || !(VAR_5 & VAR_3))
   return (VAR_6);

  FUNC_5(VAR_4);
 }

 FUNC_8(&VAR_4->tx_txgh);

 return (0);
}
