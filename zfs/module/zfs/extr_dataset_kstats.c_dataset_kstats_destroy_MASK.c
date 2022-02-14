
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int empty_dataset_kstats ;
struct TYPE_8__ {int das_nunlinked; int das_nunlinks; int das_nread; int das_reads; int das_nwritten; int das_writes; } ;
struct TYPE_9__ {TYPE_1__ dk_aggsums; TYPE_4__* dk_kstats; } ;
typedef TYPE_2__ dataset_kstats_t ;
struct TYPE_10__ {int dkv_ds_name; } ;
typedef TYPE_3__ dataset_kstat_values_t ;
struct TYPE_11__ {TYPE_3__* ks_data; } ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_4__*) ;

void
FUNC_5(dataset_kstats_t *VAR_0)
{
 if (VAR_0->dk_kstats == ((void*)0))
  return;

 dataset_kstat_values_t *VAR_1 = VAR_0->dk_kstats->ks_data;
 FUNC_3(FUNC_1(&VAR_1->dkv_ds_name),
     FUNC_0(&VAR_1->dkv_ds_name));
 FUNC_3(VAR_1, sizeof (empty_dataset_kstats));

 FUNC_4(VAR_0->dk_kstats);
 VAR_0->dk_kstats = ((void*)0);

 FUNC_2(&VAR_0->dk_aggsums.das_writes);
 FUNC_2(&VAR_0->dk_aggsums.das_nwritten);
 FUNC_2(&VAR_0->dk_aggsums.das_reads);
 FUNC_2(&VAR_0->dk_aggsums.das_nread);
 FUNC_2(&VAR_0->dk_aggsums.das_nunlinks);
 FUNC_2(&VAR_0->dk_aggsums.das_nunlinked);
}
