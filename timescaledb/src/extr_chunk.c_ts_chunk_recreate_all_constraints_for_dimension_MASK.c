
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {int num_slices; int * slices; } ;
typedef int Hyperspace ;
typedef TYPE_1__ DimensionVec ;
typedef int ChunkScanCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 TYPE_1__* FUNC_4 (int ,int ) ;

void
FUNC_5(Hyperspace *VAR_2, int32 VAR_3)
{
 DimensionVec *VAR_4;
 ChunkScanCtx VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_3, 0);

 if (((void*)0) == VAR_4)
  return;

 FUNC_2(&VAR_5, VAR_2, ((void*)0));

 for (VAR_6 = 0; VAR_6 < VAR_4->num_slices; VAR_6++)
  FUNC_3(VAR_4->slices[VAR_6],
             &VAR_5,
             VAR_0);

 FUNC_1(&VAR_5, VAR_1, 0);
 FUNC_0(&VAR_5);
}
