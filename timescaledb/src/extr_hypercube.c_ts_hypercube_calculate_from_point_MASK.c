
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_14__ {scalar_t__ id; scalar_t__ aligned; } ;
struct TYPE_19__ {TYPE_1__ fd; } ;
struct TYPE_18__ {scalar_t__ num_slices; int * slices; } ;
struct TYPE_17__ {int num_slices; int * slices; } ;
struct TYPE_16__ {int num_dimensions; TYPE_6__* dimensions; } ;
struct TYPE_15__ {int * coordinates; } ;
typedef TYPE_2__ Point ;
typedef TYPE_3__ Hyperspace ;
typedef TYPE_4__ Hypercube ;
typedef TYPE_5__ DimensionVec ;
typedef TYPE_6__ Dimension ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (scalar_t__,int ,int) ;
 TYPE_4__* FUNC_5 (int) ;

Hypercube *
FUNC_6(Hyperspace *VAR_0, Point *VAR_1)
{
 Hypercube *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(VAR_0->num_dimensions);


 for (VAR_3 = 0; VAR_3 < VAR_0->num_dimensions; VAR_3++)
 {
  Dimension *VAR_4 = &VAR_0->dimensions[VAR_3];
  int64 VAR_5 = VAR_1->coordinates[VAR_3];
  bool VAR_6 = 0;


  FUNC_0(VAR_3 == 0 || VAR_4->fd.id > VAR_0->dimensions[VAR_3 - 1].fd.id);





  if (VAR_4->fd.aligned)
  {
   DimensionVec *VAR_7;

   VAR_7 = FUNC_4(VAR_4->fd.id, VAR_5, 1);

   if (VAR_7->num_slices > 0)
   {
    VAR_2->slices[VAR_3] = VAR_7->slices[0];
    VAR_6 = 1;
   }
  }

  if (!VAR_6)
  {




   VAR_2->slices[VAR_3] = FUNC_2(VAR_4, VAR_5);






   FUNC_3(VAR_2->slices[VAR_3]);
  }
 }

 VAR_2->num_slices = VAR_0->num_dimensions;

 FUNC_0(FUNC_1(VAR_2));

 return VAR_2;
}
