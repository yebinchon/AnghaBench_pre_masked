
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_slices; int * slices; } ;
typedef TYPE_1__ DimensionVec ;
typedef int ChunkScanCtx ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(ChunkScanCtx *VAR_1, DimensionVec *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_slices; VAR_3++)
 {




  FUNC_0(VAR_2->slices[VAR_3], VAR_1, VAR_0);
 }
}
