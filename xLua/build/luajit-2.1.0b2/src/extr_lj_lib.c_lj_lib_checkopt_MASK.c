
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int lua_State ;
struct TYPE_5__ {scalar_t__ len; } ;
typedef scalar_t__ const MSize ;
typedef TYPE_1__ GCstr ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,char const*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (char const*,char const*,scalar_t__ const) ;
 char* FUNC_4 (TYPE_1__*) ;

int FUNC_5(lua_State *VAR_1, int VAR_2, int VAR_3, const char *VAR_4)
{
  GCstr *VAR_5 = VAR_3 >= 0 ? FUNC_2(VAR_1, VAR_2) : FUNC_1(VAR_1, VAR_2);
  if (VAR_5) {
    const char *VAR_6 = FUNC_4(VAR_5);
    MSize VAR_7 = VAR_5->len;
    int VAR_8;
    for (VAR_8 = 0; *(const uint8_t *)VAR_4; VAR_8++) {
      if (*(const uint8_t *)VAR_4 == VAR_7 && FUNC_3(VAR_6, VAR_4+1, VAR_7) == 0)
 return VAR_8;
      VAR_4 += 1+*(const uint8_t *)VAR_4;
    }
    FUNC_0(VAR_1, VAR_2, VAR_0, VAR_6);
  }
  return VAR_3;
}
