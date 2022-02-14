
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sc_digest_bitlen; int sc_mech_type; } ;
typedef TYPE_1__ skein_ctx_t ;
struct TYPE_10__ {int cm_type; } ;
typedef TYPE_2__ crypto_mechanism_t ;
struct TYPE_11__ {scalar_t__ ck_format; int ck_length; int ck_data; } ;
typedef TYPE_3__ crypto_key_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_4(skein_ctx_t *VAR_5, crypto_mechanism_t *VAR_6,
    crypto_key_t *VAR_7)
{
 int VAR_8;

 if (!FUNC_2(VAR_6->cm_type))
  return (VAR_2);
 if (VAR_7->ck_format != VAR_1)
  return (VAR_0);
 VAR_5->sc_mech_type = VAR_6->cm_type;
 VAR_8 = FUNC_3(VAR_6, &VAR_5->sc_digest_bitlen);
 if (VAR_8 != VAR_3)
  return (VAR_8);
 FUNC_1(VAR_5, VAR_4, VAR_5->sc_digest_bitlen, 0, VAR_7->ck_data,
     FUNC_0(VAR_7->ck_length));

 return (VAR_3);
}
