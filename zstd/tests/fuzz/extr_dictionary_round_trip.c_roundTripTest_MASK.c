
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_dictLoadMethod_e ;
typedef scalar_t__ ZSTD_dictContentType_e ;
struct TYPE_3__ {int buff; int size; } ;
typedef TYPE_1__ FUZZ_dict_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,size_t,int *) ;
 TYPE_1__ FUNC_4 (void const*,size_t,int *) ;
 size_t FUNC_5 (int ,int ,int ,int ,scalar_t__) ;
 size_t FUNC_6 (int ,int ,int ) ;
 size_t FUNC_7 (int ,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 size_t FUNC_8 (int ,void*,size_t,void const*,size_t) ;
 size_t FUNC_9 (int ,void*,size_t,void const*,size_t,int ,int ,int const) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_10 (int ,void*,size_t,void*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static size_t FUNC_12(void *VAR_6, size_t VAR_7,
                            void *VAR_8, size_t VAR_9,
                            const void *VAR_10, size_t VAR_11,
                            FUZZ_dataProducer_t *VAR_12)
{
    ZSTD_dictContentType_e VAR_13 = VAR_1;
    FUZZ_dict_t VAR_14 = FUNC_4(VAR_10, VAR_11, VAR_12);
    size_t VAR_15;
    if (FUNC_2(VAR_12, 0, 15) == 0) {
        int const VAR_16 = FUNC_1(VAR_12, VAR_5, VAR_4);

        VAR_15 = FUNC_9(VAR_2,
                VAR_8, VAR_9,
                VAR_10, VAR_11,
                VAR_14.buff, VAR_14.size,
                VAR_16);
    } else {
        VAR_13 = FUNC_2(VAR_12, 0, 2);
        FUNC_3(VAR_2, VAR_11, VAR_12);

        FUNC_0(FUNC_6(VAR_2, VAR_0, 0));
        FUNC_0(FUNC_5(
                VAR_2, VAR_14.buff, VAR_14.size,
                (ZSTD_dictLoadMethod_e)FUNC_2(VAR_12, 0, 1),
                VAR_13));
        VAR_15 = FUNC_8(VAR_2, VAR_8, VAR_9, VAR_10, VAR_11);
    }
    FUNC_0(VAR_15);
    FUNC_0(FUNC_7(
        VAR_3, VAR_14.buff, VAR_14.size,
        (ZSTD_dictLoadMethod_e)FUNC_2(VAR_12, 0, 1),
        VAR_13));
    {
        size_t const VAR_17 = FUNC_10(
                VAR_3, VAR_6, VAR_7, VAR_8, VAR_15);
        FUNC_11(VAR_14.buff);
        return VAR_17;
    }
}
