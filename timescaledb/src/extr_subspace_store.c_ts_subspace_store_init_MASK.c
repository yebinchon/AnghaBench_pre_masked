
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_9__ {int num_dimensions; TYPE_1__* dimensions; } ;
struct TYPE_8__ {int num_dimensions; int mcxt; int max_items; int origin; } ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_2__ SubspaceStore ;
typedef int MemoryContext ;
typedef TYPE_3__ Hyperspace ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int) ;

SubspaceStore *
FUNC_4(Hyperspace *VAR_1, MemoryContext VAR_2, int16 VAR_3)
{
 MemoryContext VAR_4 = FUNC_1(VAR_2);
 SubspaceStore *VAR_5 = FUNC_2(sizeof(SubspaceStore));





 FUNC_0(VAR_1->num_dimensions < 1 || VAR_1->dimensions[0].type == VAR_0);

 VAR_5->origin = FUNC_3(VAR_1->num_dimensions == 1);
 VAR_5->num_dimensions = VAR_1->num_dimensions;

 VAR_5->max_items = VAR_3;
 VAR_5->mcxt = VAR_2;
 FUNC_1(VAR_4);
 return VAR_5;
}
