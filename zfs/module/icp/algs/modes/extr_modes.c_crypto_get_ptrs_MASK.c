
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {uintptr_t uio_iovcnt; int * uio_iov; } ;
typedef TYPE_1__ uio_t ;
typedef int uint8_t ;
typedef size_t offset_t ;
struct TYPE_6__ {size_t iov_len; scalar_t__ iov_base; } ;
typedef TYPE_2__ iovec_t ;
struct TYPE_7__ {int cd_format; TYPE_1__* cd_uio; TYPE_2__ cd_raw; } ;
typedef TYPE_3__ crypto_data_t ;





void
FUNC_0(crypto_data_t *VAR_0, void **VAR_1, offset_t *VAR_2,
    uint8_t **VAR_3, size_t *VAR_4, uint8_t **VAR_5,
    size_t VAR_6)
{
 offset_t VAR_7;

 switch (VAR_0->cd_format) {
 case 129: {
  iovec_t *VAR_8;

  VAR_7 = *VAR_2;
  VAR_8 = &VAR_0->cd_raw;
  if ((VAR_7 + VAR_6) <= VAR_8->iov_len) {

   *VAR_3 = (uint8_t *)VAR_8->iov_base + VAR_7;
   *VAR_4 = VAR_6;
   *VAR_5 = ((void*)0);
   *VAR_2 = VAR_7 + VAR_6;
  }
  break;
 }

 case 128: {
  uio_t *VAR_9 = VAR_0->cd_uio;
  iovec_t *VAR_10;
  offset_t VAR_11;
  uintptr_t VAR_12;
  uint8_t *VAR_13;

  VAR_11 = *VAR_2;
  VAR_12 = (uintptr_t)(*VAR_1);
  VAR_10 = (iovec_t *)&VAR_9->uio_iov[VAR_12];
  VAR_13 = (uint8_t *)VAR_10->iov_base + VAR_11;
  *VAR_3 = VAR_13;

  if (VAR_11 + VAR_6 <= VAR_10->iov_len) {

   *VAR_4 = VAR_6;
   *VAR_5 = ((void*)0);
   *VAR_2 = VAR_11 + VAR_6;
  } else {

   *VAR_4 = VAR_10->iov_len - VAR_11;
   if (VAR_12 == VAR_9->uio_iovcnt)
    return;
   VAR_12++;
   VAR_10 = (iovec_t *)&VAR_9->uio_iov[VAR_12];
   *VAR_5 = (uint8_t *)VAR_10->iov_base;
   *VAR_2 = VAR_6 - *VAR_4;
  }
  *VAR_1 = (void *)VAR_12;
  break;
 }
 }
}
