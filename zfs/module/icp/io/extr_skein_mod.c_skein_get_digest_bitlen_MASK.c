
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t sp_digest_bitlen; } ;
typedef TYPE_1__ skein_param_t ;
struct TYPE_5__ {int cm_param_len; int cm_type; int * cm_param; } ;
typedef TYPE_2__ crypto_mechanism_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static int
FUNC_0(const crypto_mechanism_t *VAR_3, size_t *VAR_4)
{
 if (VAR_3->cm_param != ((void*)0)) {

  skein_param_t *VAR_5 = (skein_param_t *)VAR_3->cm_param;

  if (VAR_3->cm_param_len != sizeof (*VAR_5) ||
      VAR_5->sp_digest_bitlen == 0) {
   return (VAR_1);
  }
  *VAR_4 = VAR_5->sp_digest_bitlen;
 } else {
  switch (VAR_3->cm_type) {
  case 129:
   *VAR_4 = 256;
   break;
  case 128:
   *VAR_4 = 512;
   break;
  case 130:
   *VAR_4 = 1024;
   break;
  default:
   return (VAR_0);
  }
 }
 return (VAR_2);
}
