
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int column_name; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ fd; } ;
struct TYPE_7__ {int num_dimensions; TYPE_3__* dimensions; } ;
typedef TYPE_2__ Hyperspace ;
typedef scalar_t__ DimensionType ;
typedef TYPE_3__ Dimension ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

Dimension *
FUNC_1(Hyperspace *VAR_1, DimensionType VAR_2, const char *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_dimensions; VAR_4++)
 {
  Dimension *VAR_5 = &VAR_1->dimensions[VAR_4];

  if ((VAR_2 == VAR_0 || VAR_5->type == VAR_2) &&
   FUNC_0(&VAR_5->fd.column_name, VAR_3) == 0)
   return VAR_5;
 }

 return ((void*)0);
}
