
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_dictLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void const*,size_t,int ,int ) ;
 size_t FUNC_2 (int *,void*,size_t,void const*,size_t) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;

__attribute__((used)) static size_t FUNC_5(void* VAR_0, size_t VAR_1,
                       void const* VAR_2, size_t VAR_3,
                       void const* VAR_4, size_t VAR_5,
                       ZSTD_dictLoadMethod_e VAR_6,
                       ZSTD_dictContentType_e VAR_7)
{
    ZSTD_CCtx* VAR_8 = FUNC_3();
    FUNC_0(FUNC_1(
            VAR_8, VAR_4, VAR_5, VAR_6, VAR_7));
    size_t const VAR_9 = FUNC_2(
            VAR_8, VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_4(VAR_8);
    return VAR_9;
}
