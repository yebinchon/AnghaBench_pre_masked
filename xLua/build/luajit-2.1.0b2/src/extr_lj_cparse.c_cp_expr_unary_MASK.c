
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ depth; } ;
typedef int CPValue ;
typedef TYPE_1__ CPState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3(CPState *VAR_2, CPValue *VAR_3)
{
  if (++VAR_2->depth > VAR_0) FUNC_0(VAR_2, VAR_1);
  FUNC_2(VAR_2, VAR_3);
  FUNC_1(VAR_2, VAR_3);
  VAR_2->depth--;
}
