
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef void* off_t ;
typedef int gcm_ctx_t ;
typedef int ctr_ctx_t ;
typedef int crypto_spi_ctx_template_t ;
typedef int crypto_session_id_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_provider_handle_t ;
struct TYPE_23__ {int cm_type; } ;
typedef TYPE_1__ crypto_mechanism_t ;
typedef int crypto_key_t ;
struct TYPE_24__ {int cd_length; void* cd_offset; int cd_format; } ;
typedef TYPE_2__ crypto_data_t ;
typedef int ccm_ctx_t ;
struct TYPE_25__ {size_t ac_mac_len; size_t ac_tag_len; scalar_t__ ac_remainder_len; int ac_flags; int ac_keysched_len; struct TYPE_25__* ac_keysched; } ;
typedef TYPE_3__ aes_ctx_t ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;




 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_3__*,int ,TYPE_1__*,int *,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *,TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ,int ) ;
 int FUNC_9 (int *,TYPE_2__*,int ) ;
 int FUNC_10 (int *,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_11 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_12(crypto_provider_handle_t VAR_12,
    crypto_session_id_t VAR_13, crypto_mechanism_t *VAR_14,
    crypto_key_t *VAR_15, crypto_data_t *VAR_16, crypto_data_t *VAR_17,
    crypto_spi_ctx_template_t VAR_18, crypto_req_handle_t VAR_19)
{
 aes_ctx_t VAR_20;
 off_t VAR_21;
 size_t VAR_22;
 size_t VAR_23;
 int VAR_24;

 FUNC_0(VAR_16, VAR_17);





 switch (VAR_14->cm_type) {
 case 132:
 case 133:
 case 131:
 case 130:
  break;
 default:
  if ((VAR_16->cd_length & (VAR_0 - 1)) != 0)
   return (VAR_4);
 }

 if ((VAR_24 = FUNC_2(VAR_14, ((void*)0), 0)) != VAR_5)
  return (VAR_24);

 FUNC_4(&VAR_20, sizeof (aes_ctx_t));

 VAR_24 = FUNC_3(&VAR_20, VAR_18, VAR_14, VAR_15,
     FUNC_6(VAR_19), VAR_1);
 if (VAR_24 != VAR_5)
  return (VAR_24);

 switch (VAR_14->cm_type) {
 case 133:
  VAR_23 = VAR_16->cd_length + VAR_20.ac_mac_len;
  break;
 case 130:
  if (VAR_16->cd_length != 0)
   return (VAR_2);

 case 131:
  VAR_23 = VAR_16->cd_length + VAR_20.ac_tag_len;
  break;
 default:
  VAR_23 = VAR_16->cd_length;
 }


 if (VAR_17->cd_length < VAR_23) {
  VAR_17->cd_length = VAR_23;
  VAR_24 = VAR_3;
  goto out;
 }

 VAR_21 = VAR_17->cd_offset;
 VAR_22 = VAR_17->cd_length;




 switch (VAR_16->cd_format) {
 case 129:
  VAR_24 = FUNC_7(&VAR_20, VAR_16, VAR_17,
      VAR_10, VAR_8);
  break;
 case 128:
  VAR_24 = FUNC_8(&VAR_20, VAR_16, VAR_17,
      VAR_10, VAR_8);
  break;
 default:
  VAR_24 = VAR_2;
 }

 if (VAR_24 == VAR_5) {
  if (VAR_14->cm_type == 133) {
   VAR_24 = FUNC_5((ccm_ctx_t *)&VAR_20,
       VAR_17, VAR_0, VAR_9,
       VAR_11);
   if (VAR_24 != VAR_5)
    goto out;
   FUNC_1(VAR_20.ac_remainder_len == 0);
  } else if (VAR_14->cm_type == 131 ||
      VAR_14->cm_type == 130) {
   VAR_24 = FUNC_10((gcm_ctx_t *)&VAR_20,
       VAR_17, VAR_0, VAR_9,
       VAR_7, VAR_11);
   if (VAR_24 != VAR_5)
    goto out;
   FUNC_1(VAR_20.ac_remainder_len == 0);
  } else if (VAR_14->cm_type == 132) {
   if (VAR_20.ac_remainder_len > 0) {
    VAR_24 = FUNC_9((ctr_ctx_t *)&VAR_20,
        VAR_17, VAR_9);
    if (VAR_24 != VAR_5)
     goto out;
   }
  } else {
   FUNC_1(VAR_20.ac_remainder_len == 0);
  }

  if (VAR_16 != VAR_17) {
   VAR_17->cd_length =
       VAR_17->cd_offset - VAR_21;
  }
 } else {
  VAR_17->cd_length = VAR_22;
 }
 VAR_17->cd_offset = VAR_21;

out:
 if (VAR_20.ac_flags & VAR_6) {
  FUNC_4(VAR_20.ac_keysched, VAR_20.ac_keysched_len);
  FUNC_11(VAR_20.ac_keysched, VAR_20.ac_keysched_len);
 }

 return (VAR_24);
}
