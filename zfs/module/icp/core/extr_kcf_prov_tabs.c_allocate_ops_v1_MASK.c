
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int crypto_verify_ops_t ;
typedef int crypto_sign_ops_t ;
typedef int crypto_session_ops_t ;
typedef int crypto_random_number_ops_t ;
typedef int crypto_provider_management_ops_t ;
struct TYPE_4__ {int * co_ctx_ops; int * co_provider_ops; int * co_key_ops; int * co_object_ops; int * co_session_ops; int * co_random_ops; int * co_dual_cipher_mac_ops; int * co_dual_ops; int * co_verify_ops; int * co_sign_ops; int * co_mac_ops; int * co_cipher_ops; int * co_digest_ops; int * co_control_ops; } ;
typedef TYPE_1__ crypto_ops_t ;
typedef int crypto_object_ops_t ;
typedef int crypto_mac_ops_t ;
typedef int crypto_key_ops_t ;
typedef int crypto_dual_ops_t ;
typedef int crypto_dual_cipher_mac_ops_t ;
typedef int crypto_digest_ops_t ;
typedef int crypto_ctx_ops_t ;
typedef int crypto_control_ops_t ;
typedef int crypto_cipher_ops_t ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(crypto_ops_t *VAR_1, crypto_ops_t *VAR_2, uint_t *VAR_3)
{
 if (VAR_1->co_control_ops != ((void*)0))
  VAR_2->co_control_ops = FUNC_0(sizeof (crypto_control_ops_t),
      VAR_0);

 if (VAR_1->co_digest_ops != ((void*)0))
  VAR_2->co_digest_ops = FUNC_0(sizeof (crypto_digest_ops_t),
      VAR_0);

 if (VAR_1->co_cipher_ops != ((void*)0))
  VAR_2->co_cipher_ops = FUNC_0(sizeof (crypto_cipher_ops_t),
      VAR_0);

 if (VAR_1->co_mac_ops != ((void*)0))
  VAR_2->co_mac_ops = FUNC_0(sizeof (crypto_mac_ops_t),
      VAR_0);

 if (VAR_1->co_sign_ops != ((void*)0))
  VAR_2->co_sign_ops = FUNC_0(sizeof (crypto_sign_ops_t),
      VAR_0);

 if (VAR_1->co_verify_ops != ((void*)0))
  VAR_2->co_verify_ops = FUNC_0(sizeof (crypto_verify_ops_t),
      VAR_0);

 if (VAR_1->co_dual_ops != ((void*)0))
  VAR_2->co_dual_ops = FUNC_0(sizeof (crypto_dual_ops_t),
      VAR_0);

 if (VAR_1->co_dual_cipher_mac_ops != ((void*)0))
  VAR_2->co_dual_cipher_mac_ops = FUNC_0(
      sizeof (crypto_dual_cipher_mac_ops_t), VAR_0);

 if (VAR_1->co_random_ops != ((void*)0)) {
  VAR_2->co_random_ops = FUNC_0(
      sizeof (crypto_random_number_ops_t), VAR_0);







  (*VAR_3)++;
 }

 if (VAR_1->co_session_ops != ((void*)0))
  VAR_2->co_session_ops = FUNC_0(sizeof (crypto_session_ops_t),
      VAR_0);

 if (VAR_1->co_object_ops != ((void*)0))
  VAR_2->co_object_ops = FUNC_0(sizeof (crypto_object_ops_t),
      VAR_0);

 if (VAR_1->co_key_ops != ((void*)0))
  VAR_2->co_key_ops = FUNC_0(sizeof (crypto_key_ops_t),
      VAR_0);

 if (VAR_1->co_provider_ops != ((void*)0))
  VAR_2->co_provider_ops = FUNC_0(
      sizeof (crypto_provider_management_ops_t), VAR_0);

 if (VAR_1->co_ctx_ops != ((void*)0))
  VAR_2->co_ctx_ops = FUNC_0(sizeof (crypto_ctx_ops_t),
      VAR_0);
}
