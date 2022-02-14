
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_parameters ;
typedef int ZSTD_CCtx_params ;
struct TYPE_4__ {int requestedParams; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int const*) ;
 size_t FUNC_2 (TYPE_1__*,void*,size_t,void const*,size_t,void const*,size_t,int const*) ;

__attribute__((used)) static size_t FUNC_3 (ZSTD_CCtx* VAR_0,
                                      void* VAR_1, size_t VAR_2,
                                const void* VAR_3, size_t VAR_4,
                                const void* VAR_5,size_t VAR_6,
                                const ZSTD_parameters* VAR_7)
{
    ZSTD_CCtx_params const VAR_8 =
            FUNC_1(&VAR_0->requestedParams, VAR_7);
    FUNC_0(4, "ZSTD_compress_internal");
    return FUNC_2(VAR_0,
                                           VAR_1, VAR_2,
                                           VAR_3, VAR_4,
                                           VAR_5, VAR_6,
                                           &VAR_8);
}
