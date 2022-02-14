
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ blockType; } ;
typedef TYPE_1__ blockProperties_t ;
typedef int BYTE ;


 size_t const FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (size_t*,unsigned long long*,size_t const) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_3 (void const*,size_t) ;
 size_t VAR_3 ;
 size_t FUNC_4 (int const*,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_5 (size_t const) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_6(const void *VAR_7, size_t VAR_8, size_t* VAR_9, unsigned long long* VAR_10)
{
    const BYTE* VAR_11 = (const BYTE*)VAR_7;
    size_t VAR_12 = VAR_8;
    size_t VAR_13 = 0;


    if (VAR_8 < VAR_3+VAR_2) {
        FUNC_2(VAR_9, VAR_10, FUNC_0(VAR_6));
        return;
    }


    { size_t const VAR_14 = FUNC_3(VAR_7, VAR_8);
        if (FUNC_5(VAR_14)) {
            FUNC_2(VAR_9, VAR_10, VAR_14);
            return;
        }
        if (FUNC_1(VAR_7) != VAR_1) {
            FUNC_2(VAR_9, VAR_10, FUNC_0(VAR_5));
            return;
        }
        if (VAR_8 < VAR_14+VAR_2) {
            FUNC_2(VAR_9, VAR_10, FUNC_0(VAR_6));
            return;
        }
        VAR_11 += VAR_14; VAR_12 -= VAR_14;
    }


    while (1) {
        blockProperties_t VAR_15;
        size_t const VAR_16 = FUNC_4(VAR_11, VAR_12, &VAR_15);
        if (FUNC_5(VAR_16)) {
            FUNC_2(VAR_9, VAR_10, VAR_16);
            return;
        }

        VAR_11 += VAR_2;
        VAR_12 -= VAR_2;

        if (VAR_15.blockType == VAR_4) break;

        if (VAR_16 > VAR_12) {
            FUNC_2(VAR_9, VAR_10, FUNC_0(VAR_6));
            return;
        }

        VAR_11 += VAR_16;
        VAR_12 -= VAR_16;
        VAR_13++;
    }

    *VAR_9 = VAR_11 - (const BYTE*)VAR_7;
    *VAR_10 = VAR_13 * VAR_0;
}
