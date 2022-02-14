
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ uio_segflg; size_t uio_iovcnt; TYPE_1__* uio_iov; } ;
typedef TYPE_2__ uio_t ;
typedef size_t uint_t ;
typedef int uint8_t ;
typedef int uchar_t ;
struct TYPE_10__ {int sc_digest_bitlen; } ;
typedef TYPE_3__ skein_ctx_t ;
typedef scalar_t__ off_t ;
typedef int crypto_req_handle_t ;
struct TYPE_11__ {scalar_t__ cd_offset; TYPE_2__* cd_uio; } ;
typedef TYPE_4__ crypto_data_t ;
struct TYPE_8__ {scalar_t__ iov_len; scalar_t__ iov_base; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (scalar_t__,size_t) ;
 int FUNC_2 (TYPE_3__*,int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,scalar_t__,size_t) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (size_t,int ) ;
 int FUNC_6 (int *,size_t) ;

__attribute__((used)) static int
FUNC_7(skein_ctx_t *VAR_6, crypto_data_t *VAR_7,
    crypto_req_handle_t VAR_8)
{
 off_t VAR_9 = VAR_7->cd_offset;
 uint_t VAR_10 = 0;
 uio_t *VAR_11 = VAR_7->cd_uio;


 if (VAR_11->uio_segflg != VAR_5)
  return (VAR_0);




 while (VAR_10 < VAR_11->uio_iovcnt &&
     VAR_9 >= VAR_11->uio_iov[VAR_10].iov_len) {
  VAR_9 -= VAR_11->uio_iov[VAR_10].iov_len;
  VAR_10++;
 }
 if (VAR_10 == VAR_11->uio_iovcnt) {




  return (VAR_1);
 }
 if (VAR_9 + FUNC_0(VAR_6->sc_digest_bitlen) <=
     VAR_11->uio_iov[VAR_10].iov_len) {

  FUNC_2(VAR_6, VAR_4,
      (uchar_t *)VAR_11->uio_iov[VAR_10].iov_base + VAR_9);
 } else {
  uint8_t *VAR_12;
  off_t VAR_13 = 0;
  size_t VAR_14 = FUNC_0(VAR_6->sc_digest_bitlen);
  size_t VAR_15;

  VAR_12 = FUNC_5(FUNC_0(
      VAR_6->sc_digest_bitlen), FUNC_4(VAR_8));
  if (VAR_12 == ((void*)0))
   return (VAR_2);
  FUNC_2(VAR_6, VAR_4, VAR_12);
  while (VAR_10 < VAR_11->uio_iovcnt && VAR_14 > 0) {
   VAR_15 = FUNC_1(VAR_11->uio_iov[VAR_10].iov_len - VAR_9,
       VAR_14);
   FUNC_3(VAR_12 + VAR_13,
       VAR_11->uio_iov[VAR_10].iov_base + VAR_9, VAR_15);

   VAR_14 -= VAR_15;
   VAR_10++;
   VAR_13 += VAR_15;
   VAR_9 = 0;
  }
  FUNC_6(VAR_12, FUNC_0(VAR_6->sc_digest_bitlen));

  if (VAR_10 == VAR_11->uio_iovcnt && VAR_14 > 0) {






   return (VAR_1);
  }
 }

 return (VAR_3);
}
