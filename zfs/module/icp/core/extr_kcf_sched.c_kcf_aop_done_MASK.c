
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int kcf_op_type_t ;
struct TYPE_15__ {TYPE_5__* kr_areq; } ;
typedef TYPE_3__ kcf_dual_req_t ;
struct TYPE_16__ {int kc_in_use_lock; int * kc_req_chain_last; TYPE_5__* kc_req_chain_first; } ;
typedef TYPE_4__ kcf_context_t ;
struct TYPE_14__ {int cr_flag; scalar_t__ cr_callback_arg; } ;
struct TYPE_13__ {int rp_optype; } ;
struct TYPE_17__ {TYPE_2__ an_reqarg; void* an_isdual; int an_lock; int an_turn_cv; int an_is_my_turn; struct TYPE_17__* an_ctxchain_next; TYPE_4__* an_context; TYPE_1__ an_params; int an_state; } ;
typedef TYPE_5__ kcf_areq_node_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_5__*,int) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void
FUNC_15(kcf_areq_node_t *VAR_7, int VAR_8)
{
 kcf_op_type_t VAR_9;
 boolean_t VAR_10 = VAR_0;
 kcf_context_t *VAR_11;
 kcf_areq_node_t *VAR_12;






 if (VAR_8 != VAR_5 && FUNC_3(VAR_8)) {





  if (FUNC_12(VAR_7) == VAR_3)
   return;
 }

 FUNC_13(&VAR_7->an_lock);
 VAR_7->an_state = VAR_6;
 FUNC_14(&VAR_7->an_lock);

 VAR_9 = (&VAR_7->an_params)->rp_optype;
 if ((VAR_11 = VAR_7->an_context) != ((void*)0)) {






  FUNC_13(&VAR_11->kc_in_use_lock);
  VAR_12 = VAR_7->an_ctxchain_next;
  if (VAR_12 != ((void*)0)) {
   FUNC_13(&VAR_12->an_lock);
   VAR_12->an_is_my_turn = VAR_1;
   FUNC_10(&VAR_12->an_turn_cv);
   FUNC_14(&VAR_12->an_lock);
  }

  VAR_11->kc_req_chain_first = VAR_12;
  if (VAR_12 == ((void*)0))
   VAR_11->kc_req_chain_last = ((void*)0);
  FUNC_14(&VAR_11->kc_in_use_lock);

  if (FUNC_4(VAR_9) || FUNC_1(VAR_9)) {
   FUNC_0(VAR_12 == ((void*)0));
   FUNC_8(VAR_11);
  } else if (VAR_8 != VAR_5 && FUNC_2(VAR_9)) {







   FUNC_8(VAR_11);
  }
 }



 if (VAR_7->an_isdual) {
  kcf_dual_req_t *VAR_13;
  VAR_13 = (kcf_dual_req_t *)VAR_7->an_reqarg.cr_callback_arg;
  VAR_13->kr_areq = VAR_7;
  FUNC_6(VAR_7);
  VAR_7->an_isdual = VAR_0;

  FUNC_9(VAR_7, VAR_8);
  return;
 }
 VAR_10 = (FUNC_5(VAR_9) || FUNC_2(VAR_9)) &&
     (!(VAR_7->an_reqarg.cr_flag & VAR_2)) &&
     (VAR_8 == VAR_5);

 if (!VAR_10) {
  FUNC_9(VAR_7, VAR_8);
 }

 if (!(VAR_7->an_reqarg.cr_flag & VAR_4))
  FUNC_11(VAR_7);

 FUNC_7(VAR_7);
}
