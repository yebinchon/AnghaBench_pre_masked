
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int winners ;
typedef int winnerInfo_t ;
typedef void* paramValues_t ;
struct TYPE_13__ {int dictSize; } ;
typedef TYPE_1__ contexts_t ;
struct TYPE_14__ {int srcSize; int maxBlockSize; } ;
typedef TYPE_2__ buffers_t ;
typedef int UTIL_time_t ;
struct TYPE_15__ {int cSpeed; } ;
typedef int FILE ;
typedef TYPE_3__ BMK_benchResult_t ;


 int FUNC_0 (TYPE_3__*,TYPE_2__ const,TYPE_1__ const,void* const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int * const,int *,int ) ;
 int FUNC_3 (int *,void*,TYPE_2__ const,TYPE_1__ const) ;
 int FUNC_4 (int * const,int *,TYPE_2__ const,TYPE_1__ const) ;
 scalar_t__ FUNC_5 (int const) ;
 int FUNC_6 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int * const) ;
 int * FUNC_14 (char const* const,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_15 (int *,int ,int) ;

__attribute__((used)) static void FUNC_16(const buffers_t VAR_6, const contexts_t VAR_7)
{
    paramValues_t VAR_8;
    winnerInfo_t VAR_9[VAR_1+1];
    const char* const VAR_10 = "grillResults.txt";
    FILE* const VAR_11 = FUNC_14(VAR_10, "w");


    FUNC_10(VAR_3==0);
    FUNC_15(VAR_9, 0, sizeof(VAR_9));
    if (VAR_11==((void*)0)) { FUNC_6("error opening %s \n", VAR_10); FUNC_12(1); }

    if (VAR_4) {
        FUNC_1(VAR_4 * VAR_0);
    } else {

        paramValues_t const VAR_12 = FUNC_11(FUNC_8(1, VAR_6.maxBlockSize, VAR_7.dictSize));
        BMK_benchResult_t VAR_13;
        FUNC_0(&VAR_13, VAR_6, VAR_7, VAR_12);
        FUNC_1((int)((VAR_13.cSpeed * 31) / 32));
    }


    { const int VAR_14 = VAR_2 ? 1 : FUNC_9();
        int VAR_15;
        for (VAR_15=0; VAR_15<=VAR_14; VAR_15++) {
            VAR_8 = FUNC_11(FUNC_8(VAR_15, VAR_6.maxBlockSize, 0));
            FUNC_3(VAR_9, VAR_8, VAR_6, VAR_7);
    } }
    FUNC_2(VAR_11, VAR_9, VAR_6.srcSize);


    { const UTIL_time_t VAR_16 = FUNC_7();
        do {
            FUNC_4(VAR_11, VAR_9, VAR_6, VAR_7);
        } while (FUNC_5(VAR_16) < VAR_5);
    }


    FUNC_2(VAR_11, VAR_9, VAR_6.srcSize);
    FUNC_6("grillParams operations completed \n");


    FUNC_13(VAR_11);
}
