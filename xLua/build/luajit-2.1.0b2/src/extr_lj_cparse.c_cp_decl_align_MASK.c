
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int attr; } ;
struct TYPE_6__ {char tok; } ;
typedef int CTSize ;
typedef TYPE_1__ CPState ;
typedef TYPE_2__ CPDecl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(CPState *VAR_2, CPDecl *VAR_3)
{
  CTSize VAR_4 = 4;
  if (VAR_2->tok == '(') {
    VAR_4 = FUNC_1(VAR_2);
    VAR_4 = VAR_4 ? FUNC_2(VAR_4) : 0;
  }
  FUNC_0(VAR_3->attr, VAR_0, VAR_4);
  VAR_3->attr |= VAR_1;
}
