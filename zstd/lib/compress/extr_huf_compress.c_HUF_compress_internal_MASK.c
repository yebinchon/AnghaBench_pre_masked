
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int U32 ;
struct TYPE_2__ {int * CTable; int count; int nodeTable; } ;
typedef scalar_t__ HUF_repeat ;
typedef int HUF_nbStreams_e ;
typedef TYPE_1__ HUF_compress_tables_t ;
typedef int HUF_CElt ;
typedef int BYTE ;


 int FUNC_0 (size_t const) ;
 int FUNC_1 (size_t const,int ) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,unsigned int*,int const*,size_t,void*,size_t) ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_4 (int *,int ,unsigned int,unsigned int,int ,int) ;
 size_t FUNC_5 (int * const,int *,int * const,void const*,size_t,int ,int *,int const) ;
 size_t FUNC_6 (int *,int ,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,size_t,unsigned int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int *,int ,unsigned int) ;
 int FUNC_9 (int *,size_t,int *,unsigned int,unsigned int) ;
 size_t const VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static size_t
FUNC_12 (void* VAR_15, size_t VAR_16,
                 const void* VAR_17, size_t VAR_18,
                       unsigned VAR_19, unsigned VAR_20,
                       HUF_nbStreams_e VAR_21,
                       void* VAR_22, size_t VAR_23,
                       HUF_CElt* VAR_24, HUF_repeat* VAR_25, int VAR_26,
                 const int VAR_27)
{
    HUF_compress_tables_t* const VAR_28 = (HUF_compress_tables_t*)VAR_22;
    BYTE* const VAR_29 = (BYTE*)VAR_15;
    BYTE* const VAR_30 = VAR_29 + VAR_16;
    BYTE* VAR_31 = VAR_29;


    if (((size_t)VAR_22 & 3) != 0) return FUNC_2(VAR_0);
    if (VAR_23 < VAR_5) return FUNC_2(VAR_14);
    if (!VAR_18) return 0;
    if (!VAR_16) return 0;
    if (VAR_18 > VAR_1) return FUNC_2(VAR_12);
    if (VAR_20 > VAR_4) return FUNC_2(VAR_13);
    if (VAR_19 > VAR_2) return FUNC_2(VAR_11);
    if (!VAR_19) VAR_19 = VAR_2;
    if (!VAR_20) VAR_20 = VAR_3;


    if (VAR_26 && VAR_25 && *VAR_25 == VAR_8) {
        return FUNC_5(VAR_29, VAR_31, VAR_30,
                                           VAR_17, VAR_18,
                                           VAR_21, VAR_24, VAR_27);
    }


    { FUNC_1(VAR_10, FUNC_3 (VAR_28->count, &VAR_19, (const BYTE*)VAR_17, VAR_18, VAR_22, VAR_23) );
        if (VAR_10 == VAR_18) { *VAR_29 = ((const BYTE*)VAR_17)[0]; return 1; }
        if (VAR_10 <= (VAR_18 >> 7)+4) return 0;
    }


    if ( VAR_25
      && *VAR_25 == VAR_6
      && !FUNC_8(VAR_24, VAR_28->count, VAR_19)) {
        *VAR_25 = VAR_7;
    }

    if (VAR_26 && VAR_25 && *VAR_25 != VAR_7) {
        return FUNC_5(VAR_29, VAR_31, VAR_30,
                                           VAR_17, VAR_18,
                                           VAR_21, VAR_24, VAR_27);
    }


    VAR_20 = FUNC_7(VAR_20, VAR_18, VAR_19);
    { size_t const VAR_32 = FUNC_4(VAR_28->CTable, VAR_28->count,
                                            VAR_19, VAR_20,
                                            VAR_28->nodeTable, sizeof(VAR_28->nodeTable));
        FUNC_0(VAR_32);
        VAR_20 = (U32)VAR_32;

        FUNC_11(VAR_28->CTable + (VAR_19 + 1), 0,
               sizeof(VAR_28->CTable) - ((VAR_19 + 1) * sizeof(HUF_CElt)));
    }


    { FUNC_1(VAR_9, FUNC_9 (VAR_31, VAR_16, VAR_28->CTable, VAR_19, VAR_20) );

        if (VAR_25 && *VAR_25 != VAR_7) {
            size_t const VAR_33 = FUNC_6(VAR_24, VAR_28->count, VAR_19);
            size_t const VAR_34 = FUNC_6(VAR_28->CTable, VAR_28->count, VAR_19);
            if (VAR_33 <= VAR_9 + VAR_34 || VAR_9 + 12 >= VAR_18) {
                return FUNC_5(VAR_29, VAR_31, VAR_30,
                                                   VAR_17, VAR_18,
                                                   VAR_21, VAR_24, VAR_27);
        } }


        if (VAR_9 + 12ul >= VAR_18) { return 0; }
        VAR_31 += VAR_9;
        if (VAR_25) { *VAR_25 = VAR_7; }
        if (VAR_24)
            FUNC_10(VAR_24, VAR_28->CTable, sizeof(VAR_28->CTable));
    }
    return FUNC_5(VAR_29, VAR_31, VAR_30,
                                       VAR_17, VAR_18,
                                       VAR_21, VAR_28->CTable, VAR_27);
}
