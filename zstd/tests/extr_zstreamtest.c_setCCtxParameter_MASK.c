
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_cParameter ;
typedef int ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;


 size_t FUNC_0 (int *,int ,unsigned int) ;
 size_t FUNC_1 (int *,int ,unsigned int) ;

__attribute__((used)) static size_t FUNC_2(ZSTD_CCtx* VAR_0, ZSTD_CCtx_params* VAR_1,
                               ZSTD_cParameter VAR_2, unsigned VAR_3,
                               int VAR_4)
{
    if (VAR_4) {
        return FUNC_0(VAR_1, VAR_2, VAR_3);
    } else {
        return FUNC_1(VAR_0, VAR_2, VAR_3);
    }
}
