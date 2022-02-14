
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int f; } ;
typedef TYPE_1__ LStream ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13 (lua_State *VAR_0) {
  LStream *VAR_1 = (LStream *)FUNC_11(VAR_0, FUNC_12(1));
  int VAR_2;
  int VAR_3 = (int)FUNC_9(VAR_0, FUNC_12(2));
  if (FUNC_2(VAR_1))
    return FUNC_4(VAR_0, "file is already closed");
  FUNC_7(VAR_0 , 1);
  FUNC_3(VAR_0, VAR_3, "too many arguments");
  for (VAR_2 = 1; VAR_2 <= VAR_3; VAR_2++)
    FUNC_6(VAR_0, FUNC_12(3 + VAR_2));
  VAR_3 = FUNC_1(VAR_0, VAR_1->f, 2);
  FUNC_5(VAR_3 > 0);
  if (FUNC_8(VAR_0, -VAR_3))
    return VAR_3;
  else {
    if (VAR_3 > 1) {

      return FUNC_4(VAR_0, "%s", FUNC_10(VAR_0, -VAR_3 + 1));
    }
    if (FUNC_8(VAR_0, FUNC_12(3))) {
      FUNC_7(VAR_0, 0);
      FUNC_6(VAR_0, FUNC_12(1));
      FUNC_0(VAR_0);
    }
    return 0;
  }
}
