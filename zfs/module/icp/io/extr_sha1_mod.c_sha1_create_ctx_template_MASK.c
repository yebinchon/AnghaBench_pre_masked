
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int uchar_t ;
struct TYPE_8__ {scalar_t__ hc_mech_type; int hc_icontext; } ;
typedef TYPE_1__ sha1_hmac_ctx_t ;
typedef scalar_t__ crypto_spi_ctx_template_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_provider_handle_t ;
struct TYPE_9__ {scalar_t__ cm_type; } ;
typedef TYPE_2__ crypto_mechanism_t ;
struct TYPE_10__ {scalar_t__ ck_format; int * ck_data; int ck_length; } ;
typedef TYPE_3__ crypto_key_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,scalar_t__,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(crypto_provider_handle_t VAR_9,
    crypto_mechanism_t *VAR_10, crypto_key_t *VAR_11,
    crypto_spi_ctx_template_t *VAR_12, size_t *VAR_13,
    crypto_req_handle_t VAR_14)
{
 sha1_hmac_ctx_t *VAR_15;
 uint_t VAR_16 = FUNC_0(VAR_11->ck_length);

 if ((VAR_10->cm_type != VAR_8) &&
     (VAR_10->cm_type != VAR_7)) {
  return (VAR_3);
 }


 if (VAR_11->ck_format != VAR_2)
  return (VAR_0);




 VAR_15 = FUNC_3(sizeof (sha1_hmac_ctx_t),
     FUNC_2(VAR_14));
 if (VAR_15 == ((void*)0))
  return (VAR_1);

 if (VAR_16 > VAR_6) {
  uchar_t VAR_17[VAR_5];






  FUNC_1(&VAR_15->hc_icontext,
      VAR_11->ck_data, VAR_16, VAR_17);
  FUNC_4(VAR_15, VAR_17,
      VAR_5);
 } else {
  FUNC_4(VAR_15, VAR_11->ck_data,
      VAR_16);
 }

 VAR_15->hc_mech_type = VAR_10->cm_type;
 *VAR_12 = (crypto_spi_ctx_template_t)VAR_15;
 *VAR_13 = sizeof (sha1_hmac_ctx_t);


 return (VAR_4);
}
