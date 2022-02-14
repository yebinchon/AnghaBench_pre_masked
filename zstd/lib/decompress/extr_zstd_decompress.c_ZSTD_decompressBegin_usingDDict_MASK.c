
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_DDict ;
struct TYPE_5__ {int ddictIsCold; void const* const dictEnd; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

size_t FUNC_7(ZSTD_DCtx* VAR_0, const ZSTD_DDict* VAR_1)
{
    FUNC_0(4, "ZSTD_decompressBegin_usingDDict");
    FUNC_6(VAR_0 != ((void*)0));
    if (VAR_1) {
        const char* const VAR_2 = (const char*)FUNC_2(VAR_1);
        size_t const VAR_3 = FUNC_3(VAR_1);
        const void* const VAR_4 = VAR_2 + VAR_3;
        VAR_0->ddictIsCold = (VAR_0->dictEnd != VAR_4);
        FUNC_0(4, "DDict is %s",
                    VAR_0->ddictIsCold ? "~cold~" : "hot!");
    }
    FUNC_1( FUNC_5(VAR_0) );
    if (VAR_1) {
        FUNC_4(VAR_0, VAR_1);
    }
    return 0;
}
