
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {struct TYPE_14__* pl_next; TYPE_2__* pl_provider; } ;
typedef TYPE_1__ kcf_provider_list_t ;
struct TYPE_15__ {scalar_t__ pd_prov_type; int pd_flags; scalar_t__ pd_state; int pd_lock; TYPE_1__* pd_provider_list; } ;
typedef TYPE_2__ kcf_provider_desc_t ;
typedef size_t kcf_ops_class_t ;
struct TYPE_16__ {int met_size; TYPE_4__* met_tab; } ;
typedef TYPE_3__ kcf_mech_entry_tab_t ;
struct TYPE_17__ {int me_mutex; } ;
typedef TYPE_4__ kcf_mech_entry_t ;
typedef int crypto_mech_type_t ;
typedef int crypto_func_group_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 size_t VAR_8 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*,int ) ;
 TYPE_3__* VAR_12 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int
FUNC_10(crypto_mech_type_t VAR_13,
    crypto_mech_type_t VAR_14, boolean_t VAR_15,
    kcf_provider_desc_t *VAR_16, kcf_provider_desc_t **VAR_17, crypto_func_group_t VAR_18)
{
 kcf_provider_desc_t *VAR_19, *VAR_20 = VAR_16;
 kcf_provider_desc_t *VAR_21 = ((void*)0);
 kcf_provider_desc_t *VAR_22 = ((void*)0);
 kcf_provider_list_t *VAR_23;
 kcf_ops_class_t VAR_24;
 kcf_mech_entry_t *VAR_25;
 kcf_mech_entry_tab_t *VAR_26;
 int VAR_27, VAR_28, VAR_29 = VAR_5, VAR_30 = VAR_4;


 VAR_24 = FUNC_2(VAR_13);
 if ((VAR_24 < VAR_6) || (VAR_24 > VAR_8)) {
  return (VAR_2);
 }

 VAR_26 = &VAR_12[VAR_24];
 VAR_27 = FUNC_3(VAR_13);
 if ((VAR_27 < 0) || (VAR_27 >= VAR_26->met_size)) {
  return (VAR_2);
 }

 VAR_25 = &((VAR_26->met_tab)[VAR_27]);
 FUNC_8(&VAR_25->me_mutex);







 if (VAR_16->pd_prov_type == VAR_1) {
  if (VAR_16->pd_provider_list == ((void*)0)) {
   VAR_20 = ((void*)0);
   VAR_30 = VAR_0;
   goto out;
  }




  FUNC_8(&VAR_16->pd_lock);
  VAR_23 = VAR_16->pd_provider_list;
  while (VAR_23 != ((void*)0)) {
   VAR_19 = VAR_23->pl_provider;

   FUNC_0(VAR_19->pd_prov_type !=
       VAR_1);

   if (VAR_15 &&
       (VAR_19->pd_flags & VAR_11)) {
    VAR_23 = VAR_23->pl_next;
    continue;
   }

   if (!FUNC_7(VAR_19, VAR_25, VAR_18)) {
    VAR_23 = VAR_23->pl_next;
    continue;
   }


   if (VAR_14 != VAR_3) {
    int VAR_31;

    VAR_31 = FUNC_6(VAR_19,
        VAR_14);
    if (VAR_31 == VAR_7) {
     VAR_23 = VAR_23->pl_next;
     continue;
    }
   }

   if (VAR_19->pd_state != VAR_10) {

    if (VAR_19->pd_state == VAR_9)
     VAR_22 = VAR_19;
    VAR_23 = VAR_23->pl_next;
    continue;
   }

   VAR_28 = FUNC_4(VAR_19);
   if (VAR_28 < VAR_29) {
    VAR_29 = VAR_28;
    VAR_21 = VAR_19;
   }

   VAR_23 = VAR_23->pl_next;
  }

  if (VAR_21 != ((void*)0)) {
   VAR_20 = VAR_21;
   FUNC_5(VAR_20);
  } else if (VAR_22 != ((void*)0)) {
   VAR_20 = VAR_22;
   FUNC_5(VAR_20);
  } else {

   VAR_20 = ((void*)0);
   VAR_30 = VAR_2;
  }
  FUNC_9(&VAR_16->pd_lock);

 } else {
  if (!FUNC_1(VAR_16) ||
      (VAR_15 && (VAR_16->pd_flags & VAR_11))) {
   VAR_20 = ((void*)0);
   VAR_30 = VAR_0;
   goto out;
  }

  if (!FUNC_7(VAR_16, VAR_25, VAR_18)) {
   VAR_20 = ((void*)0);
   VAR_30 = VAR_2;
   goto out;
  }

  FUNC_5(VAR_20);
 }
out:
 FUNC_9(&VAR_25->me_mutex);
 *VAR_17 = VAR_20;
 return (VAR_30);
}
