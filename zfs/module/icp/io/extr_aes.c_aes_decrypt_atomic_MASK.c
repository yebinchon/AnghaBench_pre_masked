
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef void* off_t ;
struct TYPE_26__ {scalar_t__ gcm_pt_buf_len; int * gcm_pt_buf; } ;
typedef TYPE_1__ gcm_ctx_t ;
typedef int ctr_ctx_t ;
typedef int crypto_spi_ctx_template_t ;
typedef int crypto_session_id_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_provider_handle_t ;
struct TYPE_27__ {int cm_type; } ;
typedef TYPE_2__ crypto_mechanism_t ;
typedef int crypto_key_t ;
struct TYPE_28__ {int cd_length; void* cd_offset; int cd_format; } ;
typedef TYPE_3__ crypto_data_t ;
typedef int ccm_ctx_t ;
struct TYPE_29__ {size_t ac_data_len; size_t ac_tag_len; scalar_t__ ac_processed_data_len; scalar_t__ ac_processed_mac_len; scalar_t__ ac_mac_len; scalar_t__ ac_remainder_len; int ac_flags; int ac_keysched_len; int * ac_pt_buf; struct TYPE_29__* ac_keysched; } ;
typedef TYPE_4__ aes_ctx_t ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int VAR_0 ;




 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_4__*,int ,TYPE_2__*,int *,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int *,TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int ,int ) ;
 int FUNC_9 (int *,TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_3__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_14(crypto_provider_handle_t VAR_16,
    crypto_session_id_t VAR_17, crypto_mechanism_t *VAR_18,
    crypto_key_t *VAR_19, crypto_data_t *VAR_20, crypto_data_t *VAR_21,
    crypto_spi_ctx_template_t VAR_22, crypto_req_handle_t VAR_23)
{
 aes_ctx_t VAR_24;
 off_t VAR_25;
 size_t VAR_26;
 size_t VAR_27;
 int VAR_28;

 FUNC_0(VAR_20, VAR_21);





 switch (VAR_18->cm_type) {
 case 132:
 case 133:
 case 131:
 case 130:
  break;
 default:
  if ((VAR_20->cd_length & (VAR_0 - 1)) != 0)
   return (VAR_6);
 }

 if ((VAR_28 = FUNC_2(VAR_18, ((void*)0), 0)) != VAR_7)
  return (VAR_28);

 FUNC_4(&VAR_24, sizeof (aes_ctx_t));

 VAR_28 = FUNC_3(&VAR_24, VAR_22, VAR_18, VAR_19,
     FUNC_6(VAR_23), VAR_1);
 if (VAR_28 != VAR_7)
  return (VAR_28);

 switch (VAR_18->cm_type) {
 case 133:
  VAR_27 = VAR_24.ac_data_len;
  break;
 case 131:
  VAR_27 = VAR_20->cd_length - VAR_24.ac_tag_len;
  break;
 case 130:
  if (VAR_21->cd_length != 0)
   return (VAR_3);
  VAR_27 = 0;
  break;
 default:
  VAR_27 = VAR_20->cd_length;
 }


 if (VAR_21->cd_length < VAR_27) {
  VAR_21->cd_length = VAR_27;
  VAR_28 = VAR_4;
  goto out;
 }

 VAR_25 = VAR_21->cd_offset;
 VAR_26 = VAR_21->cd_length;

 if (VAR_18->cm_type == 131 ||
     VAR_18->cm_type == 130)
  FUNC_11((gcm_ctx_t *)&VAR_24, FUNC_6(VAR_23));




 switch (VAR_20->cd_format) {
 case 129:
  VAR_28 = FUNC_7(&VAR_24, VAR_20, VAR_21,
      VAR_13, VAR_12);
  break;
 case 128:
  VAR_28 = FUNC_8(&VAR_24, VAR_20, VAR_21,
      VAR_13, VAR_12);
  break;
 default:
  VAR_28 = VAR_3;
 }

 if (VAR_28 == VAR_7) {
  if (VAR_18->cm_type == 133) {
   FUNC_1(VAR_24.ac_processed_data_len
       == VAR_24.ac_data_len);
   FUNC_1(VAR_24.ac_processed_mac_len
       == VAR_24.ac_mac_len);
   VAR_28 = FUNC_5((ccm_ctx_t *)&VAR_24,
       VAR_21, VAR_0, VAR_14,
       VAR_11, VAR_15);
   FUNC_1(VAR_24.ac_remainder_len == 0);
   if ((VAR_28 == VAR_7) &&
       (VAR_20 != VAR_21)) {
    VAR_21->cd_length =
        VAR_21->cd_offset - VAR_25;
   } else {
    VAR_21->cd_length = VAR_26;
   }
  } else if (VAR_18->cm_type == 131 ||
      VAR_18->cm_type == 130) {
   VAR_28 = FUNC_10((gcm_ctx_t *)&VAR_24,
       VAR_21, VAR_0, VAR_14,
       VAR_15);
   FUNC_1(VAR_24.ac_remainder_len == 0);
   if ((VAR_28 == VAR_7) &&
       (VAR_20 != VAR_21)) {
    VAR_21->cd_length =
        VAR_21->cd_offset - VAR_25;
   } else {
    VAR_21->cd_length = VAR_26;
   }
  } else if (VAR_18->cm_type != 132) {
   FUNC_1(VAR_24.ac_remainder_len == 0);
   if (VAR_20 != VAR_21)
    VAR_21->cd_length =
        VAR_21->cd_offset - VAR_25;
  } else {
   if (VAR_24.ac_remainder_len > 0) {
    VAR_28 = FUNC_9((ctr_ctx_t *)&VAR_24,
        VAR_21, VAR_14);
    if (VAR_28 == VAR_5)
     VAR_28 = VAR_6;
    if (VAR_28 != VAR_7)
     goto out;
   }
   if (VAR_20 != VAR_21)
    VAR_21->cd_length =
        VAR_21->cd_offset - VAR_25;
  }
 } else {
  VAR_21->cd_length = VAR_26;
 }
 VAR_21->cd_offset = VAR_25;

out:
 if (VAR_24.ac_flags & VAR_10) {
  FUNC_4(VAR_24.ac_keysched, VAR_24.ac_keysched_len);
  FUNC_12(VAR_24.ac_keysched, VAR_24.ac_keysched_len);
 }

 if (VAR_24.ac_flags & VAR_2) {
  if (VAR_24.ac_pt_buf != ((void*)0)) {
   FUNC_13(VAR_24.ac_pt_buf, VAR_24.ac_data_len);
  }
 } else if (VAR_24.ac_flags & (VAR_8|VAR_9)) {
  if (((gcm_ctx_t *)&VAR_24)->gcm_pt_buf != ((void*)0)) {
   FUNC_13(((gcm_ctx_t *)&VAR_24)->gcm_pt_buf,
       ((gcm_ctx_t *)&VAR_24)->gcm_pt_buf_len);
  }
 }

 return (VAR_28);
}
