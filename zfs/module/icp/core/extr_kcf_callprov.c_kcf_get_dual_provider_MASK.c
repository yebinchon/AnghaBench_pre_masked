
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int pd_flags; } ;
typedef TYPE_3__ kcf_provider_desc_t ;
typedef int kcf_prov_tried_t ;
struct TYPE_19__ {scalar_t__ cm_mech_number; } ;
struct TYPE_21__ {TYPE_2__ pm_mech_info; TYPE_7__* pm_mi_list; TYPE_3__* pm_prov_desc; struct TYPE_21__* pm_next; } ;
typedef TYPE_4__ kcf_prov_mech_desc_t ;
struct TYPE_22__ {size_t me_threshold; scalar_t__ me_num_hwprov; int me_mutex; TYPE_4__* me_sw_prov; TYPE_4__* me_hw_prov_chain; } ;
typedef TYPE_5__ kcf_mech_entry_t ;
struct TYPE_23__ {scalar_t__ cm_type; } ;
typedef TYPE_6__ crypto_mechanism_t ;
typedef scalar_t__ crypto_mech_type_t ;
struct TYPE_18__ {int cm_func_group_mask; scalar_t__ cm_mech_number; } ;
struct TYPE_24__ {scalar_t__ ml_kcf_mechid; TYPE_1__ ml_mech_info; struct TYPE_24__* ml_next; } ;
typedef TYPE_7__ crypto_mech_info_list_t ;
typedef int crypto_func_group_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_5__**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

kcf_provider_desc_t *
FUNC_9(crypto_mechanism_t *VAR_6, crypto_mechanism_t *VAR_7,
    kcf_mech_entry_t **VAR_8, crypto_mech_type_t *VAR_9,
    crypto_mech_type_t *VAR_10, int *VAR_11, kcf_prov_tried_t *VAR_12,
    crypto_func_group_t VAR_13, crypto_func_group_t VAR_14, boolean_t VAR_15,
    size_t VAR_16)
{
 kcf_provider_desc_t *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 kcf_prov_mech_desc_t *VAR_20, *VAR_21;
 int VAR_22, VAR_23 = VAR_3, VAR_24 = VAR_3;
 crypto_mech_info_list_t *VAR_25;
 crypto_mech_type_t VAR_26 = VAR_7->cm_type;
 kcf_mech_entry_t *VAR_27;


 if (FUNC_6(VAR_6->cm_type, &VAR_27) != VAR_5) {
  *VAR_11 = VAR_0;
  return (((void*)0));
 }

 *VAR_10 = VAR_1;

 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_27;
 FUNC_7(&VAR_27->me_mutex);

 VAR_20 = VAR_27->me_hw_prov_chain;





 if ((VAR_20 != ((void*)0)) &&
     ((VAR_16 == 0) || (VAR_27->me_threshold == 0) ||
     (VAR_16 >= VAR_27->me_threshold) ||
     ((VAR_21 = VAR_27->me_sw_prov) == ((void*)0)) ||
     (!FUNC_1(VAR_21, VAR_13)) ||
     (!FUNC_3(VAR_21->pm_prov_desc)))) {

  FUNC_0(VAR_27->me_num_hwprov > 0);






  while (VAR_20 != ((void*)0)) {
   VAR_17 = VAR_20->pm_prov_desc;
   VAR_22 = FUNC_4(VAR_17);

   if (!FUNC_1(VAR_20, VAR_13) ||
       !FUNC_3(VAR_17) ||
       FUNC_2(VAR_17, VAR_12) ||
       (VAR_15 &&
       (VAR_17->pd_flags & VAR_4))) {
    VAR_20 = VAR_20->pm_next;
    continue;
   }


   if (VAR_22 < VAR_23) {
    *VAR_9 =
        VAR_20->pm_mech_info.cm_mech_number;
    VAR_23 = VAR_22;
    VAR_18 = VAR_17;
   }


   for (VAR_25 = VAR_20->pm_mi_list;
       VAR_25 != ((void*)0); VAR_25 = VAR_25->ml_next) {
    if ((VAR_25->ml_mech_info.cm_func_group_mask &
        VAR_14) == 0)
     continue;

    if ((VAR_25->ml_kcf_mechid == VAR_26) &&
        (VAR_22 < VAR_24)) {

     VAR_24 = VAR_22;
     VAR_19 = VAR_17;
     *VAR_10 =
         VAR_25->ml_mech_info.cm_mech_number;
     *VAR_9 = VAR_20->
         pm_mech_info.cm_mech_number;
     break;
    }
   }

   VAR_20 = VAR_20->pm_next;
  }

  VAR_17 = (VAR_19 != ((void*)0)) ? VAR_19 : VAR_18;
 }


 if (VAR_17 == ((void*)0) && (VAR_21 = VAR_27->me_sw_prov) != ((void*)0)) {
  VAR_17 = VAR_21->pm_prov_desc;
  if (!FUNC_1(VAR_21, VAR_13) ||
      !FUNC_3(VAR_17) ||
      FUNC_2(VAR_17, VAR_12) ||
      (VAR_15 && (VAR_17->pd_flags & VAR_4)))
   VAR_17 = ((void*)0);
  else {

   for (VAR_25 = VAR_27->me_sw_prov->pm_mi_list;
       VAR_25 != ((void*)0); VAR_25 = VAR_25->ml_next) {
    if ((VAR_25->ml_mech_info.cm_func_group_mask &
        VAR_14) == 0)
     continue;

    if (VAR_25->ml_kcf_mechid == VAR_26) {

     *VAR_10 =
         VAR_25->ml_mech_info.cm_mech_number;
     break;
    }
   }
   *VAR_9 = VAR_27->me_sw_prov->pm_mech_info.cm_mech_number;
  }
 }

 if (VAR_17 == ((void*)0))
  *VAR_11 = VAR_2;
 else
  FUNC_5(VAR_17);

 FUNC_8(&VAR_27->me_mutex);
 return (VAR_17);
}
