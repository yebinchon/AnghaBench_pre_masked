
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int MSize ;
typedef int LexState ;
typedef int GCproto ;


 int FUNC_0 (int *,int*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(LexState *VAR_0, GCproto *VAR_1, MSize VAR_2)
{
  if (VAR_2) {
    uint16_t *VAR_3 = FUNC_2(VAR_1);
    FUNC_0(VAR_0, VAR_3, VAR_2*2);

    if (FUNC_1(VAR_0)) {
      MSize VAR_4;
      for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 VAR_3[VAR_4] = (uint16_t)((VAR_3[VAR_4] >> 8)|(VAR_3[VAR_4] << 8));
    }
  }
}
