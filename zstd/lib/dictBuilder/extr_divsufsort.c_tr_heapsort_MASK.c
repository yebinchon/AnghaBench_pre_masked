
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int*,int,int) ;

__attribute__((used)) static
void
FUNC_2(const int *VAR_0, int *VAR_1, int VAR_2) {
  int VAR_3, VAR_4;
  int VAR_5;

  VAR_4 = VAR_2;
  if((VAR_2 % 2) == 0) {
    VAR_4--;
    if(VAR_0[VAR_1[VAR_4 / 2]] < VAR_0[VAR_1[VAR_4]]) { FUNC_0(VAR_1[VAR_4], VAR_1[VAR_4 / 2]); }
  }

  for(VAR_3 = VAR_4 / 2 - 1; 0 <= VAR_3; --VAR_3) { FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4); }
  if((VAR_2 % 2) == 0) { FUNC_0(VAR_1[0], VAR_1[VAR_4]); FUNC_1(VAR_0, VAR_1, 0, VAR_4); }
  for(VAR_3 = VAR_4 - 1; 0 < VAR_3; --VAR_3) {
    VAR_5 = VAR_1[0], VAR_1[0] = VAR_1[VAR_3];
    FUNC_1(VAR_0, VAR_1, 0, VAR_3);
    VAR_1[VAR_3] = VAR_5;
  }
}
