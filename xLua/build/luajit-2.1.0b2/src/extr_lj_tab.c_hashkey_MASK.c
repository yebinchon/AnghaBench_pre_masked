
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int gcr; } ;
typedef TYPE_1__ cTValue ;
typedef int Node ;
typedef int GCtab ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int const*,int ) ;
 int * FUNC_2 (int const*,int ) ;
 int * FUNC_3 (int const*,TYPE_1__*) ;
 int * FUNC_4 (int const*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static Node *FUNC_11(const GCtab *VAR_0, cTValue *VAR_1)
{
  FUNC_5(!FUNC_8(VAR_1));
  if (FUNC_10(VAR_1))
    return FUNC_4(VAR_0, FUNC_6(VAR_1));
  else if (FUNC_9(VAR_1))
    return FUNC_3(VAR_0, VAR_1);
  else if (FUNC_7(VAR_1))
    return FUNC_2(VAR_0, FUNC_0(VAR_1));
  else
    return FUNC_1(VAR_0, VAR_1->gcr);

}
