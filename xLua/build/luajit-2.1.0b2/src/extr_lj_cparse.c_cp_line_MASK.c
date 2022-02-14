
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ u32; } ;
struct TYPE_6__ {scalar_t__ tok; scalar_t__ linenumber; TYPE_1__ val; } ;
typedef TYPE_2__ CPState ;
typedef scalar_t__ BCLine ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(CPState *VAR_1, BCLine VAR_2)
{
  BCLine VAR_3 = VAR_1->val.u32;

  while (VAR_1->tok != VAR_0 && VAR_1->linenumber == VAR_2)
    FUNC_0(VAR_1);
  VAR_1->linenumber = VAR_3;
}
