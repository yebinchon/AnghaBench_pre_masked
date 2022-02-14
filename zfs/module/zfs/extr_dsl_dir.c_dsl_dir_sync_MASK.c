
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* dd_space_towrite; int dd_dbuf; int dd_lock; int * dd_tempreserved; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_9__ {size_t tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,char*,size_t,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(dsl_dir_t *VAR_1, dmu_tx_t *VAR_2)
{
 FUNC_0(FUNC_3(VAR_2));

 FUNC_5(&VAR_1->dd_lock);
 FUNC_1(VAR_1->dd_tempreserved[VAR_2->tx_txg & VAR_0]);
 FUNC_4(VAR_1, "txg=%llu towrite=%lluK\n", VAR_2->tx_txg,
     VAR_1->dd_space_towrite[VAR_2->tx_txg & VAR_0] / 1024);
 VAR_1->dd_space_towrite[VAR_2->tx_txg & VAR_0] = 0;
 FUNC_6(&VAR_1->dd_lock);


 FUNC_2(VAR_1->dd_dbuf, VAR_1);
}
