
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_12__ {int pd_mech_list_count; scalar_t__ pd_prov_type; int pd_flags; scalar_t__ pd_hash_limit; TYPE_4__* pd_mechanisms; } ;
typedef TYPE_2__ kcf_provider_desc_t ;
typedef int kcf_prov_mech_desc_t ;
struct TYPE_13__ {int * pi_mechanisms; TYPE_1__* pi_ops_vector; } ;
typedef TYPE_3__ crypto_provider_info_t ;
struct TYPE_14__ {int cm_func_group_mask; int cm_mech_flags; scalar_t__ cm_max_input_length; int cm_mech_name; } ;
typedef TYPE_4__ crypto_mech_info_t ;
struct TYPE_11__ {int * co_random_ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (size_t,TYPE_2__*,int **) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(crypto_provider_info_t *VAR_14, kcf_provider_desc_t *VAR_15)
{
 uint_t VAR_16;
 uint_t VAR_17;
 int VAR_18 = VAR_9;
 kcf_prov_mech_desc_t *VAR_19;
 int VAR_20 = 0;
 int VAR_21 = VAR_15->pd_mech_list_count;

 if (VAR_15->pd_prov_type == VAR_7) {
  if (VAR_14 != ((void*)0)) {
   FUNC_0(VAR_14->pi_mechanisms != ((void*)0));
   FUNC_1(VAR_14->pi_mechanisms, VAR_15->pd_mechanisms,
       sizeof (crypto_mech_info_t) * VAR_21);
  }
  return (VAR_9);
 }







 if (VAR_14 != ((void*)0)) {
  if (VAR_14->pi_ops_vector->co_random_ops != ((void*)0)) {
   crypto_mech_info_t *VAR_22;






   if (VAR_14->pi_mechanisms != ((void*)0)) {
    FUNC_1(VAR_14->pi_mechanisms, VAR_15->pd_mechanisms,
        sizeof (crypto_mech_info_t) * (VAR_21 - 1));
   }
   VAR_22 = &VAR_15->pd_mechanisms[VAR_21 - 1];

   FUNC_2(VAR_22, sizeof (crypto_mech_info_t));
   (void) FUNC_5(VAR_22->cm_mech_name, VAR_13,
       VAR_8);
   VAR_22->cm_func_group_mask = VAR_2;
  } else {
   FUNC_0(VAR_14->pi_mechanisms != ((void*)0));
   FUNC_1(VAR_14->pi_mechanisms, VAR_15->pd_mechanisms,
       sizeof (crypto_mech_info_t) * VAR_21);
  }
 }





 for (VAR_16 = 0; VAR_16 < VAR_15->pd_mech_list_count; VAR_16++) {
  crypto_mech_info_t *VAR_23 = &VAR_15->pd_mechanisms[VAR_16];

  if ((VAR_23->cm_mech_flags & VAR_5) &&
      (VAR_23->cm_mech_flags & VAR_6)) {
   VAR_18 = VAR_0;
   break;
  }

  if (VAR_15->pd_flags & VAR_3 &&
      VAR_23->cm_func_group_mask & VAR_1) {
   if (VAR_23->cm_max_input_length == 0) {
    VAR_18 = VAR_0;
    break;
   } else {
    VAR_15->pd_hash_limit = VAR_23->cm_max_input_length;
   }
  }

  if ((VAR_18 = FUNC_3(VAR_16, VAR_15, &VAR_19)) !=
      VAR_12)
   break;

  if (VAR_19 == ((void*)0))
   continue;


  VAR_20++;
 }







 if (VAR_20 == 0 && VAR_15->pd_prov_type == VAR_10)
  return (VAR_0);

 if (VAR_18 == VAR_12)
  return (VAR_9);





 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  FUNC_4(
      VAR_15->pd_mechanisms[VAR_17].cm_mech_name, VAR_15);
 }

 if (VAR_18 == VAR_11)
  return (VAR_4);

 return (VAR_0);
}
