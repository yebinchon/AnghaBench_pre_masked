
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char tok; int * fs; int linenumber; } ;
typedef TYPE_1__ LexState ;
typedef int FuncState ;
typedef int ExpDesc ;
typedef int BCLine ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_1__*,char,char,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_15(LexState *VAR_6, ExpDesc *VAR_7)
{
  FuncState *VAR_8 = VAR_6->fs;

  if (VAR_6->tok == '(') {
    BCLine VAR_9 = VAR_6->linenumber;
    FUNC_12(VAR_6);
    FUNC_3(VAR_6, VAR_7);
    FUNC_11(VAR_6, ')', '(', VAR_9);
    FUNC_5(VAR_6->fs, VAR_7);
  } else if (VAR_6->tok == VAR_4 || (!VAR_0 && VAR_6->tok == VAR_3)) {
    FUNC_14(VAR_6, VAR_7);
  } else {
    FUNC_2(VAR_6, VAR_1);
  }
  for (;;) {
    if (VAR_6->tok == '.') {
      FUNC_6(VAR_6, VAR_7);
    } else if (VAR_6->tok == '[') {
      ExpDesc VAR_10;
      FUNC_9(VAR_8, VAR_7);
      FUNC_4(VAR_6, &VAR_10);
      FUNC_7(VAR_8, VAR_7, &VAR_10);
    } else if (VAR_6->tok == ':') {
      ExpDesc VAR_11;
      FUNC_12(VAR_6);
      FUNC_8(VAR_6, &VAR_11);
      FUNC_0(VAR_8, VAR_7, &VAR_11);
      FUNC_13(VAR_6, VAR_7);
    } else if (VAR_6->tok == '(' || VAR_6->tok == VAR_5 || VAR_6->tok == '{') {
      FUNC_10(VAR_8, VAR_7);
      if (VAR_2) FUNC_1(VAR_8, 1);
      FUNC_13(VAR_6, VAR_7);
    } else {
      break;
    }
  }
}
