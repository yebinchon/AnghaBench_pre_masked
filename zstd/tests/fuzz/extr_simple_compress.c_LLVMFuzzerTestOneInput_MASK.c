
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (void*) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 size_t FUNC_4 (int *) ;
 size_t FUNC_5 (int *,int ,size_t const) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (void*,void*,size_t const,int const*,size_t,int const) ;
 void* FUNC_8 () ;
 int FUNC_9 (void*) ;
 void* VAR_0 ;
 int FUNC_10 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_11 (size_t const) ;

int FUNC_12(const uint8_t *VAR_3, size_t VAR_4)
{


    FUZZ_dataProducer_t *VAR_5 = FUNC_1(VAR_3, VAR_4);
    VAR_4 = FUNC_4(VAR_5);

    size_t const VAR_6 = FUNC_6(VAR_4);
    size_t const VAR_7 = FUNC_5(VAR_5, 0, VAR_6);

    int const VAR_8 = FUNC_3(VAR_5, VAR_2, VAR_1);

    if (!VAR_0) {
        VAR_0 = FUNC_8();
        FUNC_0(VAR_0);
    }

    void *VAR_9 = FUNC_11(VAR_7);
    FUNC_0(VAR_9);
    FUNC_7(VAR_0, VAR_9, VAR_7, VAR_3, VAR_4, VAR_8);
    FUNC_10(VAR_9);
    FUNC_2(VAR_5);

    FUNC_9(VAR_0); VAR_0 = ((void*)0);

    return 0;
}
