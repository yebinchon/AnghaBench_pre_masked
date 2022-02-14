
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pd_prov_type; int pd_flags; int pd_sid; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef int kcf_prov_tried_t ;
struct TYPE_10__ {int cm_type; } ;
typedef TYPE_2__ crypto_mechanism_t ;
typedef int crypto_context_t ;
typedef int crypto_call_req_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*,int *,int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int ,int *,int*,int *,int ,int ,int ) ;
 int * FUNC_7 (int **,TYPE_1__*,int ) ;

int
FUNC_8(crypto_mechanism_t *VAR_6, crypto_context_t *VAR_7,
    crypto_call_req_t *VAR_8)
{
 int VAR_9;
 kcf_provider_desc_t *VAR_10;
 kcf_prov_tried_t *VAR_11 = ((void*)0);

retry:

 if ((VAR_10 = FUNC_6(VAR_6->cm_type, ((void*)0), &VAR_9,
     VAR_11, VAR_1, FUNC_0(VAR_8), 0)) == ((void*)0)) {
  if (VAR_11 != ((void*)0))
   FUNC_5(VAR_11);
  return (VAR_9);
 }

 if (VAR_10->pd_prov_type == VAR_3 &&
     (VAR_10->pd_flags & VAR_2)) {
  VAR_9 = VAR_0;
 } else {
  VAR_9 = FUNC_4(VAR_10, VAR_10->pd_sid,
      VAR_6, VAR_7, VAR_8);
 }

 if (VAR_9 != VAR_5 && VAR_9 != VAR_4 &&
     FUNC_1(VAR_9)) {

  if (FUNC_7(&VAR_11, VAR_10, FUNC_2(VAR_8)) != ((void*)0))
   goto retry;
 }

 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_11);
 FUNC_3(VAR_10);
 return (VAR_9);
}
