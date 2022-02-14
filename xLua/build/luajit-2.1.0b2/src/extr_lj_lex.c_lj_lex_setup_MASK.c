
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_12__ {int linenumber; int lastline; int c; scalar_t__* p; scalar_t__* pe; int lookahead; scalar_t__ tok; scalar_t__ sizebcstack; int * bcstack; scalar_t__ vtop; scalar_t__ sizevstack; int * vstack; int * fs; TYPE_1__* L; } ;
typedef TYPE_2__ LexState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

int FUNC_6(lua_State *VAR_5, LexState *VAR_6)
{
  int VAR_7 = 0;
  VAR_6->L = VAR_5;
  VAR_6->fs = ((void*)0);
  VAR_6->pe = VAR_6->p = ((void*)0);
  VAR_6->vstack = ((void*)0);
  VAR_6->sizevstack = 0;
  VAR_6->vtop = 0;
  VAR_6->bcstack = ((void*)0);
  VAR_6->sizebcstack = 0;
  VAR_6->tok = 0;
  VAR_6->lookahead = VAR_4;
  VAR_6->linenumber = 1;
  VAR_6->lastline = 1;
  FUNC_2(VAR_6);
  if (VAR_6->c == 0xef && VAR_6->p + 2 <= VAR_6->pe && (uint8_t)VAR_6->p[0] == 0xbb &&
      (uint8_t)VAR_6->p[1] == 0xbf) {
    VAR_6->p += 2;
    FUNC_2(VAR_6);
    VAR_7 = 1;
  }
  if (VAR_6->c == '#') {
    do {
      FUNC_2(VAR_6);
      if (VAR_6->c == VAR_0) return 0;
    } while (!FUNC_0(VAR_6));
    FUNC_1(VAR_6);
    VAR_7 = 1;
  }
  if (VAR_6->c == VAR_3[0]) {
    if (VAR_7) {






      FUNC_5(VAR_5, VAR_5->top++, FUNC_3(VAR_5, VAR_1));
      FUNC_4(VAR_5, VAR_2);
    }
    return 1;
  }
  return 0;
}
