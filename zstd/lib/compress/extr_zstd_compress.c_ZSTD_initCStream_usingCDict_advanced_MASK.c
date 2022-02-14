
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ZSTD_frameParameters ;
struct TYPE_7__ {int fParams; } ;
struct TYPE_8__ {TYPE_1__ requestedParams; } ;
typedef TYPE_2__ ZSTD_CStream ;
typedef int ZSTD_CDict ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int const*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,unsigned long long) ;
 int VAR_0 ;

size_t FUNC_5(ZSTD_CStream* VAR_1,
                                            const ZSTD_CDict* VAR_2,
                                            ZSTD_frameParameters VAR_3,
                                            unsigned long long VAR_4)
{
    FUNC_0(4, "ZSTD_initCStream_usingCDict_advanced");
    FUNC_1( FUNC_3(VAR_1, VAR_0) );
    FUNC_1( FUNC_4(VAR_1, VAR_4) );
    VAR_1->requestedParams.fParams = VAR_3;
    FUNC_1( FUNC_2(VAR_1, VAR_2) );
    return 0;
}
