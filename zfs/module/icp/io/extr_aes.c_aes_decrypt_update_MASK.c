
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef void* off_t ;
typedef int gcm_ctx_t ;
typedef int ctr_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_16__ {size_t cd_length; void* cd_offset; int cd_format; } ;
typedef TYPE_1__ crypto_data_t ;
struct TYPE_17__ {TYPE_3__* cc_provider_private; } ;
typedef TYPE_2__ crypto_ctx_t ;
struct TYPE_18__ {int ac_flags; size_t ac_remainder_len; } ;
typedef TYPE_3__ aes_ctx_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(crypto_ctx_t *VAR_13, crypto_data_t *VAR_14,
    crypto_data_t *VAR_15, crypto_req_handle_t VAR_16)
{
 off_t VAR_17;
 size_t VAR_18, VAR_19;
 int VAR_20 = VAR_6;
 aes_ctx_t *VAR_21;

 FUNC_1(VAR_13->cc_provider_private != ((void*)0));
 VAR_21 = VAR_13->cc_provider_private;

 FUNC_0(VAR_14, VAR_15);






 if ((VAR_21->ac_flags & (VAR_1|VAR_8|VAR_9)) == 0) {
  VAR_19 = VAR_21->ac_remainder_len;
  VAR_19 += VAR_14->cd_length;
  VAR_19 &= ~(VAR_0 - 1);


  if (VAR_15->cd_length < VAR_19) {
   VAR_15->cd_length = VAR_19;
   return (VAR_3);
  }
 }

 VAR_17 = VAR_15->cd_offset;
 VAR_18 = VAR_15->cd_length;

 if (VAR_21->ac_flags & (VAR_8|VAR_9))
  FUNC_6((gcm_ctx_t *)VAR_21, FUNC_2(VAR_16));




 switch (VAR_14->cd_format) {
 case 129:
  VAR_20 = FUNC_3(VAR_13->cc_provider_private,
      VAR_14, VAR_15, VAR_11,
      VAR_10);
  break;
 case 128:
  VAR_20 = FUNC_4(VAR_13->cc_provider_private,
      VAR_14, VAR_15, VAR_11,
      VAR_10);
  break;
 default:
  VAR_20 = VAR_2;
 }







 if ((VAR_21->ac_flags & VAR_7) && (VAR_21->ac_remainder_len > 0)) {
  VAR_20 = FUNC_5((ctr_ctx_t *)VAR_21, VAR_15,
      VAR_12);
  if (VAR_20 == VAR_4)
   VAR_20 = VAR_5;
 }

 if (VAR_20 == VAR_6) {
  if (VAR_14 != VAR_15)
   VAR_15->cd_length =
       VAR_15->cd_offset - VAR_17;
 } else {
  VAR_15->cd_length = VAR_18;
 }
 VAR_15->cd_offset = VAR_17;


 return (VAR_20);
}
