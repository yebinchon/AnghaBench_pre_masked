
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_14__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_15__ {scalar_t__ nomm; int metatable; } ;
typedef TYPE_2__ GCtab ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_2__*) ;

__attribute__((used)) static GCtab *FUNC_7(lua_State *VAR_1)
{

  GCtab *VAR_2 = FUNC_1(VAR_1, 0, 1);
  FUNC_6(VAR_1, VAR_1->top++, VAR_2);
  FUNC_4(VAR_2->metatable, FUNC_3(VAR_2));
  FUNC_5(VAR_1, FUNC_2(VAR_1, VAR_2, FUNC_0(VAR_1, "__mode")),
   FUNC_0(VAR_1, "K"));
  VAR_2->nomm = (uint8_t)(~(1u<<VAR_0));
  return VAR_2;
}
