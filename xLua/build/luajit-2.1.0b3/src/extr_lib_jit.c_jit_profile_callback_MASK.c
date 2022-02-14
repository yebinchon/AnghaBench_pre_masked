
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int cTValue ;
struct TYPE_17__ {int (* panic ) (TYPE_1__*) ;} ;
typedef int TValue ;


 int VAR_0 ;
 TYPE_9__* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int * FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_1__*,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *,void*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(lua_State *VAR_2, lua_State *VAR_3, int VAR_4,
     int VAR_5)
{
  TValue VAR_6;
  cTValue *VAR_7;
  FUNC_10(&VAR_6, (void *)&VAR_1);
  VAR_7 = FUNC_4(VAR_3, FUNC_14(FUNC_7(VAR_3)), &VAR_6);
  if (FUNC_15(VAR_7)) {
    char VAR_8 = (char)VAR_5;
    int VAR_9;
    FUNC_8(VAR_2, VAR_2->top++, FUNC_2(VAR_7));
    FUNC_12(VAR_2, VAR_2->top++, VAR_3);
    FUNC_9(VAR_2->top++, VAR_4);
    FUNC_11(VAR_2, VAR_2->top++, FUNC_3(VAR_2, &VAR_8, 1));
    VAR_9 = FUNC_6(VAR_2, 3, 0, 0);
    if (VAR_9) {
      if (FUNC_0(VAR_2)->panic) FUNC_0(VAR_2)->panic(VAR_2);
      FUNC_1(VAR_0);
    }
    FUNC_5(FUNC_0(VAR_2));
  }
}
