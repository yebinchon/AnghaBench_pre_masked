
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_6__ {size_t pd_mech_list_count; int pd_prov_id; TYPE_1__* pd_mechanisms; } ;
typedef TYPE_2__ kcf_provider_desc_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int cm_mech_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

void
FUNC_2(kcf_provider_desc_t *VAR_0, boolean_t VAR_1)
{
 uint_t VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->pd_mech_list_count;
     VAR_2++) {
  FUNC_1(
      VAR_0->pd_mechanisms[VAR_2].cm_mech_name, VAR_0);
 }


 if (VAR_1)
  (void) FUNC_0(VAR_0->pd_prov_id);
}
