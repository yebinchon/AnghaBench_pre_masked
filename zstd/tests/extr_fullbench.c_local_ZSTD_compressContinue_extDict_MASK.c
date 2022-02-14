
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_2; int member_1; } ;
struct TYPE_4__ {int cParams; TYPE_2__ fParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
typedef TYPE_2__ ZSTD_frameParameters ;
typedef int ZSTD_compressionParameters ;
typedef int BYTE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,TYPE_1__,size_t) ;
 size_t FUNC_2 (int ,void*,size_t,int *,int) ;
 size_t FUNC_3 (int ,void*,size_t,int const*,int) ;
 int FUNC_4 (size_t const) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int VAR_1 ;
 int FUNC_6 (int *,void const*,int) ;

__attribute__((used)) static size_t
FUNC_7(const void* VAR_2, size_t VAR_3,
                                    void* VAR_4, size_t VAR_5,
                                    void* VAR_6)
{
    BYTE VAR_7[VAR_0];

    ZSTD_parameters VAR_8;
    ZSTD_frameParameters const VAR_9 = { 1, 0, 0 };
    VAR_8.fParams = VAR_9;
    VAR_8.cParams = *(ZSTD_compressionParameters*)VAR_6;
    FUNC_1(VAR_1, ((void*)0), 0, VAR_8, VAR_3);
    FUNC_6(VAR_7, VAR_2, VAR_0);

    { size_t const VAR_10 = FUNC_2(VAR_1,
                                            VAR_4, VAR_5,
                                            VAR_7, VAR_0);
        if (FUNC_5(VAR_10)) {
            FUNC_0("local_ZSTD_compressContinue_extDict error : %s\n",
                    FUNC_4(VAR_10));
            return VAR_10;
        }
        VAR_4 = (BYTE*)VAR_4 + VAR_10;
        VAR_5 -= VAR_10;
    }
    return FUNC_3(VAR_1, VAR_4, VAR_5,
                            (const BYTE*)VAR_2 + VAR_0,
                            VAR_3 - VAR_0);
}
