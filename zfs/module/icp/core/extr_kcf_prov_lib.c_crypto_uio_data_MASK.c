
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
typedef int uchar_t ;
typedef scalar_t__ off_t ;
struct TYPE_7__ {scalar_t__ cd_offset; scalar_t__ cd_format; int cd_length; TYPE_2__* cd_uio; } ;
typedef TYPE_3__ crypto_data_t ;
typedef int cmd_type_t ;
struct TYPE_5__ {scalar_t__ iov_len; scalar_t__ iov_base; } ;


 int FUNC_0 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 size_t FUNC_1 (scalar_t__,size_t) ;


 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,int *,size_t) ;

int
FUNC_4(crypto_data_t *VAR_7, uchar_t *VAR_8, int VAR_9, cmd_type_t VAR_10,
    void *VAR_11, void (*VAR_12)(void))
{
 uio_t *VAR_13 = VAR_7->cd_uio;
 off_t VAR_14 = VAR_7->cd_offset;
 size_t VAR_15 = VAR_9;
 uint_t VAR_16;
 size_t VAR_17;
 uchar_t *VAR_18;

 FUNC_0(VAR_7->cd_format == VAR_3);
 if (VAR_13->uio_segflg != VAR_6) {
  return (VAR_0);
 }





 for (VAR_16 = 0; VAR_16 < VAR_13->uio_iovcnt &&
     VAR_14 >= VAR_13->uio_iov[VAR_16].iov_len;
     VAR_14 -= VAR_13->uio_iov[VAR_16++].iov_len)
  ;

 if (VAR_16 == VAR_13->uio_iovcnt && VAR_15 > 0) {




  return (VAR_2);
 }

 while (VAR_16 < VAR_13->uio_iovcnt && VAR_15 > 0) {
  VAR_17 = FUNC_1(VAR_13->uio_iov[VAR_16].iov_len -
      VAR_14, VAR_15);

  VAR_18 = (uchar_t *)(VAR_13->uio_iov[VAR_16].iov_base +
      VAR_14);
  switch (VAR_10) {
  case 133:
   FUNC_3(VAR_18, VAR_8, VAR_17);
   VAR_8 += VAR_17;
   break;
  case 132:
   FUNC_3(VAR_8, VAR_18, VAR_17);
   VAR_8 += VAR_17;
   break;
  case 134:
   if (FUNC_2(VAR_18, VAR_8, VAR_17))
    return (VAR_4);
   VAR_8 += VAR_17;
   break;
  case 130:
  case 129:
  case 128:
  case 131:
   return (VAR_0);
  }

  VAR_15 -= VAR_17;
  VAR_16++;
  VAR_14 = 0;
 }

 if (VAR_16 == VAR_13->uio_iovcnt && VAR_15 > 0) {




  switch (VAR_10) {
  case 132:
   VAR_7->cd_length = VAR_9;
   return (VAR_1);
  default:
   return (VAR_2);
  }
 }

 return (VAR_5);
}
