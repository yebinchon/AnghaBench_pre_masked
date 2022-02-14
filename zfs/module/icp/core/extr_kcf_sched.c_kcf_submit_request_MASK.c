
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_32__ {int tq_nalloc; } ;
typedef TYPE_2__ taskq_t ;
struct TYPE_33__ {int sn_rv; int sn_lock; int sn_cv; int sn_state; TYPE_4__* sn_provider; int * sn_context; int * sn_params; } ;
typedef TYPE_3__ kcf_sreq_node_t ;
typedef int kcf_req_params_t ;
struct TYPE_31__ {TYPE_2__* ks_taskq; } ;
struct TYPE_34__ {int pd_prov_type; int pd_flags; int pd_state; TYPE_1__ pd_sched_info; } ;
typedef TYPE_4__ kcf_provider_desc_t ;
typedef int kcf_context_t ;
typedef TYPE_3__ kcf_areq_node_t ;
struct TYPE_35__ {scalar_t__ cc_framework_private; } ;
typedef TYPE_6__ crypto_ctx_t ;
struct TYPE_36__ {int cr_flag; void* cr_reqid; } ;
typedef TYPE_7__ crypto_call_req_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (TYPE_4__*,TYPE_6__*,int *,int ) ;
 int VAR_16 ;
 int FUNC_8 (int *,int *) ;
 TYPE_3__* FUNC_9 (TYPE_4__*,int *,TYPE_7__*,int *,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 void* FUNC_12 (TYPE_3__*) ;
 int VAR_17 ;
 TYPE_3__* FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_2__*,int (*) (TYPE_3__*),TYPE_3__*,int ) ;
 int FUNC_19 (TYPE_2__*) ;

int
FUNC_20(kcf_provider_desc_t *VAR_18, crypto_ctx_t *VAR_19,
    crypto_call_req_t *VAR_20, kcf_req_params_t *VAR_21, boolean_t VAR_22)
{
 int VAR_23 = VAR_6;
 kcf_areq_node_t *VAR_24;
 kcf_sreq_node_t *VAR_25;
 kcf_context_t *VAR_26;
 taskq_t *VAR_27 = VAR_18->pd_sched_info.ks_taskq;

 VAR_26 = VAR_19 ? (kcf_context_t *)VAR_19->cc_framework_private : ((void*)0);


 if (VAR_20 == ((void*)0)) {
  switch (VAR_18->pd_prov_type) {
  case 128:
   VAR_23 = FUNC_7(VAR_18, VAR_19, VAR_21,
       FUNC_6(VAR_10));
   break;

  case 129:





   if ((VAR_18->pd_flags & VAR_7) &&
       FUNC_1(VAR_27)) {
    FUNC_3(VAR_18);
    if (VAR_18->pd_state == VAR_8) {
     VAR_23 = FUNC_7(VAR_18, VAR_19,
         VAR_21, FUNC_6(VAR_10));
     FUNC_4(VAR_18);
     FUNC_0(VAR_23 != VAR_4);
     break;
    }
    FUNC_4(VAR_18);
   }

   VAR_25 = FUNC_13(VAR_17, VAR_10);
   VAR_25->sn_state = VAR_11;
   VAR_25->sn_rv = VAR_2;
   VAR_25->sn_params = VAR_21;







   VAR_25->sn_context = VAR_26;
   FUNC_0(FUNC_5(VAR_18));
   VAR_25->sn_provider = VAR_18;

   FUNC_0(VAR_27 != ((void*)0));







   if (FUNC_1(VAR_27) &&
       VAR_18->pd_state == VAR_8) {
    FUNC_17(VAR_25);
   } else {







    if (VAR_27->tq_nalloc >= VAR_16) {
     FUNC_19(VAR_27);
    }

    (void) FUNC_18(VAR_27, FUNC_17,
        VAR_25, VAR_15);
   }






   FUNC_15(&VAR_25->sn_lock);
   while (VAR_25->sn_state < VAR_12)
    FUNC_8(&VAR_25->sn_cv, &VAR_25->sn_lock);
   FUNC_16(&VAR_25->sn_lock);

   VAR_23 = VAR_25->sn_rv;
   FUNC_14(VAR_17, VAR_25);

   break;

  default:
   VAR_23 = VAR_2;
   break;
  }

 } else {
  switch (VAR_18->pd_prov_type) {
  case 128:
   if (!(VAR_20->cr_flag & VAR_0)) {




    VAR_23 = FUNC_7(VAR_18, VAR_19, VAR_21,
        FUNC_6(VAR_9));
   } else {




    VAR_24 = FUNC_9(VAR_18, VAR_26, VAR_20,
        VAR_21, VAR_22);
    if (VAR_24 == ((void*)0))
     VAR_23 = VAR_3;
    else {
     if (!(VAR_20->cr_flag
         & VAR_5)) {







     VAR_20->cr_reqid = FUNC_12(VAR_24);
     }

     VAR_23 = FUNC_10(VAR_24);





     if (VAR_23 != VAR_4) {
      if (!(VAR_20->cr_flag
          & VAR_5))
       FUNC_11(VAR_24);
      FUNC_2(VAR_24);
     }
    }
   }
   break;

  case 129:



   VAR_24 = FUNC_9(VAR_18, VAR_26, VAR_20, VAR_21,
       VAR_22);
   if (VAR_24 == ((void*)0)) {
    VAR_23 = VAR_3;
    goto done;
   }

   FUNC_0(VAR_27 != ((void*)0));





   if (VAR_27->tq_nalloc >= VAR_16) {
    VAR_23 = VAR_1;
    FUNC_2(VAR_24);
    goto done;
   }

   if (!(VAR_20->cr_flag & VAR_5)) {






   VAR_20->cr_reqid = FUNC_12(VAR_24);
   }

   if (FUNC_18(VAR_27,
       FUNC_17, VAR_24, VAR_14) ==
       VAR_13) {
    VAR_23 = VAR_3;
    if (!(VAR_20->cr_flag & VAR_5))
     FUNC_11(VAR_24);
    FUNC_2(VAR_24);
   } else {
    VAR_23 = VAR_4;
   }
   break;

  default:
   VAR_23 = VAR_2;
   break;
  }
 }

done:
 return (VAR_23);
}
