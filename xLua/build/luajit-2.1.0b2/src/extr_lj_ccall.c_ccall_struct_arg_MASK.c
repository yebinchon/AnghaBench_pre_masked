
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ nsp; int * stack; } ;
typedef int TValue ;
typedef scalar_t__ MSize ;
typedef scalar_t__ GPRArg ;
typedef int CType ;
typedef int CTState ;
typedef TYPE_1__ CCallState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__*,int*) ;
 int FUNC_2 (int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(CCallState *VAR_2, CTState *VAR_3, CType *VAR_4, int *VAR_5,
       TValue *VAR_6, int VAR_7)
{
  GPRArg VAR_8[2];
  VAR_8[0] = VAR_8[1] = 0;

  FUNC_2(VAR_3, VAR_4, (uint8_t *)VAR_8, VAR_6, FUNC_0(VAR_7));
  if (FUNC_1(VAR_2, VAR_8, VAR_5)) {
    MSize VAR_9 = VAR_2->nsp, VAR_10 = VAR_5[1] ? 2 : 1;
    if (VAR_9 + VAR_10 > VAR_0) return 1;
    VAR_2->nsp = VAR_9 + VAR_10;
    FUNC_3(&VAR_2->stack[VAR_9], VAR_8, VAR_10*VAR_1);
  }
  return 0;
}
