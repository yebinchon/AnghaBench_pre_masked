
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ ptrdiff_t ;
struct TYPE_15__ {int flags; scalar_t__ bclim; scalar_t__ bcbase; scalar_t__ pc; scalar_t__ numparams; int linedefined; } ;
struct TYPE_14__ {scalar_t__ tok; scalar_t__ sizebcstack; scalar_t__ bcstack; int linenumber; int lastline; TYPE_2__* fs; } ;
typedef TYPE_1__ LexState ;
typedef int GCproto ;
typedef TYPE_2__ FuncState ;
typedef int FuncScope ;
typedef int ExpDesc ;
typedef scalar_t__ BCPos ;
typedef int BCLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_11(LexState *VAR_10, ExpDesc *VAR_11, int VAR_12, BCLine VAR_13)
{
  FuncState VAR_14, *VAR_15 = VAR_10->fs;
  FuncScope VAR_16;
  GCproto *VAR_17;
  ptrdiff_t VAR_18 = VAR_15->bcbase - VAR_10->bcstack;
  FUNC_4(VAR_10, &VAR_14);
  FUNC_5(&VAR_14, &VAR_16, 0);
  VAR_14.linedefined = VAR_13;
  VAR_14.numparams = (uint8_t)FUNC_10(VAR_10, VAR_12);
  VAR_14.bcbase = VAR_15->bcbase + VAR_15->pc;
  VAR_14.bclim = VAR_15->bclim - VAR_15->pc;
  FUNC_0(&VAR_14, VAR_1, 0, 0);
  FUNC_9(VAR_10);
  if (VAR_10->tok != VAR_7) FUNC_6(VAR_10, VAR_7, VAR_8, VAR_13);
  VAR_17 = FUNC_3(VAR_10, (VAR_10->lastline = VAR_10->linenumber));
  VAR_15->bcbase = VAR_10->bcstack + VAR_18;
  VAR_15->bclim = (BCPos)(VAR_10->sizebcstack - VAR_18);

  FUNC_2(VAR_11, VAR_9,
     FUNC_0(VAR_15, VAR_0, 0, FUNC_1(VAR_15, FUNC_8(VAR_17), VAR_2)));



  if (!(VAR_15->flags & VAR_3)) {
    if (VAR_15->flags & VAR_6)
      VAR_15->flags |= VAR_5;
    VAR_15->flags |= VAR_3;
  }
  FUNC_7(VAR_10);
}
