
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int uqn_delta; int uqn_id; } ;
typedef TYPE_1__ userquota_node_t ;
struct TYPE_11__ {int uqc_project_deltas; int uqc_group_deltas; int uqc_user_deltas; } ;
typedef TYPE_2__ userquota_cache_t ;
struct TYPE_12__ {int os_userused_lock; } ;
typedef TYPE_3__ objset_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,void**) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_10(objset_t *VAR_3, userquota_cache_t *VAR_4, dmu_tx_t *VAR_5)
{
 void *VAR_6;
 userquota_node_t *VAR_7;

 FUNC_0(FUNC_5(VAR_5));

 VAR_6 = ((void*)0);
 while ((VAR_7 = FUNC_3(&VAR_4->uqc_user_deltas,
     &VAR_6)) != ((void*)0)) {





  FUNC_7(&VAR_3->os_userused_lock);
  FUNC_1(FUNC_9(VAR_3, VAR_2,
      VAR_7->uqn_id, VAR_7->uqn_delta, VAR_5));
  FUNC_8(&VAR_3->os_userused_lock);
  FUNC_6(VAR_7, sizeof (*VAR_7));
 }
 FUNC_2(&VAR_4->uqc_user_deltas);

 VAR_6 = ((void*)0);
 while ((VAR_7 = FUNC_3(&VAR_4->uqc_group_deltas,
     &VAR_6)) != ((void*)0)) {
  FUNC_7(&VAR_3->os_userused_lock);
  FUNC_1(FUNC_9(VAR_3, VAR_0,
      VAR_7->uqn_id, VAR_7->uqn_delta, VAR_5));
  FUNC_8(&VAR_3->os_userused_lock);
  FUNC_6(VAR_7, sizeof (*VAR_7));
 }
 FUNC_2(&VAR_4->uqc_group_deltas);

 if (FUNC_4(VAR_3)) {
  VAR_6 = ((void*)0);
  while ((VAR_7 = FUNC_3(&VAR_4->uqc_project_deltas,
      &VAR_6)) != ((void*)0)) {
   FUNC_7(&VAR_3->os_userused_lock);
   FUNC_1(FUNC_9(VAR_3, VAR_1,
       VAR_7->uqn_id, VAR_7->uqn_delta, VAR_5));
   FUNC_8(&VAR_3->os_userused_lock);
   FUNC_6(VAR_7, sizeof (*VAR_7));
  }
  FUNC_2(&VAR_4->uqc_project_deltas);
 }
}
