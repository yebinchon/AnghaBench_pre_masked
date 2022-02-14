
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int u64; int i; } ;
typedef TYPE_1__ TValue ;
typedef int StrScanFmt ;


 int VAR_0 ;





__attribute__((used)) static StrScanFmt FUNC_0(const uint8_t *VAR_1, TValue *VAR_2,
         StrScanFmt VAR_3, int32_t VAR_4, uint32_t VAR_5)
{
  uint64_t VAR_6 = 0;


  if (VAR_5 > 22 || (VAR_5 == 22 && *VAR_1 > '1')) return VAR_0;
  while (VAR_5-- > 0) {
    if (!(*VAR_1 >= '0' && *VAR_1 <= '7')) return VAR_0;
    VAR_6 = (VAR_6 << 3) + (*VAR_1++ & 7);
  }


  switch (VAR_3) {
  case 130:
    if (VAR_6 >= 0x80000000u+VAR_4) VAR_3 = 129;

  case 129:
    if ((VAR_6 >> 32)) return VAR_0;
    VAR_2->i = VAR_4 ? -(int32_t)VAR_6 : (int32_t)VAR_6;
    break;
  default:
  case 131:
  case 128:
    VAR_2->u64 = VAR_4 ? (uint64_t)-(int64_t)VAR_6 : VAR_6;
    break;
  }
  return VAR_3;
}
