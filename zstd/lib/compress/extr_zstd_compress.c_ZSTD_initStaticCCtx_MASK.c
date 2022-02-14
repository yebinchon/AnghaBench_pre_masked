
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_cwksp ;
typedef int ZSTD_compressedBlockState_t ;
struct TYPE_5__ {int * nextCBlock; int * prevCBlock; } ;
struct TYPE_6__ {size_t staticSize; int bmi2; int workspace; int * entropyWorkspace; TYPE_1__ blockState; } ;
typedef TYPE_2__ ZSTD_CCtx ;
typedef int U32 ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,void*,size_t) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

ZSTD_CCtx* FUNC_7(void *VAR_1, size_t VAR_2)
{
    ZSTD_cwksp VAR_3;
    ZSTD_CCtx* VAR_4;
    if (VAR_2 <= sizeof(ZSTD_CCtx)) return ((void*)0);
    if ((size_t)VAR_1 & 7) return ((void*)0);
    FUNC_3(&VAR_3, VAR_1, VAR_2);

    VAR_4 = (ZSTD_CCtx*)FUNC_5(&VAR_3, sizeof(ZSTD_CCtx));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_6(VAR_4, 0, sizeof(ZSTD_CCtx));
    FUNC_4(&VAR_4->workspace, &VAR_3);
    VAR_4->staticSize = VAR_2;


    if (!FUNC_2(&VAR_4->workspace, VAR_0 + 2 * sizeof(ZSTD_compressedBlockState_t))) return ((void*)0);
    VAR_4->blockState.prevCBlock = (ZSTD_compressedBlockState_t*)FUNC_5(&VAR_4->workspace, sizeof(ZSTD_compressedBlockState_t));
    VAR_4->blockState.nextCBlock = (ZSTD_compressedBlockState_t*)FUNC_5(&VAR_4->workspace, sizeof(ZSTD_compressedBlockState_t));
    VAR_4->entropyWorkspace = (U32*)FUNC_5(
        &VAR_4->workspace, VAR_0);
    VAR_4->bmi2 = FUNC_1(FUNC_0());
    return VAR_4;
}
