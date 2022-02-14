
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ sn_provider; scalar_t__ an_provider; scalar_t__ an_is_my_turn; int an_params; int an_lock; void* an_state; int an_turn_cv; TYPE_4__* an_context; int * sn_params; TYPE_1__* sn_context; int sn_lock; void* sn_state; } ;
typedef TYPE_2__ kcf_sreq_node_t ;
struct TYPE_13__ {scalar_t__ pd_state; int pd_lock; int pd_resume_cv; } ;
typedef TYPE_3__ kcf_provider_desc_t ;
struct TYPE_14__ {scalar_t__ kc_prov_desc; int kc_glbl_ctx; } ;
typedef TYPE_4__ kcf_context_t ;
typedef scalar_t__ kcf_call_type_t ;
typedef TYPE_2__ kcf_areq_node_t ;
typedef int crypto_ctx_t ;
struct TYPE_11__ {int kc_glbl_ctx; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 void* VAR_7 ;
 int FUNC_4 (scalar_t__,int *,int *,TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(void *VAR_8)
{
 int VAR_9 = 0;
 crypto_ctx_t *VAR_10;
 kcf_call_type_t VAR_11;
 kcf_provider_desc_t *VAR_12;
 kcf_areq_node_t *VAR_13 = (kcf_areq_node_t *)VAR_8;
 kcf_sreq_node_t *VAR_14 = (kcf_sreq_node_t *)VAR_8;

 VAR_12 = ((VAR_11 = FUNC_1(VAR_8)) == VAR_4) ?
     VAR_14->sn_provider : VAR_13->an_provider;







 if (VAR_12->pd_state == VAR_5) {
  FUNC_8(&VAR_12->pd_lock);
  while (VAR_12->pd_state == VAR_5)
   FUNC_5(&VAR_12->pd_resume_cv, &VAR_12->pd_lock);
  FUNC_9(&VAR_12->pd_lock);
 }






 FUNC_2(VAR_12);







 if (VAR_12->pd_state >= VAR_6) {
  VAR_9 = VAR_2;
  goto bail;
 }

 if (VAR_11 == VAR_4) {
  FUNC_8(&VAR_14->sn_lock);
  VAR_14->sn_state = VAR_7;
  FUNC_9(&VAR_14->sn_lock);

  VAR_10 = VAR_14->sn_context ? &VAR_14->sn_context->kc_glbl_ctx : ((void*)0);
  VAR_9 = FUNC_4(VAR_14->sn_provider, VAR_10,
      VAR_14->sn_params, VAR_14);
 } else {
  kcf_context_t *VAR_15;
  FUNC_0(VAR_11 == VAR_1);






  VAR_10 = (VAR_15 = VAR_13->an_context) ? &VAR_15->kc_glbl_ctx : ((void*)0);

  FUNC_8(&VAR_13->an_lock);
  if (VAR_15 != ((void*)0)) {
   FUNC_0(VAR_15->kc_prov_desc == VAR_13->an_provider);

   while (VAR_13->an_is_my_turn == VAR_0) {
    FUNC_5(&VAR_13->an_turn_cv, &VAR_13->an_lock);
   }
  }
  VAR_13->an_state = VAR_7;
  FUNC_9(&VAR_13->an_lock);

  VAR_9 = FUNC_4(VAR_13->an_provider, VAR_10,
      &VAR_13->an_params, VAR_13);
 }

bail:
 if (VAR_9 == VAR_3) {





  return;
 } else {
  FUNC_3(VAR_12);
  if (VAR_11 == VAR_4)
   FUNC_7(VAR_14, VAR_9);
  else
   FUNC_6(VAR_13, VAR_9);
 }
}
