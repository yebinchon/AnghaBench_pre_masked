
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_6__* sn_provider; } ;
typedef TYPE_2__ kcf_sreq_node_t ;
typedef scalar_t__ kcf_call_type_t ;
struct TYPE_9__ {TYPE_6__* an_provider; } ;
typedef TYPE_3__ kcf_areq_node_t ;
typedef int * crypto_req_handle_t ;
struct TYPE_7__ {int ks_nfails; } ;
struct TYPE_10__ {TYPE_1__ pd_sched_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

void
FUNC_5(crypto_req_handle_t VAR_3, int VAR_4)
{
 kcf_call_type_t VAR_5;

 if (VAR_3 == ((void*)0))
  return;

 if ((VAR_5 = FUNC_1(VAR_3)) == VAR_2) {
  kcf_sreq_node_t *VAR_6 = (kcf_sreq_node_t *)VAR_3;

  if (VAR_4 != VAR_1)
   VAR_6->sn_provider->pd_sched_info.ks_nfails++;
  FUNC_2(VAR_6->sn_provider);
  FUNC_4(VAR_6, VAR_4);
 } else {
  kcf_areq_node_t *VAR_7 = (kcf_areq_node_t *)VAR_3;

  FUNC_0(VAR_5 == VAR_0);
  if (VAR_4 != VAR_1)
   VAR_7->an_provider->pd_sched_info.ks_nfails++;
  FUNC_2(VAR_7->an_provider);
  FUNC_3(VAR_7, VAR_4);
 }
}
