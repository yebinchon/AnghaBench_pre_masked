
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ulong_t ;
typedef size_t uint_t ;
typedef int uchar_t ;
typedef scalar_t__ off_t ;
struct TYPE_7__ {scalar_t__ cd_offset; TYPE_2__* cd_uio; } ;
typedef TYPE_3__ crypto_data_t ;
struct TYPE_6__ {scalar_t__ uio_segflg; size_t uio_iovcnt; TYPE_1__* uio_iov; } ;
struct TYPE_5__ {scalar_t__ iov_len; int * iov_base; } ;
typedef int SHA1_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_3(SHA1_CTX *VAR_5, crypto_data_t *VAR_6,
    ulong_t VAR_7, uchar_t *VAR_8)
{
 off_t VAR_9 = VAR_6->cd_offset;
 uint_t VAR_10 = 0;


 if (VAR_6->cd_uio->uio_segflg != VAR_4)
  return (VAR_0);





 while (VAR_10 < VAR_6->cd_uio->uio_iovcnt &&
     VAR_9 >= VAR_6->cd_uio->uio_iov[VAR_10].iov_len) {
  VAR_9 -= VAR_6->cd_uio->uio_iov[VAR_10].iov_len;
  VAR_10++;
 }
 if (VAR_10 == VAR_6->cd_uio->uio_iovcnt) {





  return (VAR_1);
 }

 if (VAR_9 + VAR_7 <=
     VAR_6->cd_uio->uio_iov[VAR_10].iov_len) {




  if (VAR_7 != VAR_3) {





   FUNC_1(VAR_8, VAR_5);
   FUNC_2(VAR_8, (uchar_t *)VAR_6->
       cd_uio->uio_iov[VAR_10].iov_base + VAR_9,
       VAR_7);
  } else {
   FUNC_1((uchar_t *)VAR_6->
       cd_uio->uio_iov[VAR_10].iov_base + VAR_9,
       VAR_5);
  }
 } else {






  uchar_t VAR_11[VAR_3];
  off_t VAR_12 = 0;
  size_t VAR_13 = VAR_7;
  size_t VAR_14;

  FUNC_1(VAR_11, VAR_5);

  while (VAR_10 < VAR_6->cd_uio->uio_iovcnt && VAR_13 > 0) {
   VAR_14 = FUNC_0(VAR_6->cd_uio->uio_iov[VAR_10].iov_len -
       VAR_9, VAR_13);
   FUNC_2(VAR_11 + VAR_12,
       VAR_6->cd_uio->uio_iov[VAR_10].iov_base + VAR_9,
       VAR_14);

   VAR_13 -= VAR_14;
   VAR_10++;
   VAR_12 += VAR_14;
   VAR_9 = 0;
  }

  if (VAR_10 == VAR_6->cd_uio->uio_iovcnt && VAR_13 > 0) {






   return (VAR_1);
  }
 }

 return (VAR_2);
}
