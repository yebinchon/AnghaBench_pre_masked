
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (size_t const) ;
 int * FUNC_3 (int const*,size_t) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (size_t) ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 size_t FUNC_9 (int *,int *,size_t,int *,size_t const) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 size_t FUNC_12 (int *,size_t,int const*,size_t,int *) ;
 int * VAR_3 ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (size_t) ;
 int FUNC_15 (int const*,int *,size_t) ;
 int * VAR_4 ;

int FUNC_16(const uint8_t *VAR_5, size_t VAR_6)
{
    size_t VAR_7;



    FUZZ_dataProducer_t *VAR_8 = FUNC_3(VAR_5, VAR_6);
    VAR_6 = FUNC_5(VAR_8);

    VAR_7 = FUNC_6(VAR_6) * 15;


    if (VAR_7 > VAR_0) {
        FUNC_13(VAR_1);
        FUNC_13(VAR_4);
        VAR_1 = (uint8_t*)FUNC_14(VAR_7);
        VAR_4 = (uint8_t*)FUNC_14(VAR_7);
        VAR_0 = VAR_7;
        FUNC_0(VAR_1 && VAR_4);
    }
    if (!VAR_2) {
        VAR_2 = FUNC_7();
        FUNC_0(*VAR_2);
    }
    if (!VAR_3) {
        VAR_3 = FUNC_8();
        FUNC_0(*VAR_3);
    }

    {
        size_t const VAR_9 = FUNC_12(VAR_1, VAR_7, VAR_5, VAR_6, VAR_8);
        size_t const VAR_10 =
            FUNC_9(VAR_3, VAR_4, VAR_7, VAR_1, VAR_9);
        FUNC_2(VAR_10);
        FUNC_1(VAR_10 == VAR_6, "Incorrect regenerated size");
        FUNC_1(!FUNC_15(VAR_5, VAR_4, VAR_6), "Corruption!");
    }

    FUNC_4(VAR_8);

    FUNC_10(VAR_2); VAR_2 = ((void*)0);
    FUNC_11(VAR_3); VAR_3 = ((void*)0);

    return 0;
}
