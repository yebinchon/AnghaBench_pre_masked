
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uchar_t ;
struct TYPE_5__ {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_6__ {int cd_format; int cd_length; scalar_t__ cd_offset; TYPE_1__ cd_raw; } ;
typedef TYPE_2__ crypto_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_2__*,int *,int,int ,int *,int *) ;

int
FUNC_2(uchar_t *VAR_4, crypto_data_t *VAR_5, int VAR_6)
{
 switch (VAR_5->cd_format) {
 case 129:
  if (VAR_5->cd_raw.iov_len < VAR_6) {
   VAR_5->cd_length = VAR_6;
   return (VAR_2);
  }
  FUNC_0(VAR_4, (uchar_t *)(VAR_5->cd_raw.iov_base +
      VAR_5->cd_offset), VAR_6);
  break;

 case 128:
  return (FUNC_1(VAR_5, VAR_4, VAR_6,
      VAR_0, ((void*)0), ((void*)0)));
 default:
  return (VAR_1);
 }

 return (VAR_3);
}
