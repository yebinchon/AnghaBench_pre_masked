
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dimension; } ;
struct TYPE_7__ {int num_dimensions; TYPE_3__** dimension_restriction; } ;
struct TYPE_6__ {scalar_t__ column_attno; } ;
typedef TYPE_2__ HypertableRestrictInfo ;
typedef TYPE_3__ DimensionRestrictInfo ;
typedef scalar_t__ AttrNumber ;



__attribute__((used)) static DimensionRestrictInfo *
FUNC_0(HypertableRestrictInfo *VAR_0, AttrNumber VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_dimensions; VAR_2++)
 {
  if (VAR_0->dimension_restriction[VAR_2]->dimension->column_attno == VAR_1)
   return VAR_0->dimension_restriction[VAR_2];
 }
 return ((void*)0);
}
