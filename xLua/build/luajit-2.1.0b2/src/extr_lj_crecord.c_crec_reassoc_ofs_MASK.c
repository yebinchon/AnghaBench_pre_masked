
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ jit_State ;
struct TYPE_9__ {scalar_t__ u64; } ;
struct TYPE_8__ {scalar_t__ o; int op1; scalar_t__ i; int op2; } ;
typedef int TRef ;
typedef int MSize ;
typedef TYPE_2__ IRIns ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static TRef FUNC_5(jit_State *VAR_6, TRef VAR_7, ptrdiff_t *VAR_8, MSize VAR_9)
{
  IRIns *VAR_10 = FUNC_0(FUNC_4(VAR_7));
  if (FUNC_1(VAR_6->flags & VAR_4) && FUNC_3(VAR_10->op2) &&
      (VAR_10->o == VAR_0 || VAR_10->o == VAR_1 || VAR_10->o == VAR_3)) {
    IRIns *VAR_11 = FUNC_0(VAR_10->op2);
    ptrdiff_t VAR_12;
    if (VAR_5 && VAR_11->o == VAR_2)
      VAR_12 = (ptrdiff_t)FUNC_2(VAR_11)->u64 * VAR_9;
    else
      VAR_12 = (ptrdiff_t)VAR_11->i * VAR_9;
    if (VAR_10->o == VAR_3) *VAR_8 -= VAR_12; else *VAR_8 += VAR_12;
    VAR_7 = VAR_10->op1;
  }
  return VAR_7;
}
