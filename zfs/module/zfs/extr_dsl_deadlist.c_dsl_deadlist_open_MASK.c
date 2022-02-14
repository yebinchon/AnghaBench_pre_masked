
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_11__ {void* dl_havecache; void* dl_havetree; TYPE_5__* dl_dbuf; int dl_phys; void* dl_oldfmt; int dl_bpobj; int dl_object; int * dl_os; int dl_lock; } ;
typedef TYPE_1__ dsl_deadlist_t ;
struct TYPE_12__ {scalar_t__ doi_type; } ;
typedef TYPE_2__ dmu_object_info_t ;
struct TYPE_13__ {int db_data; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,TYPE_1__*,TYPE_5__**) ;
 int FUNC_4 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int *,int ,int *) ;

void
FUNC_8(dsl_deadlist_t *VAR_4, objset_t *VAR_5, uint64_t VAR_6)
{
 dmu_object_info_t VAR_7;

 FUNC_0(!FUNC_6(VAR_4));

 FUNC_7(&VAR_4->dl_lock, ((void*)0), VAR_3, ((void*)0));
 VAR_4->dl_os = VAR_5;
 VAR_4->dl_object = VAR_6;
 FUNC_1(FUNC_3(VAR_5, VAR_6, VAR_4, &VAR_4->dl_dbuf));
 FUNC_5(VAR_4->dl_dbuf, &VAR_7);
 if (VAR_7.doi_type == VAR_2) {
  FUNC_4(VAR_4->dl_dbuf, VAR_4);
  VAR_4->dl_dbuf = ((void*)0);
  VAR_4->dl_oldfmt = VAR_1;
  FUNC_1(FUNC_2(&VAR_4->dl_bpobj, VAR_5, VAR_6));
  return;
 }

 VAR_4->dl_oldfmt = VAR_0;
 VAR_4->dl_phys = VAR_4->dl_dbuf->db_data;
 VAR_4->dl_havetree = VAR_0;
 VAR_4->dl_havecache = VAR_0;
}
