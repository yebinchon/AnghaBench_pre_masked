
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
typedef int int64 ;
struct TYPE_11__ {int early_abort; int htab; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_10__ {TYPE_1__ fd; } ;
typedef int StrategyNumber ;
typedef int Hyperspace ;
typedef int DimensionVec ;
typedef TYPE_2__ Dimension ;
typedef TYPE_3__ ChunkScanCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int) ;
 int * FUNC_5 (int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static ChunkScanCtx *
FUNC_6(Hyperspace *VAR_0, Dimension *VAR_1, StrategyNumber VAR_2,
          int64 VAR_3, StrategyNumber VAR_4, int64 VAR_5,
          int VAR_6, uint64 *VAR_7)
{
 ChunkScanCtx *VAR_8 = FUNC_4(sizeof(ChunkScanCtx));
 DimensionVec *VAR_9;

 FUNC_0(VAR_0 != ((void*)0));


 FUNC_0(VAR_1 != ((void*)0));

 VAR_9 = FUNC_5(VAR_1->fd.id,
             VAR_2,
             VAR_3,
             VAR_4,
             VAR_5,
             VAR_6);


 FUNC_1(VAR_8, VAR_0, ((void*)0));


 VAR_8->early_abort = 0;


 FUNC_2(VAR_8, VAR_9);

 *VAR_7 += FUNC_3(VAR_8->htab);
 return VAR_8;
}
