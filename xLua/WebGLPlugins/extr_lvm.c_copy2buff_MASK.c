
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ StkId ;


 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3 (StkId VAR_0, int VAR_1, char *VAR_2) {
  size_t VAR_3 = 0;
  do {
    size_t VAR_4 = FUNC_2(VAR_0 - VAR_1);
    FUNC_0(VAR_2 + VAR_3, FUNC_1(VAR_0 - VAR_1), VAR_4 * sizeof(char));
    VAR_3 += VAR_4;
  } while (--VAR_1 > 0);
}
