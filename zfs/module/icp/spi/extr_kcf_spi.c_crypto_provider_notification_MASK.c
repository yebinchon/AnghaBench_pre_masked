
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_4__ {scalar_t__ pd_state; scalar_t__ pd_prov_type; int pd_lock; int pd_resume_cv; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef int crypto_provider_id_t ;
typedef scalar_t__ crypto_kcf_provider_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(crypto_kcf_provider_handle_t VAR_3, uint_t VAR_4)
{
 kcf_provider_desc_t *VAR_5;


 if ((VAR_5 = FUNC_3((crypto_provider_id_t)VAR_3)) == ((void*)0))
  return;

 FUNC_4(&VAR_5->pd_lock);

 if (VAR_5->pd_state <= VAR_2)
  goto out;

 if (VAR_5->pd_prov_type == VAR_1) {
  FUNC_1(VAR_0, "crypto_provider_notification: "
      "logical provider (%x) ignored\n", VAR_3);
  goto out;
 }
 switch (VAR_4) {
 case 131:
  switch (VAR_5->pd_state) {
  case 130:
   VAR_5->pd_state = 128;




   FUNC_2(&VAR_5->pd_resume_cv);
   break;

  case 129:




   VAR_5->pd_state = 128;
   break;
  default:
   break;
  }
  break;

 case 133:
  switch (VAR_5->pd_state) {
  case 128:
   VAR_5->pd_state = 130;
   break;
  default:
   break;
  }
  break;

 case 132:





  switch (VAR_5->pd_state) {
  case 128:
   VAR_5->pd_state = 129;
   break;

  case 130:
   VAR_5->pd_state = 129;




   FUNC_2(&VAR_5->pd_resume_cv);
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }
out:
 FUNC_5(&VAR_5->pd_lock);
 FUNC_0(VAR_5);
}
