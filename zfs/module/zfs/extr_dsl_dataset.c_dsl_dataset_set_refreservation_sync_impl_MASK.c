
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int value ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {TYPE_4__* ds_dir; int ds_lock; scalar_t__ ds_reserved; int ds_dbuf; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_11__ {scalar_t__ ds_unique_bytes; } ;
struct TYPE_10__ {int dd_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *) ;
 TYPE_6__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_4__*,int ,scalar_t__,int ,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int,int,scalar_t__*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

void
FUNC_12(dsl_dataset_t *VAR_2,
    zprop_source_t VAR_3, uint64_t VAR_4, dmu_tx_t *VAR_5)
{
 uint64_t VAR_6;
 uint64_t VAR_7;
 int64_t VAR_8;

 FUNC_8(VAR_2, FUNC_11(VAR_1),
     VAR_3, sizeof (VAR_4), 1, &VAR_4, VAR_5);

 FUNC_3(FUNC_7(VAR_2,
     FUNC_11(VAR_1), &VAR_6));

 FUNC_4(VAR_2->ds_dbuf, VAR_5);
 FUNC_9(&VAR_2->ds_dir->dd_lock);
 FUNC_9(&VAR_2->ds_lock);
 FUNC_0(FUNC_1(VAR_2));
 VAR_7 = FUNC_5(VAR_2)->ds_unique_bytes;
 VAR_8 = FUNC_2(0, (int64_t)(VAR_6 - VAR_7)) -
     FUNC_2(0, (int64_t)(VAR_2->ds_reserved - VAR_7));
 VAR_2->ds_reserved = VAR_6;
 FUNC_10(&VAR_2->ds_lock);

 FUNC_6(VAR_2->ds_dir, VAR_0, VAR_8, 0, 0, VAR_5);
 FUNC_10(&VAR_2->ds_dir->dd_lock);
}
