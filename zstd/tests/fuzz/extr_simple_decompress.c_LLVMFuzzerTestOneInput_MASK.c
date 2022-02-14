
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (void*) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 size_t FUNC_4 (int *,int ,int) ;
 void* FUNC_5 () ;
 int FUNC_6 (void*,void*,size_t const,int const*,size_t) ;
 int FUNC_7 (void*) ;
 void* VAR_0 ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (size_t const) ;

int FUNC_10(const uint8_t *VAR_1, size_t VAR_2)
{


    FUZZ_dataProducer_t *VAR_3 = FUNC_1(VAR_1, VAR_2);
    VAR_2 = FUNC_3(VAR_3);

    if (!VAR_0) {
        VAR_0 = FUNC_5();
        FUNC_0(VAR_0);
    }

    size_t const VAR_4 = FUNC_4(VAR_3, 0, 10 * VAR_2);
    void *VAR_5 = FUNC_9(VAR_4);
    FUNC_0(VAR_5);

    FUNC_6(VAR_0, VAR_5, VAR_4, VAR_1, VAR_2);
    FUNC_8(VAR_5);

    FUNC_2(VAR_3);


    FUNC_7(VAR_0); VAR_0 = ((void*)0);

    return 0;
}
