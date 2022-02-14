
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int gcm_ctx_t ;
typedef int ctr_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_10__ {scalar_t__ cd_format; size_t cd_offset; size_t cd_length; } ;
typedef TYPE_1__ crypto_data_t ;
struct TYPE_11__ {TYPE_3__* cc_provider_private; } ;
typedef TYPE_2__ crypto_ctx_t ;
typedef int ccm_ctx_t ;
struct TYPE_12__ {int ac_flags; scalar_t__ ac_remainder_len; } ;
typedef TYPE_3__ aes_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(crypto_ctx_t *VAR_13, crypto_data_t *VAR_14,
    crypto_req_handle_t VAR_15)
{
 aes_ctx_t *VAR_16;
 int VAR_17;

 FUNC_0(VAR_13->cc_provider_private != ((void*)0));
 VAR_16 = VAR_13->cc_provider_private;

 if (VAR_14->cd_format != VAR_4 &&
     VAR_14->cd_format != VAR_5) {
  return (VAR_2);
 }

 if (VAR_16->ac_flags & VAR_7) {
  if (VAR_16->ac_remainder_len > 0) {
   VAR_17 = FUNC_3((ctr_ctx_t *)VAR_16, VAR_14,
       VAR_11);
   if (VAR_17 != VAR_6)
    return (VAR_17);
  }
 } else if (VAR_16->ac_flags & VAR_1) {
  VAR_17 = FUNC_2((ccm_ctx_t *)VAR_16, VAR_14,
      VAR_0, VAR_11, VAR_12);
  if (VAR_17 != VAR_6) {
   return (VAR_17);
  }
 } else if (VAR_16->ac_flags & (VAR_8|VAR_9)) {
  size_t VAR_18 = VAR_14->cd_offset;

  VAR_17 = FUNC_4((gcm_ctx_t *)VAR_16, VAR_14,
      VAR_0, VAR_11, VAR_10,
      VAR_12);
  if (VAR_17 != VAR_6) {
   return (VAR_17);
  }
  VAR_14->cd_length = VAR_14->cd_offset - VAR_18;
  VAR_14->cd_offset = VAR_18;
 } else {





  if (VAR_16->ac_remainder_len > 0) {
   return (VAR_3);
  }
  VAR_14->cd_length = 0;
 }

 (void) FUNC_1(VAR_13);

 return (VAR_6);
}
