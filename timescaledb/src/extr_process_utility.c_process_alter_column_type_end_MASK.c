
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int name; scalar_t__ def; } ;
struct TYPE_13__ {int typeName; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_12__ {TYPE_1__ fd; } ;
struct TYPE_11__ {int space; } ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;
typedef TYPE_3__ Dimension ;
typedef TYPE_4__ ColumnDef ;
typedef TYPE_5__ AlterTableCmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(Hypertable *VAR_1, AlterTableCmd *VAR_2)
{
 ColumnDef *VAR_3 = (ColumnDef *) VAR_2->def;
 Oid VAR_4 = FUNC_0(FUNC_5(VAR_3->typeName));
 Dimension *VAR_5 = FUNC_3(VAR_1->space, VAR_0, VAR_2->name);

 if (((void*)0) == VAR_5)
  return;

 FUNC_2(VAR_5, VAR_4);
 FUNC_4(1);
 FUNC_1(VAR_1->space, VAR_5->fd.id);
 FUNC_4(0);
}
