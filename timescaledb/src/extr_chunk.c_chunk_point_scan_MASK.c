
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* space; } ;
struct TYPE_12__ {int * coordinates; } ;
struct TYPE_11__ {int num_dimensions; TYPE_2__* dimensions; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
typedef TYPE_4__ Point ;
typedef int DimensionVec ;
typedef TYPE_5__ ChunkScanCtx ;


 int FUNC_0 (TYPE_5__*,int *) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(ChunkScanCtx *VAR_0, Point *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->space->num_dimensions; VAR_2++)
 {
  DimensionVec *VAR_3;

  VAR_3 = FUNC_1(VAR_0->space->dimensions[VAR_2].fd.id, VAR_1->coordinates[VAR_2]);

  FUNC_0(VAR_0, VAR_3);
 }
}
