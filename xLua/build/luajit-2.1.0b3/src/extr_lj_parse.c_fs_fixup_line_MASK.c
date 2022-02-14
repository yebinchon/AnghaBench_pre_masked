
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int line; } ;
struct TYPE_7__ {int linedefined; size_t pc; TYPE_3__* bcbase; } ;
struct TYPE_6__ {int firstline; int numline; int lineinfo; } ;
typedef size_t MSize ;
typedef TYPE_1__ GCproto ;
typedef TYPE_2__ FuncState ;
typedef int BCLine ;
typedef TYPE_3__ BCInsLine ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(FuncState *VAR_0, GCproto *VAR_1,
     void *VAR_2, BCLine VAR_3)
{
  BCInsLine *VAR_4 = VAR_0->bcbase + 1;
  BCLine VAR_5 = VAR_0->linedefined;
  MSize VAR_6 = 0, VAR_7 = VAR_0->pc-1;
  VAR_1->firstline = VAR_0->linedefined;
  VAR_1->numline = VAR_3;
  FUNC_2(VAR_1->lineinfo, VAR_2);
  if (FUNC_0(VAR_3 < 256)) {
    uint8_t *VAR_8 = (uint8_t *)VAR_2;
    do {
      BCLine VAR_9 = VAR_4[VAR_6].line - VAR_5;
      FUNC_1(VAR_9 >= 0 && VAR_9 < 256);
      VAR_8[VAR_6] = (uint8_t)VAR_9;
    } while (++VAR_6 < VAR_7);
  } else if (FUNC_0(VAR_3 < 65536)) {
    uint16_t *VAR_10 = (uint16_t *)VAR_2;
    do {
      BCLine VAR_11 = VAR_4[VAR_6].line - VAR_5;
      FUNC_1(VAR_11 >= 0 && VAR_11 < 65536);
      VAR_10[VAR_6] = (uint16_t)VAR_11;
    } while (++VAR_6 < VAR_7);
  } else {
    uint32_t *VAR_12 = (uint32_t *)VAR_2;
    do {
      BCLine VAR_13 = VAR_4[VAR_6].line - VAR_5;
      FUNC_1(VAR_13 >= 0);
      VAR_12[VAR_6] = (uint32_t)VAR_13;
    } while (++VAR_6 < VAR_7);
  }
}
