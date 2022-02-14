
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int cParams; } ;
struct TYPE_9__ {TYPE_2__ requestedParams; } ;
typedef TYPE_1__ ZSTD_CStream ;
typedef int ZSTD_CDict ;
typedef TYPE_2__ ZSTD_CCtx_params ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,void const*,size_t) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,unsigned long long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (int) ;

size_t FUNC_9(ZSTD_CStream* VAR_1,
                    const void* VAR_2, size_t VAR_3, const ZSTD_CDict* VAR_4,
                    const ZSTD_CCtx_params* VAR_5,
                    unsigned long long VAR_6)
{
    FUNC_0(4, "ZSTD_initCStream_internal");
    FUNC_1( FUNC_4(VAR_1, VAR_0) );
    FUNC_1( FUNC_5(VAR_1, VAR_6) );
    FUNC_8(!FUNC_7(FUNC_6(VAR_5->cParams)));
    VAR_1->requestedParams = *VAR_5;
    FUNC_8(!((VAR_2) && (VAR_4)));
    if (VAR_2) {
        FUNC_1( FUNC_2(VAR_1, VAR_2, VAR_3) );
    } else {

        FUNC_1( FUNC_3(VAR_1, VAR_4) );
    }
    return 0;
}
