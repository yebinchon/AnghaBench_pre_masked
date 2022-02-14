
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolEncodingType_e ;
typedef int ZSTD_strategy ;
typedef int ZSTD_defaultPolicy_e ;
typedef size_t U32 ;
typedef scalar_t__ FSE_repeat ;
typedef int FSE_CTable ;


 int FUNC_0 (int,char*,...) ;
 size_t const FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (unsigned int const*,unsigned int const,size_t,unsigned int const) ;
 int FUNC_3 (int) ;
 size_t const FUNC_4 (short const*,size_t,unsigned int const*,unsigned int const) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t const FUNC_5 (unsigned int const*,unsigned int const,size_t) ;
 size_t const FUNC_6 (int const*,unsigned int const*,unsigned int const) ;
 scalar_t__ FUNC_7 (size_t const) ;
 int const VAR_6 ;
 int FUNC_8 (int const) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

symbolEncodingType_e
FUNC_9(
        FSE_repeat* VAR_12, unsigned const* VAR_13, unsigned const VAR_14,
        size_t const VAR_15, size_t VAR_16, unsigned const VAR_17,
        FSE_CTable const* VAR_18,
        short const* VAR_19, U32 VAR_20,
        ZSTD_defaultPolicy_e const VAR_21,
        ZSTD_strategy const VAR_22)
{
    FUNC_3(VAR_5 == 0 && VAR_4 != 0);
    if (VAR_15 == VAR_16) {
        *VAR_12 = VAR_1;
        if (VAR_21 && VAR_16 <= 2) {




            FUNC_0(5, "Selected set_basic");
            return VAR_8;
        }
        FUNC_0(5, "Selected set_rle");
        return VAR_11;
    }
    if (VAR_22 < VAR_6) {
        if (VAR_21) {
            size_t const VAR_23 = 1000;
            size_t const VAR_24 = 10 - VAR_22;
            size_t const VAR_25 = 3;
            size_t const VAR_26 = (((size_t)1 << VAR_20) * VAR_24) >> VAR_25;
            FUNC_8(VAR_20 >= 5 && VAR_20 <= 6);
            FUNC_8(VAR_24 <= 9 && VAR_24 >= 7);
            if ( (*VAR_12 == VAR_2)
              && (VAR_16 < VAR_23) ) {
                FUNC_0(5, "Selected set_repeat");
                return VAR_10;
            }
            if ( (VAR_16 < VAR_26)
              || (VAR_15 < (VAR_16 >> (VAR_20-1))) ) {
                FUNC_0(5, "Selected set_basic");






                *VAR_12 = VAR_1;
                return VAR_8;
            }
        }
    } else {
        size_t const VAR_27 = VAR_21 ? FUNC_4(VAR_19, VAR_20, VAR_13, VAR_14) : FUNC_1(VAR_3);
        size_t const VAR_28 = *VAR_12 != VAR_1 ? FUNC_6(VAR_18, VAR_13, VAR_14) : FUNC_1(VAR_3);
        size_t const VAR_29 = FUNC_2(VAR_13, VAR_14, VAR_16, VAR_17);
        size_t const VAR_30 = (VAR_29 << 3) + FUNC_5(VAR_13, VAR_14, VAR_16);

        if (VAR_21) {
            FUNC_8(!FUNC_7(VAR_27));
            FUNC_8(!(*VAR_12 == VAR_2 && FUNC_7(VAR_28)));
        }
        FUNC_8(!FUNC_7(VAR_29));
        FUNC_8(VAR_30 < FUNC_1(VAR_7));
        FUNC_0(5, "Estimated bit costs: basic=%u\trepeat=%u\tcompressed=%u",
                    (unsigned)VAR_27, (unsigned)VAR_28, (unsigned)VAR_30);
        if (VAR_27 <= VAR_28 && VAR_27 <= VAR_30) {
            FUNC_0(5, "Selected set_basic");
            FUNC_8(VAR_21);
            *VAR_12 = VAR_1;
            return VAR_8;
        }
        if (VAR_28 <= VAR_30) {
            FUNC_0(5, "Selected set_repeat");
            FUNC_8(!FUNC_7(VAR_28));
            return VAR_10;
        }
        FUNC_8(VAR_30 < VAR_27 && VAR_30 < VAR_28);
    }
    FUNC_0(5, "Selected set_compressed");
    *VAR_12 = VAR_0;
    return VAR_9;
}
