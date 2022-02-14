
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {uintptr_t uio_iovcnt; TYPE_1__* uio_iov; } ;
typedef TYPE_2__ uio_t ;
typedef int offset_t ;
struct TYPE_7__ {int cd_format; int cd_offset; TYPE_2__* cd_uio; } ;
typedef TYPE_3__ crypto_data_t ;
struct TYPE_5__ {int iov_len; } ;





void
FUNC_0(crypto_data_t *VAR_0, void **VAR_1, offset_t *VAR_2)
{
 offset_t VAR_3;

 switch (VAR_0->cd_format) {
 case 129:
  *VAR_2 = VAR_0->cd_offset;
  break;

 case 128: {
  uio_t *VAR_4 = VAR_0->cd_uio;
  uintptr_t VAR_5;

  VAR_3 = VAR_0->cd_offset;
  for (VAR_5 = 0; VAR_5 < VAR_4->uio_iovcnt &&
      VAR_3 >= VAR_4->uio_iov[VAR_5].iov_len;
      VAR_3 -= VAR_4->uio_iov[VAR_5++].iov_len)
   ;

  *VAR_2 = VAR_3;
  *VAR_1 = (void *)VAR_5;
  break;
 }
 }
}
