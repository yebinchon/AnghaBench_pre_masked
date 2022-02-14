
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int info; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_3__* ct; int tmask; int str; int cts; TYPE_1__ val; int sb; int L; int c; } ;
typedef int CPToken ;
typedef TYPE_2__ CPState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_3__**,int ,int ) ;

__attribute__((used)) static CPToken FUNC_7(CPState *VAR_2)
{
  do { FUNC_1(VAR_2, VAR_2->c); } while (FUNC_5(FUNC_0(VAR_2)));
  VAR_2->str = FUNC_4(VAR_2->L, &VAR_2->sb);
  VAR_2->val.id = FUNC_6(VAR_2->cts, &VAR_2->ct, VAR_2->str, VAR_2->tmask);
  if (FUNC_3(VAR_2->ct->info) == VAR_1)
    return FUNC_2(VAR_2->ct->info);
  return VAR_0;
}
