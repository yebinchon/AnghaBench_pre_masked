
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_5__ {char* pd_description; int pd_mech_list_count; int pd_remove_cv; int pd_resume_cv; int pd_lock; int pd_state; int pd_prov_id; int ** pd_mech_indx; void* pd_mechanisms; void* pd_ops_vector; } ;
typedef TYPE_1__ kcf_provider_desc_t ;
struct TYPE_6__ {int pi_mech_list_count; scalar_t__ pi_provider_type; scalar_t__ pi_interface_version; int * pi_ops_vector; } ;
typedef TYPE_2__ crypto_provider_info_t ;
typedef int crypto_ops_t ;
typedef int crypto_mech_info_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,void*,int*) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 char* FUNC_4 (int,int ) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char,int) ;
 int FUNC_7 (int *,int *,int ,int *) ;

kcf_provider_desc_t *
FUNC_8(crypto_provider_info_t *VAR_12)
{
 int VAR_13, VAR_14;
 kcf_provider_desc_t *VAR_15;
 uint_t VAR_16 = VAR_12->pi_mech_list_count;
 crypto_ops_t *VAR_17 = VAR_12->pi_ops_vector;

 VAR_15 = FUNC_5(sizeof (kcf_provider_desc_t), VAR_10);
 VAR_15->pd_description = FUNC_4(VAR_1 + 1,
     VAR_10);
 (void) FUNC_6(VAR_15->pd_description, ' ',
     VAR_1);
 VAR_15->pd_description[VAR_1] = '\0';







 VAR_15->pd_ops_vector = FUNC_5(sizeof (crypto_ops_t), VAR_10);

 if (VAR_12->pi_provider_type != VAR_0) {
  FUNC_0(VAR_17, VAR_15->pd_ops_vector, &VAR_16);
  if (VAR_12->pi_interface_version >= VAR_2)
   FUNC_1(VAR_17, VAR_15->pd_ops_vector);
  if (VAR_12->pi_interface_version == VAR_3)
   FUNC_2(VAR_17, VAR_15->pd_ops_vector);
 }

 VAR_15->pd_mech_list_count = VAR_16;
 VAR_15->pd_mechanisms = FUNC_5(sizeof (crypto_mech_info_t) *
     VAR_16, VAR_10);
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
   VAR_15->pd_mech_indx[VAR_13][VAR_14] = VAR_5;

 VAR_15->pd_prov_id = VAR_8;
 VAR_15->pd_state = VAR_9;

 FUNC_7(&VAR_15->pd_lock, ((void*)0), VAR_11, ((void*)0));
 FUNC_3(&VAR_15->pd_resume_cv, ((void*)0), VAR_4, ((void*)0));
 FUNC_3(&VAR_15->pd_remove_cv, ((void*)0), VAR_4, ((void*)0));

 return (VAR_15);
}
