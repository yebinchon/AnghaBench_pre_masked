
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_6__ {int * top; int * base; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_7__ {scalar_t__ framedepth; int maxslot; int const* pc; int * base; int baseslot; TYPE_1__* L; } ;
typedef TYPE_2__ jit_State ;
typedef int TValue ;
typedef int TRef ;
typedef int BCReg ;
typedef int const BCIns ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_5(jit_State *VAR_3)
{
  lua_State *VAR_4 = VAR_3->L;
  TValue *VAR_5 = VAR_4->base, *VAR_6 = VAR_4->top;
  const BCIns *VAR_7 = VAR_3->pc;
  TRef VAR_8 = VAR_3->base[-1-VAR_0];
  ptrdiff_t VAR_9;
  if (!FUNC_1(VAR_5-1) || VAR_3->framedepth <= 0)
    FUNC_4(VAR_3, VAR_1);
  VAR_3->pc = FUNC_2(VAR_5-1); VAR_9 = 1+VAR_0+FUNC_0(VAR_3->pc[-1]);
  VAR_4->top = VAR_5; VAR_4->base = VAR_5 - VAR_9;
  VAR_3->base[-1-VAR_0] = VAR_2;
  VAR_3->base -= VAR_9; VAR_3->baseslot -= (BCReg)VAR_9;
  VAR_3->maxslot = (BCReg)VAR_9-VAR_0; VAR_3->framedepth--;
  FUNC_3(VAR_3);
  VAR_4->base = VAR_5; VAR_4->top = VAR_6;
  VAR_3->framedepth++; VAR_3->maxslot = 1;
  VAR_3->base += VAR_9; VAR_3->baseslot += (BCReg)VAR_9;
  VAR_3->base[-1-VAR_0] = VAR_8; VAR_3->pc = VAR_7;
}
