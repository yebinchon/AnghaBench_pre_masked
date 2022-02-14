
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_11__ {scalar_t__ pd_state; scalar_t__ pd_prov_type; scalar_t__ pd_refcnt; scalar_t__ pd_irefcnt; size_t pd_mech_list_count; int pd_lock; int pd_remove_cv; TYPE_1__* pd_mechanisms; int pd_resume_cv; } ;
typedef TYPE_2__ kcf_provider_desc_t ;
typedef scalar_t__ kcf_prov_state_t ;
typedef int crypto_provider_id_t ;
typedef scalar_t__ crypto_kcf_provider_handle_t ;
struct TYPE_10__ {int cm_mech_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;

int
FUNC_13(crypto_kcf_provider_handle_t VAR_10)
{
 uint_t VAR_11;
 kcf_provider_desc_t *VAR_12;
 kcf_prov_state_t VAR_13;


 if ((VAR_12 = FUNC_7((crypto_provider_id_t)VAR_10)) == ((void*)0))
  return (VAR_5);

 FUNC_10(&VAR_12->pd_lock);




 if (VAR_12->pd_state >= VAR_7) {
  FUNC_11(&VAR_12->pd_lock);

  FUNC_1(VAR_12);
  return (VAR_1);
 }

 VAR_13 = VAR_12->pd_state;
 VAR_12->pd_state = VAR_9;

 if (VAR_13 == VAR_6) {




  FUNC_2(&VAR_12->pd_resume_cv);
 }

 if (VAR_12->pd_prov_type == VAR_4) {





  if (VAR_12->pd_refcnt > VAR_12->pd_irefcnt + 1) {
   VAR_12->pd_state = VAR_13;
   FUNC_11(&VAR_12->pd_lock);

   FUNC_1(VAR_12);





   return (VAR_1);
  }
 }
 FUNC_11(&VAR_12->pd_lock);

 if (VAR_12->pd_prov_type != VAR_4) {
  FUNC_12(VAR_12);
 }

 if (VAR_12->pd_prov_type != VAR_2) {

  for (VAR_11 = 0; VAR_11 < VAR_12->pd_mech_list_count;
      VAR_11++) {
   FUNC_9(
       VAR_12->pd_mechanisms[VAR_11].cm_mech_name, VAR_12);
  }
 }


 if (FUNC_8((crypto_provider_id_t)VAR_10) !=
     VAR_3) {

  FUNC_1(VAR_12);
  return (VAR_5);
 }

 FUNC_4(VAR_12);

 if (VAR_12->pd_prov_type == VAR_4) {

  FUNC_1(VAR_12);




  FUNC_10(&VAR_12->pd_lock);
  while (VAR_12->pd_state != VAR_8)
   FUNC_3(&VAR_12->pd_remove_cv, &VAR_12->pd_lock);
  FUNC_11(&VAR_12->pd_lock);
 } else {




  FUNC_10(&VAR_12->pd_lock);
  while (VAR_12->pd_irefcnt > 0)
   FUNC_3(&VAR_12->pd_remove_cv, &VAR_12->pd_lock);
  FUNC_11(&VAR_12->pd_lock);
 }

 FUNC_5(VAR_12, VAR_0);

 if (VAR_12->pd_prov_type == VAR_4) {





  FUNC_0(VAR_12->pd_state == VAR_8 &&
      VAR_12->pd_refcnt == 0);
  FUNC_6(VAR_12);
 } else {
  FUNC_1(VAR_12);
 }

 return (VAR_3);
}
