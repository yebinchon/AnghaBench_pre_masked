
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
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
struct TYPE_8__ {scalar_t__** ddt_object; size_t ddt_checksum; scalar_t__** ddt_histogram; int * ddt_os; TYPE_1__* ddt_spa; } ;
typedef TYPE_2__ ddt_t ;
typedef int ddt_histogram_t ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__ (* ddt_op_create ) (int *,scalar_t__*,int *,int) ;} ;
struct TYPE_9__ {int ci_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,int,char*) ;
 TYPE_4__** VAR_3 ;
 scalar_t__ FUNC_3 (int *,scalar_t__*,int *,int) ;
 scalar_t__ FUNC_4 (int *,int ,char*,int,int,scalar_t__*,int *) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void
FUNC_5(ddt_t *VAR_5, enum ddt_type VAR_6, enum ddt_class VAR_7,
    dmu_tx_t *VAR_8)
{
 spa_t *VAR_9 = VAR_5->ddt_spa;
 objset_t *VAR_10 = VAR_5->ddt_os;
 uint64_t *VAR_11 = &VAR_5->ddt_object[VAR_6][VAR_7];
 boolean_t VAR_12 = VAR_4[VAR_5->ddt_checksum].ci_flags &
     VAR_2;
 char VAR_13[VAR_0];

 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_13);

 FUNC_0(*VAR_11 == 0);
 FUNC_1(VAR_3[VAR_6]->ddt_op_create(VAR_10, VAR_11, VAR_8, VAR_12) == 0);
 FUNC_0(*VAR_11 != 0);

 FUNC_1(FUNC_4(VAR_10, VAR_1, VAR_13,
     sizeof (uint64_t), 1, VAR_11, VAR_8) == 0);

 FUNC_1(FUNC_4(VAR_10, VAR_9->spa_ddt_stat_object, VAR_13,
     sizeof (uint64_t), sizeof (ddt_histogram_t) / sizeof (uint64_t),
     &VAR_5->ddt_histogram[VAR_6][VAR_7], VAR_8) == 0);
}
