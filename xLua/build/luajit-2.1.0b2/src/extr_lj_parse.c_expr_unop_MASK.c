
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char tok; int fs; } ;
typedef TYPE_1__ LexState ;
typedef int ExpDesc ;
typedef int BCOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(LexState *VAR_5, ExpDesc *VAR_6)
{
  BCOp VAR_7;
  if (VAR_5->tok == VAR_3) {
    VAR_7 = VAR_1;
  } else if (VAR_5->tok == '-') {
    VAR_7 = VAR_2;
  } else if (VAR_5->tok == '#') {
    VAR_7 = VAR_0;
  } else {
    FUNC_2(VAR_5, VAR_6);
    return;
  }
  FUNC_3(VAR_5);
  FUNC_1(VAR_5, VAR_6, VAR_4);
  FUNC_0(VAR_5->fs, VAR_7, VAR_6);
}
