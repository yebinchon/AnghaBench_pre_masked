
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_9__ {int memerrmsg; } ;
typedef scalar_t__ StkId ;


 TYPE_6__* FUNC_0 (TYPE_1__*) ;


 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4 (lua_State *VAR_0, int VAR_1, StkId VAR_2) {
  switch (VAR_1) {
    case 128: {
      FUNC_3(VAR_0, VAR_2, FUNC_0(VAR_0)->memerrmsg);
      break;
    }
    case 129: {
      FUNC_3(VAR_0, VAR_2, FUNC_1(VAR_0, "error in error handling"));
      break;
    }
    default: {
      FUNC_2(VAR_0, VAR_2, VAR_0->top - 1);
      break;
    }
  }
  VAR_0->top = VAR_2 + 1;
}
