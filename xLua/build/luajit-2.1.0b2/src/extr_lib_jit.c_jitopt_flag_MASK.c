
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ jit_State ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(jit_State *VAR_2, const char *VAR_3)
{
  const char *VAR_4 = VAR_0;
  uint32_t VAR_5;
  int VAR_6 = 1;
  if (VAR_3[0] == '+') {
    VAR_3++;
  } else if (VAR_3[0] == '-') {
    VAR_3++;
    VAR_6 = 0;
  } else if (VAR_3[0] == 'n' && VAR_3[1] == 'o') {
    VAR_3 += VAR_3[2] == '-' ? 3 : 2;
    VAR_6 = 0;
  }
  for (VAR_5 = VAR_1; ; VAR_5 <<= 1) {
    size_t VAR_7 = *(const uint8_t *)VAR_4;
    if (VAR_7 == 0)
      break;
    if (FUNC_0(VAR_3, VAR_4+1, VAR_7) == 0 && VAR_3[VAR_7] == '\0') {
      if (VAR_6) VAR_2->flags |= VAR_5; else VAR_2->flags &= ~VAR_5;
      return 1;
    }
    VAR_4 += 1+VAR_7;
  }
  return 0;
}
