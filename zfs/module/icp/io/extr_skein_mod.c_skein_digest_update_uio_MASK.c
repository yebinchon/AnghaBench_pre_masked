
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ uio_segflg; size_t uio_iovcnt; TYPE_1__* uio_iov; } ;
typedef TYPE_2__ uio_t ;
typedef size_t uint_t ;
typedef int uint8_t ;
typedef int skein_ctx_t ;
typedef scalar_t__ off_t ;
struct TYPE_7__ {scalar_t__ cd_offset; size_t cd_length; TYPE_2__* cd_uio; } ;
typedef TYPE_3__ crypto_data_t ;
struct TYPE_5__ {scalar_t__ iov_len; scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (int *,int ,int *,size_t) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(skein_ctx_t *VAR_5, const crypto_data_t *VAR_6)
{
 off_t VAR_7 = VAR_6->cd_offset;
 size_t VAR_8 = VAR_6->cd_length;
 uint_t VAR_9 = 0;
 size_t VAR_10;
 const uio_t *VAR_11 = VAR_6->cd_uio;


 if (VAR_11->uio_segflg != VAR_3)
  return (VAR_0);





 while (VAR_9 < VAR_11->uio_iovcnt &&
     VAR_7 >= VAR_11->uio_iov[VAR_9].iov_len) {
  VAR_7 -= VAR_11->uio_iov[VAR_9].iov_len;
  VAR_9++;
 }
 if (VAR_9 == VAR_11->uio_iovcnt) {




  return (VAR_1);
 }




 while (VAR_9 < VAR_11->uio_iovcnt && VAR_8 > 0) {
  VAR_10 = FUNC_0(VAR_11->uio_iov[VAR_9].iov_len - VAR_7, VAR_8);
  FUNC_1(VAR_5, VAR_4, (uint8_t *)VAR_11->uio_iov[VAR_9].iov_base
      + VAR_7, VAR_10);
  VAR_8 -= VAR_10;
  VAR_9++;
  VAR_7 = 0;
 }

 if (VAR_9 == VAR_11->uio_iovcnt && VAR_8 > 0) {





  return (VAR_1);
 }

 return (VAR_2);
}
