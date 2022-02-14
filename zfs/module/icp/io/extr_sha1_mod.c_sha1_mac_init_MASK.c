
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ulong_t ;
typedef scalar_t__ uint_t ;
typedef int uchar_t ;
struct TYPE_16__ {int hc_icontext; } ;
typedef TYPE_1__ sha1_hmac_ctx_t ;
typedef int * crypto_spi_ctx_template_t ;
typedef int crypto_req_handle_t ;
struct TYPE_17__ {scalar_t__ cm_type; int cm_param_len; int * cm_param; } ;
typedef TYPE_2__ crypto_mechanism_t ;
struct TYPE_18__ {scalar_t__ ck_format; int * ck_data; int ck_length; } ;
typedef TYPE_3__ crypto_key_t ;
struct TYPE_19__ {TYPE_1__* cc_provider_private; } ;
typedef TYPE_4__ crypto_ctx_t ;
struct TYPE_20__ {scalar_t__ hc_mech_type; int hc_digest_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,scalar_t__,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 TYPE_5__* FUNC_3 (TYPE_4__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int *,TYPE_5__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_5__*,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(crypto_ctx_t *VAR_10, crypto_mechanism_t *VAR_11,
    crypto_key_t *VAR_12, crypto_spi_ctx_template_t VAR_13,
    crypto_req_handle_t VAR_14)
{
 int VAR_15 = VAR_5;
 uint_t VAR_16 = FUNC_0(VAR_12->ck_length);

 if (VAR_11->cm_type != VAR_9 &&
     VAR_11->cm_type != VAR_8)
  return (VAR_3);


 if (VAR_12->ck_format != VAR_2)
  return (VAR_0);

 VAR_10->cc_provider_private = FUNC_7(sizeof (sha1_hmac_ctx_t),
     FUNC_6(VAR_14));
 if (VAR_10->cc_provider_private == ((void*)0))
  return (VAR_1);

 if (VAR_13 != ((void*)0)) {

  FUNC_4(VAR_13, FUNC_3(VAR_10),
      sizeof (sha1_hmac_ctx_t));
 } else {

  if (VAR_16 > VAR_7) {
   uchar_t VAR_17[VAR_6];
   sha1_hmac_ctx_t *VAR_18 = VAR_10->cc_provider_private;






   FUNC_1(&VAR_18->hc_icontext,
       VAR_12->ck_data, VAR_16, VAR_17);
   FUNC_9(FUNC_3(VAR_10),
       VAR_17, VAR_6);
  } else {
   FUNC_9(FUNC_3(VAR_10),
       VAR_12->ck_data, VAR_16);
  }
 }




 FUNC_3(VAR_10)->hc_mech_type = VAR_11->cm_type;
 if (VAR_11->cm_type == VAR_8) {
  if (VAR_11->cm_param == ((void*)0) ||
      VAR_11->cm_param_len != sizeof (ulong_t))
   VAR_15 = VAR_4;
  FUNC_2(VAR_11,
      FUNC_3(VAR_10)->hc_digest_len);
  if (FUNC_3(VAR_10)->hc_digest_len >
      VAR_6)
   VAR_15 = VAR_4;
 }

 if (VAR_15 != VAR_5) {
  FUNC_5(VAR_10->cc_provider_private, sizeof (sha1_hmac_ctx_t));
  FUNC_8(VAR_10->cc_provider_private, sizeof (sha1_hmac_ctx_t));
  VAR_10->cc_provider_private = ((void*)0);
 }

 return (VAR_15);
}
