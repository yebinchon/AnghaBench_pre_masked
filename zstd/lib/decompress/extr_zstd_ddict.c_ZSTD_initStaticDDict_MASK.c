
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ZSTD_dictLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
typedef int const ZSTD_DDict ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const* const,void const*,size_t,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const* const,void const*,size_t) ;

const ZSTD_DDict* FUNC_4(
                                void* VAR_2, size_t VAR_3,
                                const void* VAR_4, size_t VAR_5,
                                ZSTD_dictLoadMethod_e VAR_6,
                                ZSTD_dictContentType_e VAR_7)
{
    size_t const VAR_8 = sizeof(ZSTD_DDict)
                             + (VAR_6 == VAR_1 ? 0 : VAR_5);
    ZSTD_DDict* const VAR_9 = (ZSTD_DDict*)VAR_2;
    FUNC_2(VAR_2 != ((void*)0));
    FUNC_2(VAR_4 != ((void*)0));
    if ((size_t)VAR_2 & 7) return ((void*)0);
    if (VAR_3 < VAR_8) return ((void*)0);
    if (VAR_6 == VAR_0) {
        FUNC_3(VAR_9+1, VAR_4, VAR_5);
        VAR_4 = VAR_9+1;
    }
    if (FUNC_1( FUNC_0(VAR_9,
                                              VAR_4, VAR_5,
                                              VAR_1, VAR_7) ))
        return ((void*)0);
    return VAR_9;
}
