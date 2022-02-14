
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef unsigned char uchar_t ;
typedef int sha1_hmac_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_9__ {scalar_t__ iov_base; } ;
struct TYPE_10__ {scalar_t__ cd_length; int cd_format; int cd_offset; TYPE_1__ cd_raw; } ;
typedef TYPE_2__ crypto_data_t ;
struct TYPE_11__ {int * cc_provider_private; } ;
typedef TYPE_3__ crypto_ctx_t ;
struct TYPE_12__ {scalar_t__ hc_mech_type; scalar_t__ hc_digest_len; int hc_ocontext; int hc_icontext; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (unsigned char*,int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (unsigned char*,unsigned char*,scalar_t__) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,TYPE_2__*,scalar_t__,unsigned char*) ;

__attribute__((used)) static int
FUNC_8(crypto_ctx_t *VAR_5, crypto_data_t *VAR_6, crypto_req_handle_t VAR_7)
{
 int VAR_8 = VAR_2;
 uchar_t VAR_9[VAR_3];
 uint32_t VAR_10 = VAR_3;

 FUNC_0(VAR_5->cc_provider_private != ((void*)0));

 if (FUNC_1(VAR_5)->hc_mech_type ==
     VAR_4)
  VAR_10 = FUNC_1(VAR_5)->hc_digest_len;





 if ((VAR_6->cd_length == 0) || (VAR_6->cd_length < VAR_10)) {
  VAR_6->cd_length = VAR_10;
  return (VAR_1);
 }




 FUNC_2(VAR_9, &FUNC_1(VAR_5)->hc_icontext);





 FUNC_3(&FUNC_1(VAR_5)->hc_ocontext, VAR_9,
     VAR_3);





 switch (VAR_6->cd_format) {
 case 129:
  if (VAR_10 != VAR_3) {





   FUNC_2(VAR_9,
       &FUNC_1(VAR_5)->hc_ocontext);
   FUNC_4(VAR_9, (unsigned char *)VAR_6->cd_raw.iov_base +
       VAR_6->cd_offset, VAR_10);
  } else {
   FUNC_2((unsigned char *)VAR_6->cd_raw.iov_base +
       VAR_6->cd_offset,
       &FUNC_1(VAR_5)->hc_ocontext);
  }
  break;
 case 128:
  VAR_8 = FUNC_7(
      &FUNC_1(VAR_5)->hc_ocontext, VAR_6,
      VAR_10, VAR_9);
  break;
 default:
  VAR_8 = VAR_0;
 }

 if (VAR_8 == VAR_2) {
  VAR_6->cd_length = VAR_10;
 } else {
  VAR_6->cd_length = 0;
 }

 FUNC_5(VAR_5->cc_provider_private, sizeof (sha1_hmac_ctx_t));
 FUNC_6(VAR_5->cc_provider_private, sizeof (sha1_hmac_ctx_t));
 VAR_5->cc_provider_private = ((void*)0);

 return (VAR_8);
}
