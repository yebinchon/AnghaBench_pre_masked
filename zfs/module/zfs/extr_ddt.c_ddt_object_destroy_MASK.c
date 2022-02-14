
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int spa_ddt_stat_object; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_t ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
typedef int dmu_tx_t ;
struct TYPE_8__ {scalar_t__** ddt_object; int ** ddt_object_stats; int ** ddt_histogram; int * ddt_os; TYPE_1__* ddt_spa; } ;
typedef TYPE_2__ ddt_t ;
typedef int ddt_object_t ;
struct TYPE_9__ {scalar_t__ (* ddt_op_destroy ) (int *,scalar_t__,int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int,int,char*) ;
 TYPE_3__** VAR_2 ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (int *,int ,char*,int *) ;

__attribute__((used)) static void
FUNC_8(ddt_t *VAR_3, enum ddt_type VAR_4, enum ddt_class VAR_5,
    dmu_tx_t *VAR_6)
{
 spa_t *VAR_7 = VAR_3->ddt_spa;
 objset_t *VAR_8 = VAR_3->ddt_os;
 uint64_t *VAR_9 = &VAR_3->ddt_object[VAR_4][VAR_5];
 uint64_t VAR_10;
 char VAR_11[VAR_0];

 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_11);

 FUNC_0(*VAR_9 != 0);
 FUNC_0(FUNC_3(&VAR_3->ddt_histogram[VAR_4][VAR_5]));
 FUNC_1(FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_10) == 0 && VAR_10 == 0);
 FUNC_1(FUNC_7(VAR_8, VAR_1, VAR_11, VAR_6) == 0);
 FUNC_1(FUNC_7(VAR_8, VAR_7->spa_ddt_stat_object, VAR_11, VAR_6) == 0);
 FUNC_1(VAR_2[VAR_4]->ddt_op_destroy(VAR_8, *VAR_9, VAR_6) == 0);
 FUNC_2(&VAR_3->ddt_object_stats[VAR_4][VAR_5], sizeof (ddt_object_t));

 *VAR_9 = 0;
}
