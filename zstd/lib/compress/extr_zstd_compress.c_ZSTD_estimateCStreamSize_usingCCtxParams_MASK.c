
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
struct TYPE_8__ {scalar_t__ nbWorkers; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (int,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (size_t const) ;
 size_t FUNC_3 (size_t const) ;
 size_t FUNC_4 (TYPE_2__ const*) ;
 TYPE_1__ FUNC_5 (TYPE_2__ const*,int ,int ) ;

size_t FUNC_6(const ZSTD_CCtx_params* VAR_3)
{
    FUNC_1(VAR_3->nbWorkers > 0, VAR_0, "Estimate CCtx size is supported for single-threaded compression only.");
    { ZSTD_compressionParameters const VAR_4 =
                FUNC_5(VAR_3, VAR_2, 0);
        size_t const VAR_5 = FUNC_4(VAR_3);
        size_t const VAR_6 = FUNC_0(VAR_1, (size_t)1 << VAR_4.windowLog);
        size_t const VAR_7 = ((size_t)1 << VAR_4.windowLog) + VAR_6;
        size_t const VAR_8 = FUNC_2(VAR_6) + 1;
        size_t const VAR_9 = FUNC_3(VAR_7)
                                   + FUNC_3(VAR_8);

        return VAR_5 + VAR_9;
    }
}
