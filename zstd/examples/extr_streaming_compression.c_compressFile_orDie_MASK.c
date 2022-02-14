
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
typedef int ZSTD_EndDirective ;
typedef int ZSTD_CCtx ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (size_t const) ;
 size_t const FUNC_2 (int * const,int ,int) ;
 size_t FUNC_3 () ;
 size_t FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_5 (int * const,TYPE_1__*,TYPE_2__*,int const) ;
 int * FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int * const) ;
 int FUNC_8 (int * const) ;
 int * FUNC_9 (char const*,char*) ;
 size_t FUNC_10 (void* const,size_t const,int * const) ;
 int FUNC_11 (void* const) ;
 int FUNC_12 (void* const,int ,int * const) ;
 void* FUNC_13 (size_t const) ;

__attribute__((used)) static void FUNC_14(const char* VAR_4, const char* VAR_5, int VAR_6)
{

    FILE* const VAR_7 = FUNC_9(VAR_4, "rb");
    FILE* const VAR_8 = FUNC_9(VAR_5, "wb");




    size_t const VAR_9 = FUNC_3();
    void* const VAR_10 = FUNC_13(VAR_9);
    size_t const VAR_11 = FUNC_4();
    void* const VAR_12 = FUNC_13(VAR_11);


    ZSTD_CCtx* const VAR_13 = FUNC_6();
    FUNC_0(VAR_13 != ((void*)0), "ZSTD_createCCtx() failed!");




    FUNC_1( FUNC_2(VAR_13, VAR_1, VAR_6) );
    FUNC_1( FUNC_2(VAR_13, VAR_0, 1) );




    size_t const VAR_14 = VAR_9;
    for (;;) {
        size_t VAR_15 = FUNC_10(VAR_10, VAR_14, VAR_7);






        int const VAR_16 = (VAR_15 < VAR_14);
        ZSTD_EndDirective const VAR_17 = VAR_16 ? VAR_3 : VAR_2;




        ZSTD_inBuffer VAR_18 = { VAR_10, VAR_15, 0 };
        int VAR_19;
        do {



            ZSTD_outBuffer VAR_20 = { VAR_12, VAR_11, 0 };
            size_t const VAR_21 = FUNC_5(VAR_13, &VAR_20 , &VAR_18, VAR_17);
            FUNC_1(VAR_21);
            FUNC_12(VAR_12, VAR_20.pos, VAR_8);




            VAR_19 = VAR_16 ? (VAR_21 == 0) : (VAR_18.pos == VAR_18.size);
        } while (!VAR_19);
        FUNC_0(VAR_18.pos == VAR_18.size,
              "Impossible: zstd only returns 0 when the input is completely consumed!");

        if (VAR_16) {
            break;
        }
    }

    FUNC_7(VAR_13);
    FUNC_8(VAR_8);
    FUNC_8(VAR_7);
    FUNC_11(VAR_10);
    FUNC_11(VAR_12);
}
