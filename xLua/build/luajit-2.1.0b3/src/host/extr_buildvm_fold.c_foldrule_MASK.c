
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char**,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(char *VAR_6)
{
  uint32_t VAR_7 = FUNC_2(&VAR_6, 0, 0);
  uint32_t VAR_8 = FUNC_2(&VAR_6, 0, 0x7f);
  uint32_t VAR_9 = FUNC_2(&VAR_6, 1, 0x3ff);
  uint32_t VAR_10 = (VAR_2 << 24) | (VAR_7 << 17) | (VAR_8 << 10) | VAR_9;
  uint32_t VAR_11;
  if (VAR_4 >= VAR_0) {
    FUNC_1(VAR_5, "Error: too many fold rules, increase BUILD_MAX_FOLD.\n");
    FUNC_0(1);
  }

  for (VAR_11 = VAR_4; VAR_11 > 0; VAR_11--) {
    if ((VAR_1[VAR_11-1]&0xffffff) < (VAR_10 & 0xffffff))
      break;
    if ((VAR_1[VAR_11-1]&0xffffff) == (VAR_10 & 0xffffff)) {
      FUNC_1(VAR_5, "Error: duplicate fold definition at line %d\n", VAR_3);
      FUNC_0(1);
    }
    VAR_1[VAR_11] = VAR_1[VAR_11-1];
  }
  VAR_1[VAR_11] = VAR_10;
  VAR_4++;
}
