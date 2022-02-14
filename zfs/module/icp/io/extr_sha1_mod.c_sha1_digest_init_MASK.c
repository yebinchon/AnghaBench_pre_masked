
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sha1_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_7__ {scalar_t__ cm_type; } ;
typedef TYPE_1__ crypto_mechanism_t ;
struct TYPE_8__ {int * cc_provider_private; } ;
typedef TYPE_2__ crypto_ctx_t ;
struct TYPE_9__ {int sc_sha1_ctx; scalar_t__ sc_mech_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int,int ) ;

__attribute__((used)) static int
FUNC_4(crypto_ctx_t *VAR_4, crypto_mechanism_t *VAR_5,
    crypto_req_handle_t VAR_6)
{
 if (VAR_5->cm_type != VAR_3)
  return (VAR_1);




 VAR_4->cc_provider_private = FUNC_3(sizeof (sha1_ctx_t),
     FUNC_2(VAR_6));
 if (VAR_4->cc_provider_private == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_4)->sc_mech_type = VAR_3;
 FUNC_1(&FUNC_0(VAR_4)->sc_sha1_ctx);

 return (VAR_2);
}
