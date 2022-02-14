
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int cts; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_10__ {int info; } ;
typedef TYPE_1__ CType ;
typedef TYPE_2__ CPValue ;
typedef TYPE_3__ CPState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(CPState *VAR_1, CPValue *VAR_2)
{
  CType *VAR_3;
  FUNC_1(VAR_1, VAR_2, 0);
  VAR_3 = FUNC_3(VAR_1->cts, VAR_2->id);
  if (!FUNC_2(VAR_3->info)) FUNC_0(VAR_1, VAR_0);
}
