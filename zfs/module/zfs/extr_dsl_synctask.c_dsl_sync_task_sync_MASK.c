
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ dst_error; int dst_space; scalar_t__ (* dst_checkfunc ) (int ,int *) ;scalar_t__ dst_nowaiter; int dst_arg; int (* dst_syncfunc ) (int ,int *) ;int dst_space_check; TYPE_2__* dst_pool; } ;
typedef TYPE_1__ dsl_sync_task_t ;
struct TYPE_8__ {int dp_config_rwlock; int dp_root_dir; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dmu_tx_t ;
struct TYPE_9__ {scalar_t__ dd_used_bytes; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_6__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

void
FUNC_9(dsl_sync_task_t *VAR_4, dmu_tx_t *VAR_5)
{
 dsl_pool_t *VAR_6 = VAR_4->dst_pool;

 FUNC_0(VAR_4->dst_error);
 if (VAR_4->dst_space_check != VAR_3) {
  uint64_t VAR_7 = FUNC_3(VAR_6,
      VAR_4->dst_space_check);
  uint64_t VAR_8 = FUNC_2(VAR_6->dp_root_dir)->dd_used_bytes;


  if (VAR_8 + VAR_4->dst_space * 3 > VAR_7) {
   VAR_4->dst_error = FUNC_1(VAR_0);
   if (VAR_4->dst_nowaiter)
    FUNC_4(VAR_4, sizeof (*VAR_4));
   return;
  }
 }




 FUNC_5(&VAR_6->dp_config_rwlock, VAR_2, VAR_1);
 VAR_4->dst_error = VAR_4->dst_checkfunc(VAR_4->dst_arg, VAR_5);
 if (VAR_4->dst_error == 0)
  VAR_4->dst_syncfunc(VAR_4->dst_arg, VAR_5);
 FUNC_6(&VAR_6->dp_config_rwlock, VAR_1);
 if (VAR_4->dst_nowaiter)
  FUNC_4(VAR_4, sizeof (*VAR_4));
}
