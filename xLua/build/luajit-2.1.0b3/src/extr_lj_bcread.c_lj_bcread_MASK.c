
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_16__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ int32_t ;
struct TYPE_17__ {scalar_t__ c; scalar_t__* p; scalar_t__* pe; int sb; TYPE_1__* L; } ;
typedef int MSize ;
typedef TYPE_2__ LexState ;
typedef int GCproto ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int * FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*,int,int *) ;

GCproto *FUNC_13(LexState *VAR_3)
{
  lua_State *VAR_4 = VAR_3->L;
  FUNC_10(VAR_3->c == VAR_0);
  FUNC_4(VAR_4, VAR_3, VAR_4->top);
  FUNC_9(&VAR_3->sb);

  if (!FUNC_1(VAR_3))
    FUNC_0(VAR_3, VAR_2);
  for (;;) {
    GCproto *VAR_5;
    MSize VAR_6;
    const char *VAR_7;

    if (VAR_3->p < VAR_3->pe && VAR_3->p[0] == 0) {
      VAR_3->p++;
      break;
    }
    FUNC_6(VAR_3, 5);
    VAR_6 = FUNC_5(VAR_3);
    if (!VAR_6) break;
    FUNC_2(VAR_3, VAR_6);
    VAR_7 = VAR_3->p;
    VAR_5 = FUNC_8(VAR_3);
    if (VAR_3->p != VAR_7 + VAR_6)
      FUNC_0(VAR_3, VAR_1);
    FUNC_12(VAR_4, VAR_4->top, VAR_5);
    FUNC_7(VAR_4);
  }
  if ((int32_t)(2*(uint32_t)(VAR_3->pe - VAR_3->p)) > 0 ||
      VAR_4->top-1 != FUNC_3(VAR_4, VAR_3))
    FUNC_0(VAR_3, VAR_1);

  VAR_4->top--;
  return FUNC_11(VAR_4->top);
}
