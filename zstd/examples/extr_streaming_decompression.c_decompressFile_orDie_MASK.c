
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* const member_0; size_t const member_1; int pos; int member_2; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {void* const member_0; size_t member_1; scalar_t__ pos; scalar_t__ size; int member_2; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_DCtx ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (size_t const) ;
 size_t FUNC_2 () ;
 size_t FUNC_3 () ;
 int * FUNC_4 () ;
 size_t FUNC_5 (int * const,TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int * const) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int * const) ;
 int * FUNC_9 (char const*,char*) ;
 int FUNC_10 (int ,char*,...) ;
 size_t FUNC_11 (void* const,size_t const,int * const) ;
 int FUNC_12 (void* const) ;
 int FUNC_13 (void* const,int ,int * const) ;
 void* FUNC_14 (size_t const) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_15(const char* VAR_2)
{
    FILE* const VAR_3 = FUNC_9(VAR_2, "rb");
    size_t const VAR_4 = FUNC_2();
    void* const VAR_5 = FUNC_14(VAR_4);
    FILE* const VAR_6 = VAR_1;
    size_t const VAR_7 = FUNC_3();
    void* const VAR_8 = FUNC_14(VAR_7);

    ZSTD_DCtx* const VAR_9 = FUNC_4();
    FUNC_0(VAR_9 != ((void*)0), "ZSTD_createDCtx() failed!");







    size_t const VAR_10 = VAR_4;
    size_t VAR_11;
    size_t VAR_12 = 0;
    int VAR_13 = 1;
    while ( (VAR_11 = FUNC_11(VAR_5, VAR_10, VAR_3)) ) {
        VAR_13 = 0;
        ZSTD_inBuffer VAR_14 = { VAR_5, VAR_11, 0 };





        while (VAR_14.pos < VAR_14.size) {
            ZSTD_outBuffer VAR_15 = { VAR_8, VAR_7, 0 };







            size_t const VAR_16 = FUNC_5(VAR_9, &VAR_15 , &VAR_14);
            FUNC_1(VAR_16);
            FUNC_13(VAR_8, VAR_15.pos, VAR_6);
            VAR_12 = VAR_16;
        }
    }

    if (VAR_13) {
        FUNC_10(VAR_0, "input is empty\n");
        FUNC_7(1);
    }

    if (VAR_12 != 0) {




        FUNC_10(VAR_0, "EOF before end of stream: %zu\n", VAR_12);
        FUNC_7(1);
    }

    FUNC_6(VAR_9);
    FUNC_8(VAR_3);
    FUNC_8(VAR_6);
    FUNC_12(VAR_5);
    FUNC_12(VAR_8);
}
