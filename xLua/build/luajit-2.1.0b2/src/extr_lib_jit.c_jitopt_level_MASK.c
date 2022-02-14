
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ jit_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(jit_State *VAR_5, const char *VAR_6)
{
  if (VAR_6[0] >= '0' && VAR_6[0] <= '9' && VAR_6[1] == '\0') {
    uint32_t VAR_7;
    if (VAR_6[0] == '0') VAR_7 = VAR_0;
    else if (VAR_6[0] == '1') VAR_7 = VAR_1;
    else if (VAR_6[0] == '2') VAR_7 = VAR_2;
    else VAR_7 = VAR_3;
    VAR_5->flags = (VAR_5->flags & ~VAR_4) | VAR_7;
    return 1;
  }
  return 0;
}
