
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int pd_prov_type; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
struct TYPE_11__ {scalar_t__ ml_kcf_mechid; TYPE_1__* pm_prov_desc; struct TYPE_11__* pm_next; struct TYPE_11__* ml_next; struct TYPE_11__* pm_mi_list; } ;
typedef TYPE_2__ kcf_prov_mech_desc_t ;
struct TYPE_12__ {int me_mutex; TYPE_2__* me_sw_prov; TYPE_2__* me_hw_prov_chain; int me_num_hwprov; } ;
typedef TYPE_3__ kcf_mech_entry_t ;
typedef scalar_t__ crypto_mech_type_t ;
typedef TYPE_2__ crypto_mech_info_list_t ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_3__**) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(char *VAR_3, kcf_provider_desc_t *VAR_4)
{
 crypto_mech_type_t VAR_5;
 kcf_prov_mech_desc_t *VAR_6 = ((void*)0), *VAR_7;
 kcf_prov_mech_desc_t **VAR_8;
 kcf_mech_entry_t *VAR_9;
 crypto_mech_info_list_t *VAR_10, *VAR_11, *VAR_12, **VAR_13;

 FUNC_0(VAR_4->pd_prov_type != VAR_0);


 if ((VAR_5 = FUNC_4(VAR_3)) ==
     VAR_1) {




  return;
 }


 if (FUNC_3(VAR_5, &VAR_9) != VAR_2) {




  return;
 }

 FUNC_6(&VAR_9->me_mutex);

 switch (VAR_4->pd_prov_type) {

 case 129:

  VAR_8 = &VAR_9->me_hw_prov_chain;
  VAR_6 = VAR_9->me_hw_prov_chain;
  while (VAR_6 != ((void*)0) &&
      VAR_6->pm_prov_desc != VAR_4) {
   VAR_8 = &VAR_6->pm_next;
   VAR_6 = VAR_6->pm_next;
  }

  if (VAR_6 == ((void*)0)) {

   FUNC_7(&VAR_9->me_mutex);
   return;
  }


  *VAR_8 = VAR_6->pm_next;
  FUNC_0(VAR_9->me_num_hwprov > 0);
  VAR_9->me_num_hwprov--;
  break;

 case 128:
  if (VAR_9->me_sw_prov == ((void*)0) ||
      VAR_9->me_sw_prov->pm_prov_desc != VAR_4) {

   FUNC_7(&VAR_9->me_mutex);
   return;
  }
  VAR_6 = VAR_9->me_sw_prov;
  VAR_9->me_sw_prov = ((void*)0);
  break;
 default:

  FUNC_7(&VAR_9->me_mutex);
  return;
 }

 FUNC_7(&VAR_9->me_mutex);


 VAR_10 = VAR_6->pm_mi_list;
 while (VAR_10 != ((void*)0)) {
  VAR_12 = VAR_10->ml_next;
  if (FUNC_3(VAR_10->ml_kcf_mechid,
      &VAR_9) != VAR_2) {
   VAR_10 = VAR_12;
   continue;
  }

  FUNC_6(&VAR_9->me_mutex);
  if (VAR_4->pd_prov_type == 129)
   VAR_7 = VAR_9->me_hw_prov_chain;
  else
   VAR_7 = VAR_9->me_sw_prov;

  while (VAR_7 != ((void*)0)) {
   if (VAR_7->pm_prov_desc == VAR_4) {
    VAR_13 = &VAR_7->pm_mi_list;
    VAR_11 = VAR_7->pm_mi_list;
    while (VAR_11 != ((void*)0) &&
        VAR_11->ml_kcf_mechid != VAR_5) {
     VAR_13 = &VAR_11->ml_next;
     VAR_11 = VAR_11->ml_next;
    }
    if (VAR_11 != ((void*)0)) {
     *VAR_13 = VAR_11->ml_next;
     FUNC_5(VAR_11, sizeof (*VAR_11));
    }
    break;
   }
   VAR_7 = VAR_7->pm_next;
  }

  FUNC_7(&VAR_9->me_mutex);
  FUNC_5(VAR_10, sizeof (crypto_mech_info_list_t));
  VAR_10 = VAR_12;
 }


 FUNC_2(VAR_6->pm_prov_desc);
 FUNC_1(VAR_6->pm_prov_desc);
 FUNC_5(VAR_6, sizeof (kcf_prov_mech_desc_t));
}
