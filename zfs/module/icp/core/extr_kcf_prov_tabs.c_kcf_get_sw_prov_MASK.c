
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int kcf_provider_desc_t ;
struct TYPE_6__ {int me_mutex; int me_name; TYPE_1__* me_sw_prov; } ;
typedef TYPE_2__ kcf_mech_entry_t ;
typedef int crypto_mech_type_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int * pm_prov_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(crypto_mech_type_t VAR_5, kcf_provider_desc_t **VAR_6,
    kcf_mech_entry_t **VAR_7, boolean_t VAR_8)
{
 kcf_mech_entry_t *VAR_9;


 if (FUNC_2(VAR_5, &VAR_9) != VAR_4)
  return (VAR_1);





 FUNC_3(&VAR_9->me_mutex);

 if (VAR_9->me_sw_prov == ((void*)0) ||
     (*VAR_6 = VAR_9->me_sw_prov->pm_prov_desc) == ((void*)0)) {

  if (VAR_8)
   FUNC_1(VAR_0, "no SW provider for \"%s\"\n",
       VAR_9->me_name);
  FUNC_4(&VAR_9->me_mutex);
  return (VAR_2);
 }

 FUNC_0(*VAR_6);
 FUNC_4(&VAR_9->me_mutex);

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_9;

 return (VAR_3);
}
