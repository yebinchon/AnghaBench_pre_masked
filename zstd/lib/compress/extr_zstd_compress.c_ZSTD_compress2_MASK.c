
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CCtx ;


 int FUNC_0 (size_t const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 size_t FUNC_3 (int *,void*,size_t,size_t*,void const*,size_t,size_t*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;

size_t FUNC_5(ZSTD_CCtx* VAR_3,
                      void* VAR_4, size_t VAR_5,
                      const void* VAR_6, size_t VAR_7)
{
    FUNC_2(VAR_3, VAR_1);
    { size_t VAR_8 = 0;
        size_t VAR_9 = 0;
        size_t const VAR_10 = FUNC_3(VAR_3,
                                        VAR_4, VAR_5, &VAR_8,
                                        VAR_6, VAR_7, &VAR_9,
                                        VAR_0);
        FUNC_0(VAR_10);
        if (VAR_10 != 0) {
            FUNC_4(VAR_8 == VAR_5);
            FUNC_1(VAR_2);
        }
        FUNC_4(VAR_9 == VAR_7);
        return VAR_8;
    }
}
