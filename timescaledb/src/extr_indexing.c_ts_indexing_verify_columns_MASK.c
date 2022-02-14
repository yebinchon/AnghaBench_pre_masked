
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int column_name; } ;
struct TYPE_7__ {TYPE_1__ fd; } ;
struct TYPE_6__ {int num_dimensions; TYPE_3__* dimensions; } ;
typedef int List ;
typedef TYPE_2__ Hyperspace ;
typedef TYPE_3__ Dimension ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(Hyperspace *VAR_2, List *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_dimensions; VAR_4++)
 {
  Dimension *VAR_5 = &VAR_2->dimensions[VAR_4];

  if (!FUNC_4(VAR_3, FUNC_0(VAR_5->fd.column_name)))
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("cannot create a unique index without the column \"%s\" (used in "
       "partitioning)",
       FUNC_0(VAR_5->fd.column_name))));
 }
}
