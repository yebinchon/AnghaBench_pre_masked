
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_8__ {scalar_t__ top; int ci; } ;
typedef TYPE_1__ lua_State ;
typedef int const TValue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int,int ) ;
 int const* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*,int ,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*,scalar_t__) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_0, const TValue *VAR_1, const TValue *VAR_2,
                    const TValue *VAR_3, TValue *VAR_4, int VAR_5) {
  if (VAR_0 == ((void*)0)) return;

  ptrdiff_t VAR_6 = FUNC_3(VAR_0, VAR_4);
  FUNC_4(VAR_0, VAR_0->top++, VAR_1);
  FUNC_4(VAR_0, VAR_0->top++, VAR_2);
  FUNC_4(VAR_0, VAR_0->top++, VAR_3);
  if (!VAR_5)
    FUNC_4(VAR_0, VAR_0->top++, VAR_4);

  FUNC_1(VAR_0, VAR_0->top - (4 - VAR_5), VAR_5, FUNC_0(VAR_0->ci));
  if (VAR_5) {
    VAR_4 = FUNC_2(VAR_0, VAR_6);
    FUNC_5(VAR_0, VAR_4, --VAR_0->top);
  }
}
