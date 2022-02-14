
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_11__ {int nsnapmap; int nsnap; int nins; } ;
struct TYPE_13__ {int instunroll; TYPE_2__* L; TYPE_1__ cur; } ;
typedef TYPE_3__ jit_State ;
typedef int int32_t ;
typedef int TraceError ;
struct TYPE_14__ {scalar_t__ sizesubst; int * subst; TYPE_3__* J; } ;
typedef int SnapNo ;
typedef int MSize ;
typedef TYPE_4__ LoopState ;
typedef int IRRef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;


 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int *,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,int *,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

int FUNC_8(jit_State *VAR_3)
{
  IRRef VAR_4 = VAR_3->cur.nins;
  SnapNo VAR_5 = VAR_3->cur.nsnap;
  MSize VAR_6 = VAR_3->cur.nsnapmap;
  LoopState VAR_7;
  int VAR_8;
  VAR_7.J = VAR_3;
  VAR_7.subst = ((void*)0);
  VAR_7.sizesubst = 0;
  VAR_8 = FUNC_4(VAR_3->L, ((void*)0), &VAR_7, VAR_2);
  FUNC_3(FUNC_0(VAR_3), VAR_7.subst, VAR_7.sizesubst, VAR_0);
  if (FUNC_1(VAR_8)) {
    lua_State *VAR_9 = VAR_3->L;
    if (VAR_8 == VAR_1 && FUNC_7(VAR_9->top-1)) {
      int32_t VAR_10 = FUNC_6(VAR_9->top-1);
      switch ((TraceError)VAR_10) {
      case 128:
      case 129:

 if (--VAR_3->instunroll < 0)
   break;
 VAR_9->top--;
 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
 return 1;
      default:
 break;
      }
    }
    FUNC_2(VAR_9, VAR_8);
  }
  return 0;
}
