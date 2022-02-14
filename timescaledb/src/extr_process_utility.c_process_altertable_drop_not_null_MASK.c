
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int name; } ;
struct TYPE_10__ {int column_name; } ;
struct TYPE_12__ {TYPE_2__ fd; } ;
struct TYPE_11__ {TYPE_1__* space; } ;
struct TYPE_9__ {int num_dimensions; TYPE_4__* dimensions; } ;
typedef TYPE_3__ Hypertable ;
typedef TYPE_4__ Dimension ;
typedef TYPE_5__ AlterTableCmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(Hypertable *VAR_3, AlterTableCmd *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->space->num_dimensions; VAR_5++)
 {
  Dimension *VAR_6 = &VAR_3->space->dimensions[VAR_5];

  if (FUNC_0(VAR_6) &&
   FUNC_5(FUNC_1(VAR_6->fd.column_name), VAR_4->name, VAR_2) == 0)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("cannot drop not-null constraint from a time-partitioned column")));
 }
}
