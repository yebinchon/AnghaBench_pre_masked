
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int subtype; int * name; } ;
typedef int Oid ;
typedef int Hypertable ;
typedef TYPE_1__ AlterTableCmd ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(Hypertable *VAR_1, Oid VAR_2, void *VAR_3)
{
 AlterTableCmd *VAR_4 = (AlterTableCmd *) VAR_3;
 AlterTableCmd *VAR_5 = FUNC_1(VAR_4);

 VAR_5->name =
  FUNC_3(VAR_2, VAR_4->name);

 if (VAR_5->name == ((void*)0))
  return;


 VAR_5->subtype = VAR_0;
 FUNC_0(VAR_2, FUNC_2(VAR_5), 0);
}
