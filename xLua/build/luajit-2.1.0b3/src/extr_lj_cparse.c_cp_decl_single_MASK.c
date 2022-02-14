
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
struct TYPE_9__ {scalar_t__ tok; TYPE_1__ val; } ;
typedef TYPE_2__ CPState ;
typedef int CPDecl ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(CPState *VAR_1)
{
  CPDecl VAR_2;
  FUNC_1(VAR_1, &VAR_2, 0);
  FUNC_2(VAR_1, &VAR_2);
  VAR_1->val.id = FUNC_0(VAR_1, &VAR_2);
  if (VAR_1->tok != VAR_0) FUNC_3(VAR_1, VAR_0);
}
