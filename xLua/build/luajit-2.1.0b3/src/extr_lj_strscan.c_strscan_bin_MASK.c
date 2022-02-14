
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_4__ {int i; int u64; } ;
typedef TYPE_1__ TValue ;
typedef int StrScanFmt ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int,TYPE_1__*,int,int) ;

__attribute__((used)) static StrScanFmt FUNC_2(const uint8_t *VAR_5, TValue *VAR_6,
         StrScanFmt VAR_7, uint32_t VAR_8,
         int32_t VAR_9, int32_t VAR_10, uint32_t VAR_11)
{
  uint64_t VAR_12 = 0;
  uint32_t VAR_13;

  if (VAR_9 || VAR_11 > 64) return VAR_0;


  for (VAR_13 = VAR_11; VAR_13; VAR_13--, VAR_5++) {
    if ((*VAR_5 & ~1) != '0') return VAR_0;
    VAR_12 = (VAR_12 << 1) | (*VAR_5 & 1);
  }


  switch (VAR_7) {
  case 130:
    if (!(VAR_8 & VAR_3) && VAR_12 < 0x80000000u+VAR_10) {
      VAR_6->i = VAR_10 ? -(int32_t)VAR_12 : (int32_t)VAR_12;
      return 130;
    }
    if (!(VAR_8 & VAR_2)) { VAR_7 = VAR_1; break; }

  case 129:
    if (VAR_11 > 32) return VAR_0;
    VAR_6->i = VAR_10 ? -(int32_t)VAR_12 : (int32_t)VAR_12;
    return 129;
  case 131:
  case 128:
    VAR_6->u64 = VAR_10 ? (uint64_t)-(int64_t)VAR_12 : VAR_12;
    return VAR_7;
  default:
    break;
  }


  if ((VAR_12 & FUNC_0(VAR_4,0000000))) { VAR_12 = (VAR_12 >> 2) | (VAR_12 & 3); VAR_9 += 2; }
  FUNC_1(VAR_12, VAR_6, VAR_9, VAR_10);
  return VAR_7;
}
