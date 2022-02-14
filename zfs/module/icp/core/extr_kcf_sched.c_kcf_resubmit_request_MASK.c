
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int taskq_t ;
struct TYPE_22__ {int * ks_taskq; } ;
struct TYPE_23__ {int pd_prov_type; TYPE_2__ pd_sched_info; int pd_sid; int pd_prov_handle; } ;
typedef TYPE_3__ kcf_provider_desc_t ;
struct TYPE_27__ {int * cc_provider_private; int cc_session; int cc_provider; } ;
struct TYPE_24__ {TYPE_7__ kc_glbl_ctx; TYPE_3__* kc_prov_desc; } ;
typedef TYPE_4__ kcf_context_t ;
struct TYPE_21__ {int cr_flag; } ;
struct TYPE_25__ {int an_lock; int an_state; TYPE_3__* an_provider; TYPE_4__* an_context; TYPE_1__ an_reqarg; int an_tried_plist; } ;
typedef TYPE_5__ kcf_areq_node_t ;
struct TYPE_26__ {int cm_type; } ;
typedef TYPE_6__ crypto_mechanism_t ;
typedef int crypto_mech_type_t ;
typedef int crypto_func_group_t ;
typedef TYPE_7__ crypto_ctx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_5__*,TYPE_6__**,TYPE_6__**,int *) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_3__* FUNC_5 (TYPE_6__*,TYPE_6__*,int *,int *,int *,int*,int ,int ,int ,int,int ) ;
 TYPE_3__* FUNC_6 (int ,int *,int*,int ,int ,int,int ) ;
 int * FUNC_7 (int *,TYPE_3__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 int FUNC_10 (int *,int ,TYPE_5__*,int ) ;

__attribute__((used)) static int
FUNC_11(kcf_areq_node_t *VAR_9)
{
 int VAR_10 = VAR_0;
 kcf_context_t *VAR_11;
 kcf_provider_desc_t *VAR_12;
 kcf_provider_desc_t *VAR_13;
 crypto_mechanism_t *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 crypto_mech_type_t VAR_16, VAR_17;
 crypto_func_group_t VAR_18 = 0;

 if (!FUNC_3(VAR_9, &VAR_14, &VAR_15, &VAR_18))
  return (VAR_10);

 VAR_12 = VAR_9->an_provider;





 if (FUNC_7(&VAR_9->an_tried_plist, VAR_12,
     VAR_4) == ((void*)0))
  return (VAR_10);

 if (VAR_14 && !VAR_15) {
  VAR_13 = FUNC_6(VAR_14->cm_type, ((void*)0), &VAR_10,
      VAR_9->an_tried_plist, VAR_18,
      (VAR_9->an_reqarg.cr_flag & VAR_3), 0);
 } else {
  FUNC_0(VAR_14 != ((void*)0) && VAR_15 != ((void*)0));

  VAR_13 = FUNC_5(VAR_14, VAR_15, ((void*)0), &VAR_16,
      &VAR_17, &VAR_10, VAR_9->an_tried_plist, VAR_18, VAR_18,
      (VAR_9->an_reqarg.cr_flag & VAR_3), 0);
 }

 if (VAR_13 == ((void*)0))
  return (VAR_10);





 if ((VAR_11 = VAR_9->an_context) != ((void*)0)) {
  crypto_ctx_t *VAR_19;

  FUNC_0(VAR_12 == VAR_11->kc_prov_desc);
  FUNC_2(VAR_11->kc_prov_desc);
  FUNC_1(VAR_13);
  VAR_11->kc_prov_desc = VAR_13;

  VAR_19 = &VAR_11->kc_glbl_ctx;
  VAR_19->cc_provider = VAR_13->pd_prov_handle;
  VAR_19->cc_session = VAR_13->pd_sid;
  VAR_19->cc_provider_private = ((void*)0);
 }


 FUNC_2(VAR_12);
 FUNC_1(VAR_13);
 VAR_9->an_provider = VAR_13;
 FUNC_8(&VAR_9->an_lock);
 VAR_9->an_state = VAR_5;
 FUNC_9(&VAR_9->an_lock);

 switch (VAR_13->pd_prov_type) {
 case 128:
  VAR_10 = FUNC_4(VAR_9);
  break;

 case 129: {
  taskq_t *VAR_20 = VAR_13->pd_sched_info.ks_taskq;

  if (FUNC_10(VAR_20, VAR_8, VAR_9, VAR_7) ==
      VAR_6) {
   VAR_10 = VAR_1;
  } else {
   VAR_10 = VAR_2;
  }

  break;
 default:
  break;
 }
 }

 return (VAR_10);
}
