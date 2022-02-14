
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fs; } ;
typedef TYPE_1__ LexState ;
typedef int ExpDesc ;
typedef int BCReg ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char) ;

__attribute__((used)) static BCReg FUNC_3(LexState *VAR_0, ExpDesc *VAR_1)
{
  BCReg VAR_2 = 1;
  FUNC_0(VAR_0, VAR_1);
  while (FUNC_2(VAR_0, ',')) {
    FUNC_1(VAR_0->fs, VAR_1);
    FUNC_0(VAR_0, VAR_1);
    VAR_2++;
  }
  return VAR_2;
}
