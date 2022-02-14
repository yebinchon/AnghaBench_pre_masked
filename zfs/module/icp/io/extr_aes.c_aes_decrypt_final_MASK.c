
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* off_t ;
struct TYPE_12__ {size_t gcm_processed_data_len; size_t gcm_tag_len; } ;
typedef TYPE_1__ gcm_ctx_t ;
typedef int ctr_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_13__ {scalar_t__ cd_format; size_t cd_length; void* cd_offset; } ;
typedef TYPE_2__ crypto_data_t ;
struct TYPE_14__ {TYPE_4__* cc_provider_private; } ;
typedef TYPE_3__ crypto_ctx_t ;
typedef int ccm_ctx_t ;
struct TYPE_15__ {scalar_t__ ac_remainder_len; int ac_flags; size_t ac_data_len; size_t ac_processed_data_len; scalar_t__ ac_processed_mac_len; scalar_t__ ac_mac_len; } ;
typedef TYPE_4__ aes_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_14 ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(crypto_ctx_t *VAR_15, crypto_data_t *VAR_16,
    crypto_req_handle_t VAR_17)
{
 aes_ctx_t *VAR_18;
 int VAR_19;
 off_t VAR_20;
 size_t VAR_21;

 FUNC_0(VAR_15->cc_provider_private != ((void*)0));
 VAR_18 = VAR_15->cc_provider_private;

 if (VAR_16->cd_format != VAR_5 &&
     VAR_16->cd_format != VAR_6) {
  return (VAR_2);
 }






 if (VAR_18->ac_remainder_len > 0) {
  if ((VAR_18->ac_flags & VAR_9) == 0)
   return (VAR_7);
  else {
   VAR_19 = FUNC_3((ctr_ctx_t *)VAR_18, VAR_16,
       VAR_13);
   if (VAR_19 == VAR_4)
    VAR_19 = VAR_7;
   if (VAR_19 != VAR_8)
    return (VAR_19);
  }
 }

 if (VAR_18->ac_flags & VAR_1) {




  size_t VAR_22 = VAR_18->ac_data_len;
  if (VAR_16->cd_length < VAR_22) {
   VAR_16->cd_length = VAR_22;
   return (VAR_3);
  }

  FUNC_0(VAR_18->ac_processed_data_len == VAR_22);
  FUNC_0(VAR_18->ac_processed_mac_len == VAR_18->ac_mac_len);
  VAR_20 = VAR_16->cd_offset;
  VAR_21 = VAR_16->cd_length;
  VAR_19 = FUNC_2((ccm_ctx_t *)VAR_18, VAR_16,
      VAR_0, VAR_13, VAR_12,
      VAR_14);
  if (VAR_19 == VAR_8) {
   VAR_16->cd_length = VAR_16->cd_offset - VAR_20;
  } else {
   VAR_16->cd_length = VAR_21;
  }

  VAR_16->cd_offset = VAR_20;
  if (VAR_19 != VAR_8) {
   return (VAR_19);
  }
 } else if (VAR_18->ac_flags & (VAR_10|VAR_11)) {




  gcm_ctx_t *VAR_23 = (gcm_ctx_t *)VAR_18;
  size_t VAR_24 = VAR_23->gcm_processed_data_len - VAR_23->gcm_tag_len;

  if (VAR_16->cd_length < VAR_24) {
   VAR_16->cd_length = VAR_24;
   return (VAR_3);
  }

  VAR_20 = VAR_16->cd_offset;
  VAR_21 = VAR_16->cd_length;
  VAR_19 = FUNC_4((gcm_ctx_t *)VAR_18, VAR_16,
      VAR_0, VAR_13, VAR_14);
  if (VAR_19 == VAR_8) {
   VAR_16->cd_length = VAR_16->cd_offset - VAR_20;
  } else {
   VAR_16->cd_length = VAR_21;
  }

  VAR_16->cd_offset = VAR_20;
  if (VAR_19 != VAR_8) {
   return (VAR_19);
  }
 }


 if ((VAR_18->ac_flags & (VAR_9|VAR_1|VAR_10|VAR_11)) == 0) {
  VAR_16->cd_length = 0;
 }

 (void) FUNC_1(VAR_15);

 return (VAR_8);
}
