
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int pd_flags; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
typedef int kcf_prov_tried_t ;
struct TYPE_14__ {TYPE_1__* pm_prov_desc; struct TYPE_14__* pm_next; } ;
typedef TYPE_2__ kcf_prov_mech_desc_t ;
typedef size_t kcf_ops_class_t ;
struct TYPE_15__ {int met_size; TYPE_4__* met_tab; } ;
typedef TYPE_3__ kcf_mech_entry_tab_t ;
struct TYPE_16__ {size_t me_threshold; scalar_t__ me_num_hwprov; int me_mutex; TYPE_2__* me_sw_prov; TYPE_2__* me_hw_prov_chain; } ;
typedef TYPE_4__ kcf_mech_entry_t ;
typedef int crypto_mech_type_t ;
typedef int crypto_func_group_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 size_t VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 size_t VAR_4 ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

kcf_provider_desc_t *
FUNC_10(crypto_mech_type_t VAR_7, kcf_mech_entry_t **VAR_8,
    int *VAR_9, kcf_prov_tried_t *VAR_10, crypto_func_group_t VAR_11,
    boolean_t VAR_12, size_t VAR_13)
{
 kcf_provider_desc_t *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 kcf_prov_mech_desc_t *VAR_16, *VAR_17;
 int VAR_18, VAR_19 = VAR_2;
 kcf_ops_class_t VAR_20;
 int VAR_21;
 kcf_mech_entry_t *VAR_22;
 kcf_mech_entry_tab_t *VAR_23;

 VAR_20 = FUNC_4(VAR_7);
 if ((VAR_20 < VAR_3) || (VAR_20 > VAR_4)) {
  *VAR_9 = VAR_0;
  return (((void*)0));
 }

 VAR_23 = &VAR_6[VAR_20];
 VAR_21 = FUNC_5(VAR_7);
 if ((VAR_21 < 0) || (VAR_21 >= VAR_23->met_size)) {
  *VAR_9 = VAR_0;
  return (((void*)0));
 }

 VAR_22 = &((VAR_23->met_tab)[VAR_21]);
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_22;

 FUNC_8(&VAR_22->me_mutex);

 VAR_16 = VAR_22->me_hw_prov_chain;






 if ((VAR_16 != ((void*)0)) &&
     ((VAR_13 == 0) || (VAR_22->me_threshold == 0) ||
     (VAR_13 >= VAR_22->me_threshold) ||
     ((VAR_17 = VAR_22->me_sw_prov) == ((void*)0)) ||
     (!FUNC_1(VAR_17, VAR_11)) ||
     (!FUNC_3(VAR_17->pm_prov_desc)))) {
  FUNC_0(VAR_22->me_num_hwprov > 0);






  while (VAR_16 != ((void*)0)) {
   VAR_14 = VAR_16->pm_prov_desc;

   if (!FUNC_1(VAR_16, VAR_11) ||
       !FUNC_3(VAR_14) ||
       FUNC_2(VAR_14, VAR_10) ||
       (VAR_12 &&
       (VAR_14->pd_flags & VAR_5))) {
    VAR_16 = VAR_16->pm_next;
    continue;
   }

   if ((VAR_18 = FUNC_6(VAR_14)) < VAR_19) {
    VAR_19 = VAR_18;
    VAR_15 = VAR_14;
   }

   VAR_16 = VAR_16->pm_next;
  }

  VAR_14 = VAR_15;
 }


 if (VAR_14 == ((void*)0) && (VAR_17 = VAR_22->me_sw_prov) != ((void*)0)) {
  VAR_14 = VAR_17->pm_prov_desc;
  if (!FUNC_1(VAR_17, VAR_11) ||
      !FUNC_3(VAR_14) ||
      FUNC_2(VAR_14, VAR_10) ||
      (VAR_12 && (VAR_14->pd_flags & VAR_5)))
   VAR_14 = ((void*)0);
 }

 if (VAR_14 == ((void*)0)) {






  if (VAR_10 == ((void*)0))
   *VAR_9 = VAR_1;
 } else
  FUNC_7(VAR_14);

 FUNC_9(&VAR_22->me_mutex);
 return (VAR_14);
}
