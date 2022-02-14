
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int kcf_req_params_t ;
struct TYPE_12__ {scalar_t__ pd_prov_type; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef int crypto_session_id_t ;
typedef TYPE_1__* crypto_provider_t ;
struct TYPE_13__ {int cm_type; } ;
typedef TYPE_3__ crypto_mechanism_t ;
typedef int crypto_data_t ;
typedef int crypto_call_req_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,TYPE_3__*,int *,int *,int *) ;
 int FUNC_5 (int ,int ,int ,TYPE_1__*,TYPE_1__**,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int *,int *,int ) ;

int
FUNC_7(crypto_provider_t VAR_6, crypto_session_id_t VAR_7,
    crypto_mechanism_t *VAR_8, crypto_data_t *VAR_9, crypto_data_t *VAR_10,
    crypto_call_req_t *VAR_11)
{
 kcf_req_params_t VAR_12;
 kcf_provider_desc_t *VAR_13 = VAR_6;
 kcf_provider_desc_t *VAR_14 = VAR_13;
 int VAR_15;

 FUNC_0(FUNC_2(VAR_13));

 if (VAR_13->pd_prov_type == VAR_2) {
  VAR_15 = FUNC_5(VAR_8->cm_type,
      VAR_3, FUNC_1(VAR_11),
      VAR_13, &VAR_14, VAR_1);

  if (VAR_15 != VAR_4)
   return (VAR_15);
 }
 FUNC_4(&VAR_12, VAR_5, VAR_7, VAR_8, ((void*)0),
     VAR_9, VAR_10);


 VAR_15 = FUNC_6(VAR_14, ((void*)0), VAR_11, &VAR_12, VAR_0);
 if (VAR_13->pd_prov_type == VAR_2)
  FUNC_3(VAR_14);

 return (VAR_15);
}
