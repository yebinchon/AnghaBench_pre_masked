
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {int* param; } ;
typedef TYPE_1__ jit_State ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(jit_State *VAR_3, const char *VAR_4)
{
  const char *VAR_5 = VAR_0;
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    size_t VAR_7 = *(const uint8_t *)VAR_5;
    FUNC_2(VAR_7 != 0);
    if (FUNC_3(VAR_4, VAR_5+1, VAR_7) == 0 && VAR_4[VAR_7] == '=') {
      int32_t VAR_8 = 0;
      const char *VAR_9 = &VAR_4[VAR_7+1];
      while (*VAR_9 >= '0' && *VAR_9 <= '9')
 VAR_8 = VAR_8*10 + (*VAR_9++ - '0');
      if (*VAR_9) return 0;
      VAR_3->param[VAR_6] = VAR_8;
      if (VAR_6 == VAR_2)
 FUNC_1(FUNC_0(VAR_3));
      return 1;
    }
    VAR_5 += 1+VAR_7;
  }
  return 0;
}
