
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int ulong_t ;
typedef scalar_t__ uint_t ;
typedef int uint32_t ;
typedef int uchar_t ;
struct TYPE_21__ {int hc_ocontext; int hc_icontext; } ;
typedef TYPE_4__ sha1_hmac_ctx_t ;
typedef size_t off_t ;
typedef int * crypto_spi_ctx_template_t ;
typedef int crypto_session_id_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_provider_handle_t ;
struct TYPE_22__ {scalar_t__ cm_type; int cm_param_len; int * cm_param; } ;
typedef TYPE_5__ crypto_mechanism_t ;
struct TYPE_23__ {scalar_t__ ck_format; int * ck_data; int ck_length; } ;
typedef TYPE_6__ crypto_key_t ;
struct TYPE_18__ {scalar_t__ iov_base; } ;
struct TYPE_24__ {int cd_length; int cd_format; size_t cd_offset; TYPE_3__* cd_uio; TYPE_1__ cd_raw; } ;
typedef TYPE_7__ crypto_data_t ;
struct TYPE_20__ {scalar_t__ uio_iovcnt; TYPE_2__* uio_iov; int uio_segflg; } ;
struct TYPE_19__ {size_t iov_len; size_t iov_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int *,int *,scalar_t__,int *) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (TYPE_7__*,TYPE_4__,int) ;
 int VAR_11 ;
 int FUNC_7 (int *,...) ;
 int FUNC_8 (int *,TYPE_4__*,int) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(crypto_provider_handle_t VAR_12,
    crypto_session_id_t VAR_13, crypto_mechanism_t *VAR_14,
    crypto_key_t *VAR_15, crypto_data_t *VAR_16, crypto_data_t *VAR_17,
    crypto_spi_ctx_template_t VAR_18, crypto_req_handle_t VAR_19)
{
 int VAR_20 = VAR_6;
 uchar_t VAR_21[VAR_7];
 sha1_hmac_ctx_t VAR_22;
 uint32_t VAR_23 = VAR_7;
 uint_t VAR_24 = FUNC_0(VAR_15->ck_length);

 if (VAR_14->cm_type != VAR_10 &&
     VAR_14->cm_type != VAR_9)
  return (VAR_4);


 if (VAR_15->ck_format != VAR_3)
  return (VAR_0);

 if (VAR_18 != ((void*)0)) {

  FUNC_8(VAR_18, &VAR_22, sizeof (sha1_hmac_ctx_t));
 } else {

  if (VAR_24 > VAR_8) {





   FUNC_2(&VAR_22.hc_icontext,
       VAR_15->ck_data, VAR_24, VAR_21);
   FUNC_10(&VAR_22, VAR_21,
       VAR_7);
  } else {
   FUNC_10(&VAR_22, VAR_15->ck_data,
       VAR_24);
  }
 }


 if (VAR_14->cm_type == VAR_9) {
  if (VAR_14->cm_param == ((void*)0) ||
      VAR_14->cm_param_len != sizeof (ulong_t)) {
   VAR_20 = VAR_5;
   goto bail;
  }
  FUNC_3(VAR_14, VAR_23);
  if (VAR_23 > VAR_7) {
   VAR_20 = VAR_5;
   goto bail;
  }
 }

 if (VAR_17->cd_length != VAR_23) {
  VAR_20 = VAR_2;
  goto bail;
 }


 FUNC_6(VAR_16, VAR_22, VAR_20);
 if (VAR_20 != VAR_6)

  goto bail;


 FUNC_4(VAR_21, &VAR_22.hc_icontext);





 FUNC_5(&VAR_22.hc_ocontext, VAR_21, VAR_7);





 FUNC_4(VAR_21, &VAR_22.hc_ocontext);






 switch (VAR_17->cd_format) {

 case 129:
  if (FUNC_7(VAR_21, (unsigned char *)VAR_17->cd_raw.iov_base +
      VAR_17->cd_offset, VAR_23) != 0)
   VAR_20 = VAR_2;
  break;

 case 128: {
  off_t VAR_25 = VAR_17->cd_offset;
  uint_t VAR_26 = 0;
  off_t VAR_27 = 0;
  size_t VAR_28 = VAR_23;
  size_t VAR_29;


  if (VAR_17->cd_uio->uio_segflg != VAR_11)
   return (VAR_0);


  while (VAR_26 < VAR_17->cd_uio->uio_iovcnt &&
      VAR_25 >= VAR_17->cd_uio->uio_iov[VAR_26].iov_len) {
   VAR_25 -= VAR_17->cd_uio->uio_iov[VAR_26].iov_len;
   VAR_26++;
  }
  if (VAR_26 == VAR_17->cd_uio->uio_iovcnt) {





   VAR_20 = VAR_1;
   break;
  }


  while (VAR_26 < VAR_17->cd_uio->uio_iovcnt && VAR_28 > 0) {
   VAR_29 = FUNC_1(VAR_17->cd_uio->uio_iov[VAR_26].iov_len -
       VAR_25, VAR_28);

   if (FUNC_7(VAR_21 + VAR_27,
       VAR_17->cd_uio->uio_iov[VAR_26].iov_base + VAR_25,
       VAR_29) != 0) {
    VAR_20 = VAR_2;
    break;
   }

   VAR_28 -= VAR_29;
   VAR_26++;
   VAR_27 += VAR_29;
   VAR_25 = 0;
  }
  break;
 }

 default:
  VAR_20 = VAR_0;
 }

 FUNC_9(&VAR_22, sizeof (sha1_hmac_ctx_t));
 return (VAR_20);
bail:
 FUNC_9(&VAR_22, sizeof (sha1_hmac_ctx_t));
 VAR_17->cd_length = 0;
 return (VAR_20);
}
