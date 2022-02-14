
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,size_t,int *) ;
 size_t FUNC_4 (int ,void*,size_t,void const*,size_t) ;
 size_t FUNC_5 (int ,void*,size_t,void const*,size_t,int const) ;
 size_t FUNC_6 (int ,void*,size_t,void*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_7(void *VAR_4, size_t VAR_5,
                            void *VAR_6, size_t VAR_7,
                            const void *VAR_8, size_t VAR_9,
                            FUZZ_dataProducer_t *VAR_10)
{
    size_t VAR_11;
    if (FUNC_2(VAR_10, 0, 1)) {
        FUNC_3(VAR_0, VAR_9, VAR_10);
        VAR_11 = FUNC_4(VAR_0, VAR_6, VAR_7, VAR_8, VAR_9);
    } else {
      int const VAR_12 = FUNC_1(VAR_10, VAR_3, VAR_2);

        VAR_11 = FUNC_5(
            VAR_0, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12);
    }
    FUNC_0(VAR_11);
    return FUNC_6(VAR_1, VAR_4, VAR_5, VAR_6, VAR_11);
}
