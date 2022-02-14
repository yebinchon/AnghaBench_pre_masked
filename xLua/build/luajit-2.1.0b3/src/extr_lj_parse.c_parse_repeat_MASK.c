
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int flags; } ;
struct TYPE_19__ {int pc; int nactvar; int lasttarget; } ;
struct TYPE_18__ {TYPE_2__* fs; } ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ FuncState ;
typedef TYPE_3__ FuncScope ;
typedef int BCPos ;
typedef int BCLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(LexState *VAR_5, BCLine VAR_6)
{
  FuncState *VAR_7 = VAR_5->fs;
  BCPos VAR_8 = VAR_7->lasttarget = VAR_7->pc;
  BCPos VAR_9;
  FuncScope VAR_10, VAR_11;
  FUNC_3(VAR_7, &VAR_10, VAR_1);
  FUNC_3(VAR_7, &VAR_11, 0);
  FUNC_9(VAR_5);
  FUNC_0(VAR_7, VAR_0, VAR_7->nactvar, 0);
  FUNC_11(VAR_5);
  FUNC_8(VAR_5, VAR_4, VAR_3, VAR_6);
  VAR_9 = FUNC_2(VAR_5);
  if (!(VAR_11 & VAR_2)) {
    FUNC_4(VAR_7);
  } else {
    FUNC_10(VAR_5);
    FUNC_7(VAR_7, VAR_9);
    FUNC_4(VAR_7);
    VAR_9 = FUNC_1(VAR_7);
  }
  FUNC_5(VAR_7, VAR_9, VAR_8);
  FUNC_6(VAR_7, VAR_8, VAR_7->pc);
  FUNC_4(VAR_7);
}
