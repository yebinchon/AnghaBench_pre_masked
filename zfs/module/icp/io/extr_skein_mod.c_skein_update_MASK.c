
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int crypto_req_handle_t ;
struct TYPE_5__ {scalar_t__ iov_base; } ;
struct TYPE_6__ {int cd_format; int cd_length; int cd_offset; TYPE_1__ cd_raw; } ;
typedef TYPE_2__ crypto_data_t ;
typedef int crypto_ctx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(crypto_ctx_t *VAR_3, crypto_data_t *VAR_4, crypto_req_handle_t VAR_5)
{
 int VAR_6 = VAR_1;

 FUNC_0(FUNC_1(VAR_3) != ((void*)0));

 switch (VAR_4->cd_format) {
 case 129:
  FUNC_2(FUNC_1(VAR_3), VAR_2,
      (uint8_t *)VAR_4->cd_raw.iov_base + VAR_4->cd_offset,
      VAR_4->cd_length);
  break;
 case 128:
  VAR_6 = FUNC_3(FUNC_1(VAR_3), VAR_4);
  break;
 default:
  VAR_6 = VAR_0;
 }

 return (VAR_6);
}
