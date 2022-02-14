
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int e; int p; int b; } ;
typedef TYPE_1__ SBuf ;
typedef scalar_t__ MSize ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(SBuf *VAR_1, MSize VAR_2)
{
  MSize VAR_3 = FUNC_4(VAR_1), VAR_4 = FUNC_3(VAR_1), VAR_5 = VAR_3;
  char *VAR_6;
  if (VAR_5 < VAR_0) VAR_5 = VAR_0;
  while (VAR_5 < VAR_2) VAR_5 += VAR_5;
  VAR_6 = (char *)FUNC_0(FUNC_2(VAR_1), FUNC_1(VAR_1), VAR_3, VAR_5);
  FUNC_5(VAR_1->b, VAR_6);
  FUNC_5(VAR_1->p, VAR_6 + VAR_4);
  FUNC_5(VAR_1->e, VAR_6 + VAR_5);
}
