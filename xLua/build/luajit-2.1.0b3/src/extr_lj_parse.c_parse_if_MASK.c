
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tok; int * fs; } ;
typedef TYPE_1__ LexState ;
typedef int FuncState ;
typedef int BCPos ;
typedef int BCLine ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(LexState *VAR_5, BCLine VAR_6)
{
  FuncState *VAR_7 = VAR_5->fs;
  BCPos VAR_8;
  BCPos VAR_9 = VAR_0;
  VAR_8 = FUNC_6(VAR_5);
  while (VAR_5->tok == VAR_2) {
    FUNC_1(VAR_7, &VAR_9, FUNC_0(VAR_7));
    FUNC_2(VAR_7, VAR_8);
    VAR_8 = FUNC_6(VAR_5);
  }
  if (VAR_5->tok == VAR_1) {
    FUNC_1(VAR_7, &VAR_9, FUNC_0(VAR_7));
    FUNC_2(VAR_7, VAR_8);
    FUNC_4(VAR_5);
    FUNC_5(VAR_5);
  } else {
    FUNC_1(VAR_7, &VAR_9, VAR_8);
  }
  FUNC_2(VAR_7, VAR_9);
  FUNC_3(VAR_5, VAR_3, VAR_4, VAR_6);
}
