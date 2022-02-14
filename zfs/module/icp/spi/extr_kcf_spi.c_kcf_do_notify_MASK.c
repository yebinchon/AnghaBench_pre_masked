
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pd_state; scalar_t__ pd_prov_type; scalar_t__ ec_provider_type; int pd_mech_list_count; int pd_flags; TYPE_1__* pd_mechanisms; int ec_mech_name; int ec_change; } ;
typedef TYPE_2__ kcf_provider_desc_t ;
typedef TYPE_2__ crypto_notify_event_change_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int cm_mech_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(kcf_provider_desc_t *VAR_9, boolean_t VAR_10)
{
 int VAR_11;
 crypto_notify_event_change_t VAR_12;

 FUNC_0(VAR_9->pd_state > VAR_8);






 if (VAR_9->pd_prov_type != VAR_3) {
  VAR_12.ec_provider_type = VAR_9->pd_prov_type;
  VAR_12.ec_change = VAR_10 ? VAR_5 :
      VAR_6;
  for (VAR_11 = 0; VAR_11 < VAR_9->pd_mech_list_count; VAR_11++) {
   (void) FUNC_2(VAR_12.ec_mech_name,
       VAR_9->pd_mechanisms[VAR_11].cm_mech_name,
       VAR_4);
   FUNC_1(VAR_0, &VAR_12);
  }

 }







 if (VAR_9->pd_prov_type == VAR_3 ||
     (VAR_9->pd_flags & VAR_7) == 0) {
  FUNC_1(VAR_10 ? VAR_1 :
      VAR_2, VAR_9);
 }
}
