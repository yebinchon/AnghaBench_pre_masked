
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ c; scalar_t__ linenumber; int tok; } ;
typedef TYPE_1__ LexState ;
typedef scalar_t__ LexChar ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(LexState *VAR_2)
{
  LexChar VAR_3 = VAR_2->c;
  FUNC_3(FUNC_0(VAR_2));
  FUNC_1(VAR_2);
  if (FUNC_0(VAR_2) && VAR_2->c != VAR_3) FUNC_1(VAR_2);
  if (++VAR_2->linenumber >= VAR_1)
    FUNC_2(VAR_2, VAR_2->tok, VAR_0);
}
