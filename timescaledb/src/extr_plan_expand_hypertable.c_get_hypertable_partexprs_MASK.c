
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* partitioning; int column_attno; } ;
struct TYPE_14__ {int attcollation; int atttypmod; int atttypid; } ;
struct TYPE_13__ {int main_table_relid; TYPE_1__* space; } ;
struct TYPE_10__ {int fn_expr; } ;
struct TYPE_11__ {TYPE_2__ func_fmgr; } ;
struct TYPE_12__ {TYPE_3__ partfunc; } ;
struct TYPE_9__ {int num_dimensions; TYPE_7__* dimensions; } ;
typedef int Query ;
typedef int List ;
typedef int Index ;
typedef TYPE_5__ Hypertable ;
typedef int HeapTuple ;
typedef TYPE_6__* Form_pg_attribute ;
typedef int Expr ;
typedef TYPE_7__ Dimension ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 int ** FUNC_9 (int) ;

__attribute__((used)) static List **
FUNC_10(Hypertable *VAR_1, Query *VAR_2, Index VAR_3)
{
 int VAR_4;
 List **VAR_5;

 FUNC_0(((void*)0) != VAR_1->space);

 VAR_5 = FUNC_9(sizeof(List *) * VAR_1->space->num_dimensions);

 for (VAR_4 = 0; VAR_4 < VAR_1->space->num_dimensions; VAR_4++)
 {
  Dimension *VAR_6 = &VAR_1->space->dimensions[VAR_4];
  Expr *VAR_7;
  HeapTuple VAR_8 = FUNC_4(VAR_1->main_table_relid, VAR_6->column_attno);
  Form_pg_attribute VAR_9;

  if (!FUNC_2(VAR_8))
   FUNC_5(VAR_0, "cache lookup failed for attribute");

  VAR_9 = (Form_pg_attribute) FUNC_1(VAR_8);

  VAR_7 = (Expr *)
   FUNC_8(VAR_3, VAR_6->column_attno, VAR_9->atttypid, VAR_9->atttypmod, VAR_9->attcollation, 0);

  FUNC_3(VAR_8);



  if (((void*)0) != VAR_6->partitioning)
   VAR_5[VAR_4] = FUNC_7(VAR_7, VAR_6->partitioning->partfunc.func_fmgr.fn_expr);
  else
   VAR_5[VAR_4] = FUNC_6(VAR_7);
 }

 return VAR_5;
}
