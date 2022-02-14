
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int ZSTD_dictLoadMethod_e ;
typedef scalar_t__ ZSTD_dictContentType_e ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (int,char*,unsigned int const) ;
 int FUNC_1 (void* const) ;
 int FUNC_2 (int,char*) ;
 int * FUNC_3 (int const*,size_t) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 void* FUNC_6 (int *,int ,int) ;
 size_t FUNC_7 (size_t) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_8 (size_t const) ;
 size_t FUNC_9 (void* const,size_t const,int const*,size_t,int const*,size_t,unsigned int const,scalar_t__ const) ;
 size_t FUNC_10 (void* const,size_t,void* const,size_t const,int const*,size_t,unsigned int const,scalar_t__ const) ;
 int FUNC_11 (void* const) ;
 void* FUNC_12 (size_t const) ;
 int FUNC_13 (int const*,void* const,size_t) ;

int FUNC_14(const uint8_t *VAR_1, size_t VAR_2)
{
    FUZZ_dataProducer_t *VAR_3 = FUNC_3(VAR_1, VAR_2);
    ZSTD_dictLoadMethod_e const VAR_4 =
    VAR_2 = FUNC_6(VAR_3, 0, 1);
    ZSTD_dictContentType_e const VAR_5 =
            FUNC_6(VAR_3, 0, 2);
    VAR_2 = FUNC_5(VAR_3);

    FUNC_0(2, "Dict load method %d", VAR_4);
    FUNC_0(2, "Dict content type %d", VAR_5);
    FUNC_0(2, "Dict size %u", (unsigned)VAR_2);

    void* const VAR_6 = FUNC_12(VAR_2);
    FUNC_1(VAR_6);
    size_t const VAR_7 = FUNC_7(VAR_2);
    void* const VAR_8 = FUNC_12(VAR_7);
    FUNC_1(VAR_8);

    size_t const VAR_9 =
            FUNC_9(VAR_8, VAR_7, VAR_1, VAR_2, VAR_1, VAR_2, VAR_4, VAR_5);

    if (FUNC_8(VAR_9)) {
      FUNC_2(VAR_5 != VAR_0, "Raw must always succeed!");
      goto out;
    }
    size_t const VAR_10 =
            FUNC_10(VAR_6, VAR_2, VAR_8, VAR_9, VAR_1, VAR_2, VAR_4, VAR_5);
    FUNC_2(VAR_10 == VAR_2, "Incorrect regenerated size");
    FUNC_2(!FUNC_13(VAR_1, VAR_6, VAR_2), "Corruption!");

out:
    FUNC_11(VAR_8);
    FUNC_11(VAR_6);
    FUNC_4(VAR_3);
    return 0;
}
