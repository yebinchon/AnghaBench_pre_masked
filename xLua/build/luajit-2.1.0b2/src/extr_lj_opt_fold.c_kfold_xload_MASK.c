
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef int jit_State ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int t; } ;
typedef int TRef ;
typedef TYPE_1__ IRIns ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static TRef FUNC_6(jit_State *VAR_0, IRIns *VAR_1, const void *VAR_2)
{
  int32_t VAR_3;
  switch (FUNC_0(VAR_1->t)) {
  case 132: return FUNC_5(VAR_0, *(uint64_t *)VAR_2);
  case 134: VAR_3 = (int32_t)*(int8_t *)VAR_2; break;
  case 128: VAR_3 = (int32_t)*(uint8_t *)VAR_2; break;
  case 136: VAR_3 = (int32_t)(int16_t)FUNC_1(VAR_2); break;
  case 131: VAR_3 = (int32_t)(uint16_t)FUNC_1(VAR_2); break;
  case 133: case 130: VAR_3 = (int32_t)FUNC_2(VAR_2); break;
  case 135: case 129: return FUNC_4(VAR_0, *(uint64_t *)VAR_2);
  default: return 0;
  }
  return FUNC_3(VAR_0, VAR_3);
}
