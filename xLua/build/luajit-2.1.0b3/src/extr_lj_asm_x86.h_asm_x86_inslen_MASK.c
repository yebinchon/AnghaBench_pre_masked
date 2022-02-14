
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static uint32_t FUNC_0(const uint8_t* VAR_3)
{
  uint32_t VAR_4 = 0;
  uint32_t VAR_5 = 0;
  uint32_t VAR_6 = VAR_1[*VAR_3];
  for (;;) {
    switch (VAR_6 >> 4) {
    case 0: return VAR_4 + VAR_6 + (VAR_5 & 4);
    case 1: VAR_5 |= VAR_6; VAR_6 = VAR_1[*++VAR_3]; VAR_4++; break;
    case 2: VAR_6 = VAR_2[*++VAR_3]; break;
    case 3: VAR_3++; goto mrm;
    case 4: VAR_4 -= (VAR_5 & 2);
    case 5: return VAR_4 + (VAR_6 & 15);
    case 6:
      if (VAR_3[1] & 0x38) VAR_6 = 2;
      else if ((VAR_5 & 2) && (VAR_6 == 0x66)) VAR_6 = 4;
      goto mrm;
    case 7:
      if (VAR_0 && VAR_3[1] < 0xc0) {
 VAR_6 = 2;
 goto mrm;
      }
      if (VAR_6 == 0x70) {
 VAR_6 = *++VAR_3 & 0x1f;
 VAR_4++;
 if (VAR_6 >= 2) {
   VAR_3 += 2;
   VAR_4 += 2;
   goto mrm;
 }
      }
      VAR_3++;
      VAR_4++;
      VAR_6 = VAR_2[*++VAR_3];
      break;
    case 8: VAR_4 -= (VAR_5 & 2);
    case 9: mrm:
      VAR_4 += (VAR_6 & 15);
      VAR_6 = *++VAR_3;
      switch (VAR_6 >> 6) {
      case 0: if ((VAR_6 & 7) == 5) return VAR_4 + 4; break;
      case 1: VAR_4++; break;
      case 2: VAR_4 += 4; break;
      case 3: return VAR_4;
      }
      if ((VAR_6 & 7) == 4) {
 VAR_4++;
 if (VAR_6 < 0x40 && (VAR_3[1] & 7) == 5) VAR_4 += 4;
      }
      return VAR_4;
    }
  }
}
