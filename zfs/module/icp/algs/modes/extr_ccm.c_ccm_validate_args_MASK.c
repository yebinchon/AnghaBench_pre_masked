
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned long long uint64_t ;
typedef int boolean_t ;
struct TYPE_3__ {size_t ulMACSize; size_t ulNonceSize; size_t ulDataSize; } ;
typedef TYPE_1__ CK_AES_CCM_PARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;

int
FUNC_0(CK_AES_CCM_PARAMS *VAR_3, boolean_t VAR_4)
{
 size_t VAR_5, VAR_6;
 uint8_t VAR_7;
 uint64_t VAR_8;





 VAR_5 = VAR_3->ulMACSize;
 if ((VAR_5 < 4) || (VAR_5 > 16) || ((VAR_5 % 2) != 0)) {
  return (VAR_0);
 }


 VAR_6 = VAR_3->ulNonceSize;
 if ((VAR_6 < 7) || (VAR_6 > 13)) {
  return (VAR_0);
 }


 VAR_7 = (uint8_t)((15 - VAR_6) & 0xFF);






 if ((!VAR_4) && (VAR_3->ulDataSize < VAR_5)) {
  return (VAR_0);
 }





 if (VAR_7 < 8) {
  VAR_8 = (1ULL << (VAR_7 * 8)) - 1;
 } else {
  VAR_8 = VAR_2;
 }

 if (VAR_3->ulDataSize > VAR_8) {
  return (VAR_0);
 }
 return (VAR_1);
}
