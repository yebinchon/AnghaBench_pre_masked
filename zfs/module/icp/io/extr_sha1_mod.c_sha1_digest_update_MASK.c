
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int crypto_req_handle_t ;
struct TYPE_9__ {scalar_t__ iov_base; } ;
struct TYPE_10__ {int cd_format; int cd_length; int cd_offset; TYPE_1__ cd_raw; } ;
typedef TYPE_2__ crypto_data_t ;
struct TYPE_11__ {int * cc_provider_private; } ;
typedef TYPE_3__ crypto_ctx_t ;
struct TYPE_12__ {int sc_sha1_ctx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(crypto_ctx_t *VAR_2, crypto_data_t *VAR_3,
    crypto_req_handle_t VAR_4)
{
 int VAR_5 = VAR_1;

 FUNC_0(VAR_2->cc_provider_private != ((void*)0));




 switch (VAR_3->cd_format) {
 case 129:
  FUNC_2(&FUNC_1(VAR_2)->sc_sha1_ctx,
      (uint8_t *)VAR_3->cd_raw.iov_base + VAR_3->cd_offset,
      VAR_3->cd_length);
  break;
 case 128:
  VAR_5 = FUNC_3(&FUNC_1(VAR_2)->sc_sha1_ctx,
      VAR_3);
  break;
 default:
  VAR_5 = VAR_0;
 }

 return (VAR_5);
}
