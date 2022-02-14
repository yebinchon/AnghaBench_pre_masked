
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int gcm_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_15__ {int cd_length; size_t cd_offset; } ;
typedef TYPE_1__ crypto_data_t ;
struct TYPE_16__ {TYPE_3__* cc_provider_private; } ;
typedef TYPE_2__ crypto_ctx_t ;
typedef int ccm_ctx_t ;
struct TYPE_17__ {int ac_flags; size_t ac_tag_len; scalar_t__ ac_remainder_len; int ac_mac_len; } ;
typedef TYPE_3__ aes_ctx_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
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
 int FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_4 (int *,TYPE_1__*,int,int ,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(crypto_ctx_t *VAR_10, crypto_data_t *VAR_11,
    crypto_data_t *VAR_12, crypto_req_handle_t VAR_13)
{
 int VAR_14 = VAR_4;

 aes_ctx_t *VAR_15;
 size_t VAR_16, VAR_17, VAR_18;

 FUNC_1(VAR_10->cc_provider_private != ((void*)0));
 VAR_15 = VAR_10->cc_provider_private;





 if (((VAR_15->ac_flags & (VAR_6|130|129|128))
     == 0) && (VAR_11->cd_length & (VAR_0 - 1)) != 0)
  return (VAR_3);

 FUNC_0(VAR_11, VAR_12);





 switch (VAR_15->ac_flags & (130|129|128)) {
 case 130:
  VAR_18 = VAR_11->cd_length + VAR_15->ac_mac_len;
  break;
 case 129:
  VAR_18 = VAR_11->cd_length + VAR_15->ac_tag_len;
  break;
 case 128:
  if (VAR_11->cd_length != 0)
   return (VAR_1);

  VAR_18 = VAR_15->ac_tag_len;
  break;
 default:
  VAR_18 = VAR_11->cd_length;
 }

 if (VAR_12->cd_length < VAR_18) {
  VAR_12->cd_length = VAR_18;
  return (VAR_2);
 }

 VAR_16 = VAR_12->cd_length;
 VAR_17 = VAR_12->cd_offset;




 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_14 != VAR_5) {
  return (VAR_14);
 }





 if (VAR_15->ac_flags & 130) {







  VAR_12->cd_offset = VAR_12->cd_length;
  VAR_12->cd_length = VAR_16 - VAR_12->cd_length;
  VAR_14 = FUNC_4((ccm_ctx_t *)VAR_15, VAR_12,
      VAR_0, VAR_8, VAR_9);
  if (VAR_14 != VAR_5) {
   return (VAR_14);
  }

  if (VAR_11 != VAR_12) {
   VAR_12->cd_length =
       VAR_12->cd_offset - VAR_17;
  }
  VAR_12->cd_offset = VAR_17;
 } else if (VAR_15->ac_flags & (129|128)) {







  VAR_12->cd_offset = VAR_12->cd_length;
  VAR_12->cd_length = VAR_16 - VAR_12->cd_length;
  VAR_14 = FUNC_5((gcm_ctx_t *)VAR_15, VAR_12,
      VAR_0, VAR_8, VAR_7,
      VAR_9);
  if (VAR_14 != VAR_5) {
   return (VAR_14);
  }

  if (VAR_11 != VAR_12) {
   VAR_12->cd_length =
       VAR_12->cd_offset - VAR_17;
  }
  VAR_12->cd_offset = VAR_17;
 }

 FUNC_1(VAR_15->ac_remainder_len == 0);
 (void) FUNC_3(VAR_10);

 return (VAR_14);
}
