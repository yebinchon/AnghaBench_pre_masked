
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ZSTD_dictLoadMethod_e ;
typedef scalar_t__ ZSTD_dictContentType_e ;
typedef int ZSTD_cwksp ;
struct TYPE_9__ {int customFree; int customAlloc; } ;
typedef TYPE_1__ ZSTD_customMem ;
typedef int ZSTD_compressionParameters ;
struct TYPE_10__ {scalar_t__ compressionLevel; TYPE_1__ customMem; int workspace; } ;
typedef TYPE_2__ ZSTD_CDict ;


 int FUNC_0 (int,char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (size_t,int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int *,void* const,size_t const) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_1 ;
 int FUNC_6 (void* const,TYPE_1__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,void const*,size_t,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (size_t const,TYPE_1__) ;
 size_t FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;

ZSTD_CDict* FUNC_13(const void* VAR_2, size_t VAR_3,
                                      ZSTD_dictLoadMethod_e VAR_4,
                                      ZSTD_dictContentType_e VAR_5,
                                      ZSTD_compressionParameters VAR_6, ZSTD_customMem VAR_7)
{
    FUNC_0(3, "ZSTD_createCDict_advanced, mode %u", (unsigned)VAR_5);
    if (!VAR_7.customAlloc ^ !VAR_7.customFree) return ((void*)0);

    { size_t const VAR_8 =
            FUNC_2(sizeof(ZSTD_CDict)) +
            FUNC_2(VAR_0) +
            FUNC_11(&VAR_6, 0) +
            (VAR_4 == VAR_1 ? 0
             : FUNC_2(FUNC_1(VAR_3, sizeof(void*))));
        void* const VAR_9 = FUNC_10(VAR_8, VAR_7);
        ZSTD_cwksp VAR_10;
        ZSTD_CDict* VAR_11;

        if (!VAR_9) {
            FUNC_6(VAR_9, VAR_7);
            return ((void*)0);
        }

        FUNC_3(&VAR_10, VAR_9, VAR_8);

        VAR_11 = (ZSTD_CDict*)FUNC_5(&VAR_10, sizeof(ZSTD_CDict));
        FUNC_12(VAR_11 != ((void*)0));
        FUNC_4(&VAR_11->workspace, &VAR_10);
        VAR_11->customMem = VAR_7;
        VAR_11->compressionLevel = 0;

        if (FUNC_9( FUNC_8(VAR_11,
                                        VAR_2, VAR_3,
                                        VAR_4, VAR_5,
                                        VAR_6) )) {
            FUNC_7(VAR_11);
            return ((void*)0);
        }

        return VAR_11;
    }
}
