
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ii_Expressions; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ IndexInfo ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(IndexInfo *VAR_0, Oid VAR_1, Relation VAR_2,
         Relation VAR_3)
{
 if (FUNC_2(VAR_0->ii_Expressions) == 0)
  FUNC_1(VAR_0, VAR_2, VAR_3);
 else
  FUNC_0(VAR_1, VAR_0, VAR_3);
}
