
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_6__ {int i; int u64; double n; } ;
typedef TYPE_1__ TValue ;
typedef int StrScanFmt ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*,int,int) ;

__attribute__((used)) static StrScanFmt FUNC_7(const uint8_t *VAR_6, TValue *VAR_7,
         StrScanFmt VAR_8, uint32_t VAR_9,
         int32_t VAR_10, int32_t VAR_11, uint32_t VAR_12)
{
  uint8_t VAR_13[VAR_0], *VAR_14 = VAR_13;

  if (VAR_12) {
    uint32_t VAR_15 = VAR_12;
    if (VAR_15 > VAR_2) {
      VAR_10 += (int32_t)(VAR_15 - VAR_2);
      VAR_15 = VAR_2;
    }

    if (((VAR_10^VAR_15) & 1))
      *VAR_14++ = ((*VAR_6 != '.' ? *VAR_6 : *++VAR_6) & 15), VAR_15--, VAR_6++;

    for ( ; VAR_15 > 1; VAR_15 -= 2) {
      uint32_t VAR_16 = 10 * ((*VAR_6 != '.' ? *VAR_6 : *++VAR_6) & 15); VAR_6++;
      *VAR_14++ = VAR_16 + ((*VAR_6 != '.' ? *VAR_6 : *++VAR_6) & 15); VAR_6++;
    }

    if (VAR_15) *VAR_14++ = 10 * ((*VAR_6 != '.' ? *VAR_6 : *++VAR_6) & 15), VAR_10--, VAR_12++, VAR_6++;


    if (VAR_12 > VAR_2) {
      do {
 if ((*VAR_6 != '.' ? *VAR_6 : *++VAR_6) != '0') { VAR_14[-1] |= 1; break; }
 VAR_6++;
      } while (--VAR_12 > VAR_2);
      VAR_12 = VAR_2;
    } else {
      while (VAR_10 > 0 && VAR_12 <= 18) *VAR_14++ = 0, VAR_10 -= 2, VAR_12 += 2;
    }
  } else {
    VAR_10 = 0;
    VAR_13[0] = 0;
  }


  if (VAR_12 <= 20 && VAR_10 == 0) {
    uint8_t *VAR_17;
    uint64_t VAR_18 = VAR_13[0];
    double VAR_19;
    for (VAR_17 = VAR_13+1; VAR_17 < VAR_14; VAR_17++) VAR_18 = VAR_18 * 100 + *VAR_17;
    if (!(VAR_12 == 20 && (VAR_13[0] > 18 || (int64_t)VAR_18 >= 0))) {

      switch (VAR_8) {
      case 130:
 if (!(VAR_9 & VAR_5) && VAR_18 < 0x80000000u+VAR_11) {
   VAR_7->i = VAR_11 ? -(int32_t)VAR_18 : (int32_t)VAR_18;
   return 130;
 }
 if (!(VAR_9 & VAR_4)) { VAR_8 = VAR_3; goto plainnumber; }

      case 129:
 if ((VAR_18 >> 32) != 0) return VAR_1;
 VAR_7->i = VAR_11 ? -(int32_t)VAR_18 : (int32_t)VAR_18;
 return 129;
      case 131:
      case 128:
 VAR_7->u64 = VAR_11 ? (uint64_t)-(int64_t)VAR_18 : VAR_18;
 return VAR_8;
      default:
      plainnumber:
 if ((int64_t)VAR_18 < 0) break;
 VAR_19 = (double)(int64_t)VAR_18;
 if (VAR_11) VAR_19 = -VAR_19;
 VAR_7->n = VAR_19;
 return VAR_8;
      }
    }
  }


  if (VAR_8 == 130) {
    if ((VAR_9 & VAR_4)) return VAR_1;
    VAR_8 = VAR_3;
  } else if (VAR_8 > 130) {
    return VAR_1;
  }
  {
    uint32_t VAR_20 = 0, VAR_21 = (uint32_t)(VAR_14-VAR_13);
    int32_t VAR_22 = 0, VAR_23 = (int32_t)VAR_21 + (VAR_10 >> 1);

    FUNC_3(VAR_21 > 0 && (VAR_10 & 1) == 0);


    if (VAR_23 > 310/2) { if (VAR_11) FUNC_4(VAR_7); else FUNC_5(VAR_7); return VAR_8; }
    else if (VAR_23 < -326/2) { VAR_7->n = VAR_11 ? -0.0 : 0.0; return VAR_8; }


    while (VAR_23 < 9 && VAR_23 < FUNC_0(VAR_21, VAR_20)) {
      uint32_t VAR_24, VAR_25 = 0;
      VAR_22 -= 6;
      for (VAR_24 = FUNC_2(VAR_21); ; VAR_24 = FUNC_2(VAR_24)) {
 uint32_t VAR_26 = (VAR_13[VAR_24] << 6) + VAR_25;
 VAR_25 = (((VAR_26 >> 2) * 5243) >> 17); VAR_26 = VAR_26 - VAR_25 * 100;
 VAR_13[VAR_24] = (uint8_t)VAR_26;
 if (VAR_24 == VAR_20) break;
 if (VAR_26 == 0 && VAR_24 == FUNC_2(VAR_21)) VAR_21 = VAR_24;
      }
      if (VAR_25) {
 VAR_20 = FUNC_2(VAR_20);
 if (VAR_13[FUNC_2(VAR_21)] == 0) VAR_21 = FUNC_2(VAR_21);
 else if (VAR_20 == VAR_21) { VAR_21 = FUNC_2(VAR_21); VAR_13[FUNC_2(VAR_21)] |= VAR_13[VAR_21]; }
 VAR_13[VAR_20] = (uint8_t)VAR_25; VAR_23++;
      }
    }


    while (VAR_23 > 9) {
      uint32_t VAR_27 = VAR_20, VAR_28 = 0;
      VAR_22 += 6;
      do {
 VAR_28 += VAR_13[VAR_27];
 VAR_13[VAR_27] = (VAR_28 >> 6);
 VAR_28 = 100 * (VAR_28 & 0x3f);
 if (VAR_13[VAR_27] == 0 && VAR_27 == VAR_20) VAR_20 = FUNC_1(VAR_20), VAR_23--;
 VAR_27 = FUNC_1(VAR_27);
      } while (VAR_27 != VAR_21);
      while (VAR_28) {
 if (VAR_20 == VAR_21) { VAR_13[FUNC_2(VAR_21)] |= 1; break; }
 VAR_13[VAR_21] = (VAR_28 >> 6); VAR_21 = FUNC_1(VAR_21);
 VAR_28 = 100 * (VAR_28 & 0x3f);
      }
    }


    {
      uint64_t VAR_29 = VAR_13[VAR_20];
      uint32_t VAR_30;
      for (VAR_30 = FUNC_1(VAR_20); --VAR_23 > 0 && VAR_30 != VAR_21; VAR_30 = FUNC_1(VAR_30))
 VAR_29 = VAR_29 * 100 + VAR_13[VAR_30];
      if (VAR_30 == VAR_21) {
 while (--VAR_23 >= 0) VAR_29 = VAR_29 * 100;
      } else {
 VAR_29 <<= 1; VAR_22--;
 do {
   if (VAR_13[VAR_30]) { VAR_29 |= 1; break; }
   VAR_30 = FUNC_1(VAR_30);
 } while (VAR_30 != VAR_21);
      }
      FUNC_6(VAR_29, VAR_7, VAR_22, VAR_11);
    }
  }
  return VAR_8;
}
