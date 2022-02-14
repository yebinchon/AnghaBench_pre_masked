
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_13__ {int za_first_integer; int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_14__ {int dl_lock; int dl_os; } ;
typedef TYPE_2__ dsl_deadlist_t ;
typedef int dsl_deadlist_phys_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {scalar_t__ doi_type; } ;
typedef TYPE_3__ dmu_object_info_t ;
struct TYPE_16__ {int * db_data; } ;
typedef TYPE_4__ dmu_buf_t ;
typedef int bpobj_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,TYPE_2__*,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int ,TYPE_4__**) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (int ,int ,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ) ;
 scalar_t__ FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (int ,int ,int ,int *) ;
 int FUNC_17 (int ,int *) ;

void
FUNC_18(dsl_deadlist_t *VAR_3, uint64_t VAR_4, dmu_tx_t *VAR_5)
{
 zap_cursor_t VAR_6;
 zap_attribute_t VAR_7;
 dmu_buf_t *VAR_8;
 dsl_deadlist_phys_t *VAR_9;
 dmu_object_info_t VAR_10;

 FUNC_0(FUNC_8(VAR_3->dl_os, VAR_4, &VAR_10));
 if (VAR_10.doi_type == VAR_0) {
  bpobj_t VAR_11;
  FUNC_0(FUNC_3(&VAR_11, VAR_3->dl_os, VAR_4));
  FUNC_0(FUNC_2(&VAR_11, VAR_2, VAR_3, VAR_5));
  FUNC_1(&VAR_11);
  return;
 }

 FUNC_10(&VAR_3->dl_lock);
 for (FUNC_14(&VAR_6, VAR_3->dl_os, VAR_4);
     FUNC_15(&VAR_6, &VAR_7) == 0;
     FUNC_12(&VAR_6)) {
  uint64_t VAR_12 = FUNC_17(VAR_7.za_name, ((void*)0));
  FUNC_9(VAR_3, VAR_7.za_first_integer, VAR_12, VAR_5);
  FUNC_0(FUNC_16(VAR_3->dl_os, VAR_4, VAR_12, VAR_5));
 }
 FUNC_13(&VAR_6);

 FUNC_0(FUNC_5(VAR_3->dl_os, VAR_4, VAR_1, &VAR_8));
 VAR_9 = VAR_8->db_data;
 FUNC_7(VAR_8, VAR_5);
 FUNC_4(VAR_9, sizeof (*VAR_9));
 FUNC_6(VAR_8, VAR_1);
 FUNC_11(&VAR_3->dl_lock);
}
