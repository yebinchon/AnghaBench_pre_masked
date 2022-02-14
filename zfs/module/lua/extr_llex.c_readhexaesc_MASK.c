
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LexState ;


 int FUNC_0 (int *,int*,int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (LexState *VAR_0) {
  int VAR_1[3], VAR_2;
  int VAR_3 = 0;
  VAR_1[0] = 'x';
  for (VAR_2 = 1; VAR_2 < 3; VAR_2++) {
    VAR_1[VAR_2] = FUNC_3(VAR_0);
    if (!FUNC_1(VAR_1[VAR_2]))
      FUNC_0(VAR_0, VAR_1, VAR_2 + 1, "hexadecimal digit expected");
    VAR_3 = (VAR_3 << 4) + FUNC_2(VAR_1[VAR_2]);
  }
  return VAR_3;
}
