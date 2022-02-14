
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ contentSizeFlag; } ;
struct TYPE_11__ {int cParams; TYPE_1__ fParams; } ;
typedef TYPE_2__ ZSTD_parameters ;
struct TYPE_12__ {int requestedParams; } ;
typedef TYPE_3__ ZSTD_CStream ;
typedef unsigned long long U64 ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,void const*,size_t) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,unsigned long long const) ;
 unsigned long long VAR_0 ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

size_t FUNC_7(ZSTD_CStream* VAR_2,
                                 const void* VAR_3, size_t VAR_4,
                                 ZSTD_parameters VAR_5, unsigned long long VAR_6)
{




    U64 const VAR_7 = (VAR_6==0 && VAR_5.fParams.contentSizeFlag==0) ? VAR_0 : VAR_6;
    FUNC_0(4, "ZSTD_initCStream_advanced");
    FUNC_1( FUNC_3(VAR_2, VAR_1) );
    FUNC_1( FUNC_4(VAR_2, VAR_7) );
    FUNC_1( FUNC_6(VAR_5.cParams) );
    VAR_2->requestedParams = FUNC_5(&VAR_2->requestedParams, &VAR_5);
    FUNC_1( FUNC_2(VAR_2, VAR_3, VAR_4) );
    return 0;
}
