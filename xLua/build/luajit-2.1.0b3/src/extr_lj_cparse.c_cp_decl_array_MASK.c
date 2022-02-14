
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char tok; } ;
typedef int CTSize ;
typedef int CTInfo ;
typedef TYPE_1__ CPState ;
typedef int CPDecl ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,char) ;

__attribute__((used)) static void FUNC_6(CPState *VAR_3, CPDecl *VAR_4)
{
  CTInfo VAR_5 = FUNC_0(VAR_2, 0);
  CTSize VAR_6 = VAR_1;
  FUNC_3(VAR_3, VAR_4);
  if (FUNC_5(VAR_3, '?'))
    VAR_5 |= VAR_0;
  else if (VAR_3->tok != ']')
    VAR_6 = FUNC_4(VAR_3);
  FUNC_2(VAR_3, ']');
  FUNC_1(VAR_4, VAR_5, VAR_6);
}
