
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_Number ;
struct TYPE_2__ {int len; } ;
typedef int const TValue ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int const*) ;
 TYPE_1__* FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;

const TValue *FUNC_6 (const TValue *VAR_0, TValue *VAR_1) {
  lua_Number VAR_2;
  if (FUNC_4(VAR_0)) return VAR_0;
  if (FUNC_5(VAR_0) && FUNC_0(FUNC_2(VAR_0), FUNC_3(VAR_0)->len, &VAR_2)) {
    FUNC_1(VAR_1, VAR_2);
    return VAR_1;
  }
  else
    return ((void*)0);
}
