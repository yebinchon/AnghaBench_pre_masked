
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int sds_txg; int sds_dsobj; } ;
typedef TYPE_1__ scan_ds_t ;
struct TYPE_7__ {int scn_queue; } ;
typedef TYPE_2__ dsl_scan_t ;
typedef int boolean_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static boolean_t
FUNC_1(dsl_scan_t *VAR_0, uint64_t VAR_1, uint64_t *VAR_2)
{
 scan_ds_t VAR_3, *VAR_4;

 VAR_3.sds_dsobj = VAR_1;
 VAR_4 = FUNC_0(&VAR_0->scn_queue, &VAR_3, ((void*)0));
 if (VAR_4 != ((void*)0) && VAR_2 != ((void*)0))
  *VAR_2 = VAR_4->sds_txg;
 return (VAR_4 != ((void*)0));
}
