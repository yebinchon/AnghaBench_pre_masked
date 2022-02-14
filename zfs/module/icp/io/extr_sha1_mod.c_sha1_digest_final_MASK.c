
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sha1_ctx_t ;
typedef int crypto_req_handle_t ;
struct TYPE_9__ {scalar_t__ iov_base; } ;
struct TYPE_10__ {scalar_t__ cd_length; int cd_format; int cd_offset; TYPE_1__ cd_raw; } ;
typedef TYPE_2__ crypto_data_t ;
struct TYPE_11__ {int * cc_provider_private; } ;
typedef TYPE_3__ crypto_ctx_t ;
struct TYPE_12__ {int sc_sha1_ctx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (unsigned char*,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_2__*,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_5(crypto_ctx_t *VAR_4, crypto_data_t *VAR_5,
    crypto_req_handle_t VAR_6)
{
 int VAR_7 = VAR_2;

 FUNC_0(VAR_4->cc_provider_private != ((void*)0));





 if ((VAR_5->cd_length == 0) ||
     (VAR_5->cd_length < VAR_3)) {
  VAR_5->cd_length = VAR_3;
  return (VAR_1);
 }




 switch (VAR_5->cd_format) {
 case 129:
  FUNC_2((unsigned char *)VAR_5->cd_raw.iov_base +
      VAR_5->cd_offset, &FUNC_1(VAR_4)->sc_sha1_ctx);
  break;
 case 128:
  VAR_7 = FUNC_4(&FUNC_1(VAR_4)->sc_sha1_ctx,
      VAR_5, VAR_3, ((void*)0));
  break;
 default:
  VAR_7 = VAR_0;
 }



 if (VAR_7 == VAR_2) {
  VAR_5->cd_length = VAR_3;
 } else {
  VAR_5->cd_length = 0;
 }

 FUNC_3(VAR_4->cc_provider_private, sizeof (sha1_ctx_t));
 VAR_4->cc_provider_private = ((void*)0);

 return (VAR_7);
}
