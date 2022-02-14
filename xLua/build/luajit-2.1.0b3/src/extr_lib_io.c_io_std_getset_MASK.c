
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ptrdiff_t ;
struct TYPE_9__ {scalar_t__ base; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_10__ {int * gcroot; } ;


 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0, ptrdiff_t VAR_1, const char *VAR_2)
{
  if (VAR_0->base < VAR_0->top && !FUNC_7(VAR_0->base)) {
    if (FUNC_8(VAR_0->base)) {
      FUNC_4(VAR_0);
      VAR_0->top = VAR_0->base+1;
    } else {
      FUNC_3(VAR_0, VAR_2);
    }

    FUNC_5(FUNC_0(VAR_0)->gcroot[VAR_1], FUNC_2(VAR_0->top-1));
  } else {
    FUNC_6(VAR_0, VAR_0->top++, FUNC_1(VAR_0, VAR_1));
  }
  return 1;
}
