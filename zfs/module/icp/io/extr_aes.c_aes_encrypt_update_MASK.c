
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef void* off_t ;
typedef int ctr_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_16__ {size_t cd_length; void* cd_offset; int cd_format; } ;
typedef TYPE_1__ crypto_data_t ;
struct TYPE_17__ {TYPE_3__* cc_provider_private; } ;
typedef TYPE_2__ crypto_ctx_t ;
struct TYPE_18__ {size_t ac_remainder_len; int ac_flags; } ;
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
 int FUNC_2 (TYPE_3__*,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(crypto_ctx_t *VAR_8, crypto_data_t *VAR_9,
    crypto_data_t *VAR_10, crypto_req_handle_t VAR_11)
{
 off_t VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15 = VAR_3;
 aes_ctx_t *VAR_16;

 FUNC_1(VAR_8->cc_provider_private != ((void*)0));
 VAR_16 = VAR_8->cc_provider_private;

 FUNC_0(VAR_9, VAR_10);


 VAR_14 = VAR_16->ac_remainder_len;
 VAR_14 += VAR_9->cd_length;
 VAR_14 &= ~(VAR_0 - 1);


 if (VAR_10->cd_length < VAR_14) {
  VAR_10->cd_length = VAR_14;
  return (VAR_2);
 }

 VAR_12 = VAR_10->cd_offset;
 VAR_13 = VAR_10->cd_length;




 switch (VAR_9->cd_format) {
 case 129:
  VAR_15 = FUNC_2(VAR_8->cc_provider_private,
      VAR_9, VAR_10, VAR_7,
      VAR_5);
  break;
 case 128:
  VAR_15 = FUNC_3(VAR_8->cc_provider_private,
      VAR_9, VAR_10, VAR_7,
      VAR_5);
  break;
 default:
  VAR_15 = VAR_1;
 }







 if ((VAR_16->ac_flags & VAR_4) && (VAR_16->ac_remainder_len > 0)) {
  VAR_15 = FUNC_4((ctr_ctx_t *)VAR_16,
      VAR_10, VAR_6);
 }

 if (VAR_15 == VAR_3) {
  if (VAR_9 != VAR_10)
   VAR_10->cd_length =
       VAR_10->cd_offset - VAR_12;
 } else {
  VAR_10->cd_length = VAR_13;
 }
 VAR_10->cd_offset = VAR_12;

 return (VAR_15);
}
