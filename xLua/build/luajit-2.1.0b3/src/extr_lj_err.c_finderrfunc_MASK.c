
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ptrdiff_t ;
struct TYPE_8__ {void* cframe; int stack; int * base; } ;
typedef TYPE_2__ lua_State ;
typedef int cTValue ;
struct TYPE_7__ {int ffid; } ;
struct TYPE_9__ {TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (void*) ;
 TYPE_5__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int ) ;
 int * FUNC_13 (int ) ;

__attribute__((used)) static ptrdiff_t FUNC_14(lua_State *VAR_2)
{
  cTValue *VAR_3 = VAR_2->base-1, *VAR_4 = FUNC_13(VAR_2->stack)+VAR_1;
  void *VAR_5 = VAR_2->cframe;
  while (VAR_3 > VAR_4 && VAR_5) {
    while (FUNC_2(FUNC_4(VAR_5)) < 0) {
      if (VAR_3 >= FUNC_11(VAR_2, -FUNC_2(VAR_5)))
 break;
      if (FUNC_1(VAR_5) >= 0)
 return FUNC_1(VAR_5);
      VAR_5 = FUNC_3(VAR_5);
      if (VAR_5 == ((void*)0))
 return 0;
    }
    switch (FUNC_9(VAR_3)) {
    case 132:
    case 131:
      VAR_3 = FUNC_8(VAR_3);
      break;
    case 135:
      VAR_5 = FUNC_3(VAR_5);

    case 128:
      VAR_3 = FUNC_7(VAR_3);
      break;
    case 134:
      if (FUNC_6(VAR_3))
 VAR_5 = FUNC_3(VAR_5);
      VAR_3 = FUNC_7(VAR_3);
      break;
    case 133:
      if (FUNC_0(VAR_5)) return 0;
      if (FUNC_1(VAR_5) >= 0)
 return FUNC_1(VAR_5);
      VAR_3 = FUNC_7(VAR_3);
      break;
    case 130:
    case 129:
      if (FUNC_5(FUNC_7(VAR_3))->c.ffid == VAR_0)
 return FUNC_12(VAR_2, *(FUNC_7(VAR_3)+1));
      return 0;
    default:
      FUNC_10(0);
      return 0;
    }
  }
  return 0;
}
