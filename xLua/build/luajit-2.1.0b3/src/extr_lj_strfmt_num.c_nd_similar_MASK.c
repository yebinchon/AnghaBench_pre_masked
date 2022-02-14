
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int MSize ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(uint32_t* VAR_0, uint32_t VAR_1, uint32_t* VAR_2, MSize VAR_3,
        MSize VAR_4)
{
  char VAR_5[9], VAR_6[9];
  if (VAR_3 <= VAR_4) {
    if (FUNC_0(VAR_0[VAR_1] != *VAR_2)) return 0;
    VAR_4 -= VAR_3; VAR_2--; VAR_1 = (VAR_1 - 1) & 0x3f;
    if (VAR_4 >= 9) {
      if (FUNC_0(VAR_0[VAR_1] != *VAR_2)) return 0;
      VAR_4 -= 9; VAR_2--; VAR_1 = (VAR_1 - 1) & 0x3f;
    }
  } else {
    VAR_4 -= VAR_3 - 9;
  }
  FUNC_2(VAR_4 < 9);
  FUNC_1(VAR_5, VAR_0[VAR_1]);
  FUNC_1(VAR_6, *VAR_2);
  return !FUNC_3(VAR_5, VAR_6, VAR_4) && (VAR_5[VAR_4] < '5') == (VAR_6[VAR_4] < '5');
}
