
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ds_bp_rwlock; TYPE_2__* ds_objset; TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int ds_hold_flags_t ;
struct TYPE_12__ {scalar_t__ drc_resumable; scalar_t__ drc_raw; TYPE_3__* drc_ds; } ;
typedef TYPE_4__ dmu_recv_cookie_t ;
struct TYPE_10__ {int os_raw_receive; } ;
struct TYPE_9__ {int dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(dmu_recv_cookie_t *VAR_6)
{
 dsl_dataset_t *VAR_7 = VAR_6->drc_ds;
 ds_hold_flags_t VAR_8 = (VAR_6->drc_raw) ? 0 : VAR_1;
 FUNC_7(VAR_7->ds_dir->dd_pool, 0);
 VAR_7->ds_objset->os_raw_receive = VAR_0;

 FUNC_5(&VAR_7->ds_bp_rwlock, VAR_3, VAR_2);
 if (VAR_6->drc_resumable && !FUNC_0(FUNC_2(VAR_7))) {
  FUNC_6(&VAR_7->ds_bp_rwlock, VAR_2);
  FUNC_1(VAR_7, VAR_8, VAR_5);
 } else {
  char VAR_9[VAR_4];
  FUNC_6(&VAR_7->ds_bp_rwlock, VAR_2);
  FUNC_3(VAR_7, VAR_9);
  FUNC_1(VAR_7, VAR_8, VAR_5);
  (void) FUNC_4(VAR_9);
 }
}
