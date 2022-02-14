
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sha1_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_11__ {scalar_t__ iov_base; } ;
struct TYPE_12__ {scalar_t__ cd_length; int cd_format; int cd_offset; TYPE_1__ cd_raw; } ;
typedef TYPE_2__ crypto_data_t ;
struct TYPE_13__ {int * cc_provider_private; } ;
typedef TYPE_3__ crypto_ctx_t ;
struct TYPE_14__ {int sc_sha1_ctx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 TYPE_9__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (unsigned char*,int *) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_2__*,scalar_t__,int *) ;
 int FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(crypto_ctx_t *VAR_4, crypto_data_t *VAR_5, crypto_data_t *VAR_6,
    crypto_req_handle_t VAR_7)
{
 int VAR_8 = VAR_2;

 FUNC_0(VAR_4->cc_provider_private != ((void*)0));





 if ((VAR_6->cd_length == 0) ||
     (VAR_6->cd_length < VAR_3)) {
  VAR_6->cd_length = VAR_3;
  return (VAR_1);
 }




 switch (VAR_5->cd_format) {
 case 129:
  FUNC_3(&FUNC_1(VAR_4)->sc_sha1_ctx,
      (uint8_t *)VAR_5->cd_raw.iov_base + VAR_5->cd_offset,
      VAR_5->cd_length);
  break;
 case 128:
  VAR_8 = FUNC_6(&FUNC_1(VAR_4)->sc_sha1_ctx,
      VAR_5);
  break;
 default:
  VAR_8 = VAR_0;
 }

 if (VAR_8 != VAR_2) {

  FUNC_4(VAR_4->cc_provider_private, sizeof (sha1_ctx_t));
  VAR_4->cc_provider_private = ((void*)0);
  VAR_6->cd_length = 0;
  return (VAR_8);
 }





 switch (VAR_6->cd_format) {
 case 129:
  FUNC_2((unsigned char *)VAR_6->cd_raw.iov_base +
      VAR_6->cd_offset, &FUNC_1(VAR_4)->sc_sha1_ctx);
  break;
 case 128:
  VAR_8 = FUNC_5(&FUNC_1(VAR_4)->sc_sha1_ctx,
      VAR_6, VAR_3, ((void*)0));
  break;
 default:
  VAR_8 = VAR_0;
 }



 if (VAR_8 == VAR_2) {
  VAR_6->cd_length = VAR_3;
 } else {
  VAR_6->cd_length = 0;
 }

 FUNC_4(VAR_4->cc_provider_private, sizeof (sha1_ctx_t));
 VAR_4->cc_provider_private = ((void*)0);
 return (VAR_8);
}
