
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int pd_lock; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
struct TYPE_15__ {int cc_flags; int * cc_provider_private; } ;
struct TYPE_14__ {TYPE_1__* kc_sw_prov_desc; TYPE_1__* kc_prov_desc; struct TYPE_14__* kc_secondctx; TYPE_3__ kc_glbl_ctx; } ;
typedef TYPE_2__ kcf_context_t ;
typedef TYPE_3__ crypto_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(kcf_context_t *VAR_2)
{
 kcf_provider_desc_t *VAR_3 = VAR_2->kc_prov_desc;
 crypto_ctx_t *VAR_4 = &VAR_2->kc_glbl_ctx;
 kcf_context_t *VAR_5 = VAR_2->kc_secondctx;



 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_5);

 if (VAR_4->cc_provider_private != ((void*)0)) {
  FUNC_7(&VAR_3->pd_lock);
  if (!FUNC_1(VAR_3)) {





   FUNC_3(VAR_3);
   FUNC_8(&VAR_3->pd_lock);
   (void) FUNC_2(VAR_3, VAR_4);
   FUNC_4(VAR_3);
  } else {
   FUNC_8(&VAR_3->pd_lock);
  }
 }


 FUNC_5(VAR_2->kc_prov_desc);


 if ((VAR_4->cc_flags & VAR_0) &&
     VAR_2->kc_sw_prov_desc != ((void*)0)) {
  FUNC_5(VAR_2->kc_sw_prov_desc);
 }

 FUNC_6(VAR_1, VAR_2);
}
