
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(uint32_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4, int VAR_5)
{
  uint32_t VAR_6;
  if (VAR_5 && ((VAR_4 & 31) == 0 || (VAR_4>>5) == 0))
    return 0;
  FUNC_1(VAR_2, 0xff, (VAR_3+1)*sizeof(uint32_t));
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    uint32_t VAR_7 = VAR_0[VAR_6];
    uint32_t VAR_8 = VAR_7 & 0xffffff;
    uint32_t VAR_9 = (VAR_5 ? FUNC_0(FUNC_0(VAR_8, VAR_4>>5) - VAR_8, VAR_4&31) :
     (((VAR_8 << (VAR_4>>5)) - VAR_8) << (VAR_4&31))) % VAR_3;
    if (VAR_2[VAR_9] != 0xffffffff) {
      if (VAR_2[VAR_9+1] != 0xffffffff) {

 if (VAR_9 < VAR_3-1 && VAR_2[VAR_9+2] == 0xffffffff) {
   uint32_t VAR_10 = VAR_2[VAR_9+1] & 0xffffff;
   uint32_t VAR_11 = (VAR_5 ? FUNC_0(FUNC_0(VAR_10, VAR_4>>5) - VAR_10, VAR_4&31) :
     (((VAR_10 << (VAR_4>>5)) - VAR_10) << (VAR_4&31))) % VAR_3;
   if (VAR_11 != VAR_9+1) return 0;
   VAR_2[VAR_9+2] = VAR_2[VAR_9+1];
 } else {
   return 0;
 }
      }
      VAR_2[VAR_9+1] = VAR_7;
    } else {
      VAR_2[VAR_9] = VAR_7;
    }
  }
  return 1;
}
