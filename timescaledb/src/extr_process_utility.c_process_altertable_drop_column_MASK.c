
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int name; } ;
struct TYPE_9__ {int column_name; } ;
struct TYPE_11__ {TYPE_2__ fd; } ;
struct TYPE_10__ {TYPE_1__* space; } ;
struct TYPE_8__ {int num_dimensions; TYPE_4__* dimensions; } ;
typedef TYPE_3__ Hypertable ;
typedef TYPE_4__ Dimension ;
typedef TYPE_5__ AlterTableCmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(Hypertable *VAR_2, AlterTableCmd *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->space->num_dimensions; VAR_4++)
 {
  Dimension *VAR_5 = &VAR_2->space->dimensions[VAR_4];

  if (FUNC_4(&VAR_5->fd.column_name, VAR_3->name) == 0)
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_3("cannot drop column named in partition key"),
      FUNC_2("cannot drop column that is a hypertable partitioning (space or "
          "time) dimension")));
 }
}
