
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ num_slices; } ;
struct TYPE_6__ {int num_dimensions; int ** dimension_restriction; } ;
typedef int List ;
typedef TYPE_1__ HypertableRestrictInfo ;
typedef TYPE_2__ DimensionVec ;
typedef int DimensionRestrictInfo ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static List *
FUNC_4(HypertableRestrictInfo *VAR_1)
{
 int VAR_2;
 List *VAR_3 = VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_dimensions; VAR_2++)
 {
  DimensionRestrictInfo *VAR_4 = VAR_1->dimension_restriction[VAR_2];
  DimensionVec *VAR_5;

  FUNC_0(((void*)0) != VAR_4);

  VAR_5 = FUNC_1(VAR_4);

  FUNC_0(VAR_5->num_slices >= 0);





  if (VAR_5->num_slices == 0)
   return VAR_0;

  VAR_3 = FUNC_2(VAR_3, VAR_5);
 }

 FUNC_0(FUNC_3(VAR_3) == VAR_1->num_dimensions);

 return VAR_3;
}
