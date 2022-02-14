
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int winnerInfo_t ;
typedef int paramValues_t ;
typedef int contexts_t ;
struct TYPE_4__ {int srcSize; } ;
typedef TYPE_1__ buffers_t ;
typedef int UTIL_time_t ;
typedef int FILE ;
typedef int BYTE ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,TYPE_1__ const,int const) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(FILE* VAR_4,
                       winnerInfo_t* VAR_5,
                       paramValues_t VAR_6,
                       const buffers_t VAR_7, const contexts_t VAR_8)
{
    int VAR_9 = 0;
    UTIL_time_t const VAR_10 = FUNC_5();

    while (FUNC_4(VAR_10) < VAR_1) {
        if (VAR_9++ > VAR_0) break;

        do {
            int VAR_11;
            for(VAR_11 = 0; VAR_11 < 4; VAR_11++) {
                FUNC_7(FUNC_2(&VAR_2) % (VAR_3 + 1),
                              ((FUNC_2(&VAR_2) & 1) << 1) - 1,
                              &VAR_6);
            }
        } while (!FUNC_6(VAR_6));


        if (FUNC_2(&VAR_2) & ((1 << *FUNC_3(VAR_6))-1))
            continue;


        { BYTE* const VAR_12 = FUNC_3(VAR_6);
            (*VAR_12)++;
        }
        if (!FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8)) continue;


        FUNC_0(VAR_4, VAR_5, VAR_7.srcSize);
        FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }

}
