
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char tok; int * fs; } ;
typedef TYPE_1__ LexState ;
typedef int GCstr ;
typedef int FuncState ;
typedef int FuncScope ;
typedef int BCLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static void FUNC_8(LexState *VAR_5, BCLine VAR_6)
{
  FuncState *VAR_7 = VAR_5->fs;
  GCstr *VAR_8;
  FuncScope VAR_9;
  FUNC_1(VAR_7, &VAR_9, VAR_0);
  FUNC_5(VAR_5);
  VAR_8 = FUNC_4(VAR_5);
  if (VAR_5->tok == '=')
    FUNC_7(VAR_5, VAR_8, VAR_6);
  else if (VAR_5->tok == ',' || VAR_5->tok == VAR_4)
    FUNC_6(VAR_5, VAR_8);
  else
    FUNC_0(VAR_5, VAR_1);
  FUNC_3(VAR_5, VAR_2, VAR_3, VAR_6);
  FUNC_2(VAR_7);
}
