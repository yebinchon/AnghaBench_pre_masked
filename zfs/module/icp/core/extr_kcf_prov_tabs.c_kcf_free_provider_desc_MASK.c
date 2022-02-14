
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ks_taskq; } ;
struct TYPE_6__ {size_t pd_prov_id; int pd_mech_list_count; int pd_remove_cv; int pd_resume_cv; int pd_lock; TYPE_1__ pd_sched_info; struct TYPE_6__* pd_mechanisms; struct TYPE_6__* pd_ops_vector; struct TYPE_6__* co_nostore_key_ops; struct TYPE_6__* co_mech_ops; struct TYPE_6__* co_ctx_ops; struct TYPE_6__* co_provider_ops; struct TYPE_6__* co_key_ops; struct TYPE_6__* co_object_ops; struct TYPE_6__* co_session_ops; struct TYPE_6__* co_random_ops; struct TYPE_6__* co_dual_cipher_mac_ops; struct TYPE_6__* co_dual_ops; struct TYPE_6__* co_verify_ops; struct TYPE_6__* co_sign_ops; struct TYPE_6__* co_mac_ops; struct TYPE_6__* co_cipher_ops; struct TYPE_6__* co_digest_ops; struct TYPE_6__* co_control_ops; struct TYPE_6__* pd_description; } ;
typedef TYPE_2__ kcf_provider_desc_t ;
typedef int crypto_verify_ops_t ;
typedef int crypto_sign_ops_t ;
typedef int crypto_session_ops_t ;
typedef int crypto_random_number_ops_t ;
typedef int crypto_provider_management_ops_t ;
typedef int crypto_ops_t ;
typedef int crypto_object_ops_t ;
typedef int crypto_nostore_key_ops_t ;
typedef int crypto_mech_ops_t ;
typedef int crypto_mech_info_t ;
typedef int crypto_mac_ops_t ;
typedef int crypto_key_ops_t ;
typedef int crypto_dual_ops_t ;
typedef int crypto_dual_cipher_mac_ops_t ;
typedef int crypto_digest_ops_t ;
typedef int crypto_ctx_ops_t ;
typedef int crypto_control_ops_t ;
typedef int crypto_cipher_ops_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int ** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;

void
FUNC_7(kcf_provider_desc_t *VAR_5)
{
 if (VAR_5 == ((void*)0))
  return;

 FUNC_4(&VAR_3);
 if (VAR_5->pd_prov_id != VAR_1) {

  FUNC_0(VAR_2[VAR_5->pd_prov_id] != ((void*)0));
  VAR_2[VAR_5->pd_prov_id] = ((void*)0);
  VAR_4--;
 }
 FUNC_5(&VAR_3);



 if (VAR_5->pd_description != ((void*)0))
  FUNC_2(VAR_5->pd_description,
      VAR_0 + 1);

 if (VAR_5->pd_ops_vector != ((void*)0)) {

  if (VAR_5->pd_ops_vector->co_control_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_control_ops,
       sizeof (crypto_control_ops_t));

  if (VAR_5->pd_ops_vector->co_digest_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_digest_ops,
       sizeof (crypto_digest_ops_t));

  if (VAR_5->pd_ops_vector->co_cipher_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_cipher_ops,
       sizeof (crypto_cipher_ops_t));

  if (VAR_5->pd_ops_vector->co_mac_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_mac_ops,
       sizeof (crypto_mac_ops_t));

  if (VAR_5->pd_ops_vector->co_sign_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_sign_ops,
       sizeof (crypto_sign_ops_t));

  if (VAR_5->pd_ops_vector->co_verify_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_verify_ops,
       sizeof (crypto_verify_ops_t));

  if (VAR_5->pd_ops_vector->co_dual_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_dual_ops,
       sizeof (crypto_dual_ops_t));

  if (VAR_5->pd_ops_vector->co_dual_cipher_mac_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_dual_cipher_mac_ops,
       sizeof (crypto_dual_cipher_mac_ops_t));

  if (VAR_5->pd_ops_vector->co_random_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_random_ops,
       sizeof (crypto_random_number_ops_t));

  if (VAR_5->pd_ops_vector->co_session_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_session_ops,
       sizeof (crypto_session_ops_t));

  if (VAR_5->pd_ops_vector->co_object_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_object_ops,
       sizeof (crypto_object_ops_t));

  if (VAR_5->pd_ops_vector->co_key_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_key_ops,
       sizeof (crypto_key_ops_t));

  if (VAR_5->pd_ops_vector->co_provider_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_provider_ops,
       sizeof (crypto_provider_management_ops_t));

  if (VAR_5->pd_ops_vector->co_ctx_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_ctx_ops,
       sizeof (crypto_ctx_ops_t));

  if (VAR_5->pd_ops_vector->co_mech_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_mech_ops,
       sizeof (crypto_mech_ops_t));

  if (VAR_5->pd_ops_vector->co_nostore_key_ops != ((void*)0))
   FUNC_2(VAR_5->pd_ops_vector->co_nostore_key_ops,
       sizeof (crypto_nostore_key_ops_t));

  FUNC_2(VAR_5->pd_ops_vector, sizeof (crypto_ops_t));
 }

 if (VAR_5->pd_mechanisms != ((void*)0))

  FUNC_2(VAR_5->pd_mechanisms, sizeof (crypto_mech_info_t) *
      VAR_5->pd_mech_list_count);

 if (VAR_5->pd_sched_info.ks_taskq != ((void*)0))
  FUNC_6(VAR_5->pd_sched_info.ks_taskq);

 FUNC_3(&VAR_5->pd_lock);
 FUNC_1(&VAR_5->pd_resume_cv);
 FUNC_1(&VAR_5->pd_remove_cv);

 FUNC_2(VAR_5, sizeof (kcf_provider_desc_t));
}
