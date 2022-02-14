
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ nactvar; int flags; } ;
struct TYPE_13__ {char tok; TYPE_2__* fs; } ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ FuncState ;
typedef scalar_t__ BCReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,char) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ,char*) ;

__attribute__((used)) static BCReg FUNC_10(LexState *VAR_6, int VAR_7)
{
  FuncState *VAR_8 = VAR_6->fs;
  BCReg VAR_9 = 0;
  FUNC_2(VAR_6, '(');
  if (VAR_7)
    FUNC_9(VAR_6, VAR_9++, "self");
  if (VAR_6->tok != ')') {
    do {
      if (VAR_6->tok == VAR_5 || (!VAR_0 && VAR_6->tok == VAR_4)) {
 FUNC_8(VAR_6, VAR_9++, FUNC_4(VAR_6));
      } else if (VAR_6->tok == VAR_3) {
 FUNC_5(VAR_6);
 VAR_8->flags |= VAR_2;
 break;
      } else {
 FUNC_1(VAR_6, VAR_1);
      }
    } while (FUNC_3(VAR_6, ','));
  }
  FUNC_7(VAR_6, VAR_9);
  FUNC_6(VAR_8->nactvar == VAR_9);
  FUNC_0(VAR_8, VAR_9);
  FUNC_2(VAR_6, ')');
  return VAR_9;
}
