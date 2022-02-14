
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int kcf_req_params_t ;
struct TYPE_22__ {scalar_t__ pd_prov_type; int pd_flags; scalar_t__ pd_hash_limit; int pd_sid; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef int kcf_prov_tried_t ;
struct TYPE_23__ {int cm_type; } ;
typedef TYPE_2__ crypto_mechanism_t ;
struct TYPE_24__ {scalar_t__ cd_length; } ;
typedef TYPE_3__ crypto_data_t ;
typedef int crypto_call_req_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,TYPE_2__*,int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (int ,int *,int*,int *,int ,int ,scalar_t__) ;
 int * FUNC_12 (int **,TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int *,int *,int *,int ) ;

int
FUNC_14(crypto_mechanism_t *VAR_8, crypto_data_t *VAR_9,
    crypto_data_t *VAR_10, crypto_call_req_t *VAR_11)
{
 int VAR_12;
 kcf_provider_desc_t *VAR_13;
 kcf_req_params_t VAR_14;
 kcf_prov_tried_t *VAR_15 = ((void*)0);

retry:

 if ((VAR_13 = FUNC_11(VAR_8->cm_type, ((void*)0), &VAR_12, VAR_15,
     VAR_2, FUNC_1(VAR_11),
     VAR_9->cd_length)) == ((void*)0)) {
  if (VAR_15 != ((void*)0))
   FUNC_10(VAR_15);
  return (VAR_12);
 }


 if (FUNC_0(VAR_11, VAR_13)) {
  crypto_mechanism_t VAR_16;

  VAR_16 = *VAR_8;
  FUNC_7(VAR_8->cm_type, VAR_13, &VAR_16);
  VAR_12 = FUNC_4(VAR_13, VAR_13->pd_sid, &VAR_16, VAR_9,
      VAR_10, FUNC_8(VAR_11));
  FUNC_5(VAR_13, VAR_12);
 } else {
  if (VAR_13->pd_prov_type == VAR_4 &&
      (VAR_13->pd_flags & VAR_3) &&
      (VAR_9->cd_length > VAR_13->pd_hash_limit)) {
   VAR_12 = VAR_1;
  } else {
   FUNC_9(&VAR_14, VAR_7,
       VAR_13->pd_sid, VAR_8, ((void*)0), VAR_9, VAR_10);


   VAR_12 = FUNC_13(VAR_13, ((void*)0), VAR_11, &VAR_14,
       VAR_0);
  }
 }

 if (VAR_12 != VAR_6 && VAR_12 != VAR_5 &&
     FUNC_2(VAR_12)) {

  if (FUNC_12(&VAR_15, VAR_13, FUNC_3(VAR_11)) != ((void*)0))
   goto retry;
 }

 if (VAR_15 != ((void*)0))
  FUNC_10(VAR_15);

 FUNC_6(VAR_13);
 return (VAR_12);
}
