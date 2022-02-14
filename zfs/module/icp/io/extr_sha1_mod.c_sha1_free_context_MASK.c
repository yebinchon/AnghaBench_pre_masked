
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef scalar_t__ sha1_mech_type_t ;
typedef int sha1_hmac_ctx_t ;
typedef int sha1_ctx_t ;
struct TYPE_5__ {int * cc_provider_private; } ;
typedef TYPE_1__ crypto_ctx_t ;
struct TYPE_6__ {scalar_t__ sc_mech_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(crypto_ctx_t *VAR_4)
{
 uint_t VAR_5;
 sha1_mech_type_t VAR_6;

 if (VAR_4->cc_provider_private == ((void*)0))
  return (VAR_0);






 VAR_6 = FUNC_1(VAR_4)->sc_mech_type;
 if (VAR_6 == VAR_3)
  VAR_5 = sizeof (sha1_ctx_t);
 else {
  FUNC_0(VAR_6 == VAR_2 ||
      VAR_6 == VAR_1);
  VAR_5 = sizeof (sha1_hmac_ctx_t);
 }

 FUNC_2(VAR_4->cc_provider_private, VAR_5);
 FUNC_3(VAR_4->cc_provider_private, VAR_5);
 VAR_4->cc_provider_private = ((void*)0);

 return (VAR_0);
}
