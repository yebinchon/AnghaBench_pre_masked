
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
struct TYPE_7__ {int compressionLevel; int fParams; int cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static ZSTD_CCtx_params FUNC_2(
        const ZSTD_CCtx_params* VAR_1, const ZSTD_parameters* VAR_2)
{
    ZSTD_CCtx_params VAR_3 = *VAR_1;
    FUNC_1(!FUNC_0(VAR_2->cParams));
    VAR_3.cParams = VAR_2->cParams;
    VAR_3.fParams = VAR_2->fParams;
    VAR_3.compressionLevel = VAR_0;
    return VAR_3;
}
