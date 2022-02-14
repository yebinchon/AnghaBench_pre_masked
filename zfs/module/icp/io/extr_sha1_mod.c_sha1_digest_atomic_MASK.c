
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int crypto_session_id_t ;
typedef int crypto_req_handle_t ;
typedef int crypto_provider_handle_t ;
struct TYPE_10__ {scalar_t__ cm_type; } ;
typedef TYPE_2__ crypto_mechanism_t ;
struct TYPE_9__ {scalar_t__ iov_base; } ;
struct TYPE_11__ {int cd_format; scalar_t__ cd_length; int cd_offset; TYPE_1__ cd_raw; } ;
typedef TYPE_3__ crypto_data_t ;
typedef int SHA1_CTX ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,TYPE_3__*,scalar_t__,int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(crypto_provider_handle_t VAR_5,
    crypto_session_id_t VAR_6, crypto_mechanism_t *VAR_7,
    crypto_data_t *VAR_8, crypto_data_t *VAR_9,
    crypto_req_handle_t VAR_10)
{
 int VAR_11 = VAR_2;
 SHA1_CTX VAR_12;

 if (VAR_7->cm_type != VAR_4)
  return (VAR_1);




 FUNC_1(&VAR_12);




 switch (VAR_8->cd_format) {
 case 129:
  FUNC_2(&VAR_12,
      (uint8_t *)VAR_8->cd_raw.iov_base + VAR_8->cd_offset,
      VAR_8->cd_length);
  break;
 case 128:
  VAR_11 = FUNC_4(&VAR_12, VAR_8);
  break;
 default:
  VAR_11 = VAR_0;
 }

 if (VAR_11 != VAR_2) {

  VAR_9->cd_length = 0;
  return (VAR_11);
 }





 switch (VAR_9->cd_format) {
 case 129:
  FUNC_0((unsigned char *)VAR_9->cd_raw.iov_base +
      VAR_9->cd_offset, &VAR_12);
  break;
 case 128:
  VAR_11 = FUNC_3(&VAR_12, VAR_9,
      VAR_3, ((void*)0));
  break;
 default:
  VAR_11 = VAR_0;
 }

 if (VAR_11 == VAR_2) {
  VAR_9->cd_length = VAR_3;
 } else {
  VAR_9->cd_length = 0;
 }

 return (VAR_11);
}
