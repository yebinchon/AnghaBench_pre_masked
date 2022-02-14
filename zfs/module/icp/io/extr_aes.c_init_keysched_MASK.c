
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ck_format; int ck_length; int ck_data; } ;
typedef TYPE_1__ crypto_key_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,void*) ;

__attribute__((used)) static int
FUNC_1(crypto_key_t *VAR_5, void *VAR_6)
{



 switch (VAR_5->ck_format) {
 case 128:
  if (VAR_5->ck_length < VAR_1 ||
      VAR_5->ck_length > VAR_0) {
   return (VAR_2);
  }


  if ((VAR_5->ck_length & 63) != 0)
   return (VAR_2);
  break;
 default:
  return (VAR_3);
 }

 FUNC_0(VAR_5->ck_data, VAR_5->ck_length, VAR_6);
 return (VAR_4);
}
