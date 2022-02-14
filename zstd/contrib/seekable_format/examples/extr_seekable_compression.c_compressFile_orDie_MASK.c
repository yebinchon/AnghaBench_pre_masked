
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ZSTD_seekable_CStream ;
struct TYPE_6__ {void* const member_0; size_t const member_1; int pos; int member_2; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_7__ {void* const member_0; size_t member_1; scalar_t__ pos; scalar_t__ size; int member_2; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int FILE ;


 size_t FUNC_0 () ;
 size_t FUNC_1 () ;
 char* FUNC_2 (size_t const) ;
 scalar_t__ FUNC_3 (size_t const) ;
 size_t FUNC_4 (int * const,TYPE_1__*,TYPE_2__*) ;
 int * FUNC_5 () ;
 size_t FUNC_6 (int * const,TYPE_1__*) ;
 int FUNC_7 (int * const) ;
 size_t FUNC_8 (int * const,int,int,unsigned int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int * const) ;
 int * FUNC_11 (char const*,char*) ;
 int FUNC_12 (int ,char*,...) ;
 size_t FUNC_13 (void* const,size_t,int * const) ;
 int FUNC_14 (void* const) ;
 int FUNC_15 (void* const,int ,int * const) ;
 void* FUNC_16 (size_t const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_17(const char* VAR_1, const char* VAR_2, int VAR_3, unsigned VAR_4)
{
    FILE* const VAR_5 = FUNC_11(VAR_1, "rb");
    FILE* const VAR_6 = FUNC_11(VAR_2, "wb");
    size_t const VAR_7 = FUNC_0();
    void* const VAR_8 = FUNC_16(VAR_7);
    size_t const VAR_9 = FUNC_1();
    void* const VAR_10 = FUNC_16(VAR_9);

    ZSTD_seekable_CStream* const VAR_11 = FUNC_5();
    if (VAR_11==((void*)0)) { FUNC_12(VAR_0, "ZSTD_seekable_createCStream() error \n"); FUNC_9(10); }
    size_t const VAR_12 = FUNC_8(VAR_11, VAR_3, 1, VAR_4);
    if (FUNC_3(VAR_12)) { FUNC_12(VAR_0, "ZSTD_seekable_initCStream() error : %s \n", FUNC_2(VAR_12)); FUNC_9(11); }

    size_t VAR_13, VAR_14 = VAR_7;
    while( (VAR_13 = FUNC_13(VAR_8, VAR_14, VAR_5)) ) {
        ZSTD_inBuffer VAR_15 = { VAR_8, VAR_13, 0 };
        while (VAR_15.pos < VAR_15.size) {
            ZSTD_outBuffer VAR_16 = { VAR_10, VAR_9, 0 };
            VAR_14 = FUNC_4(VAR_11, &VAR_16 , &VAR_15);
            if (FUNC_3(VAR_14)) { FUNC_12(VAR_0, "ZSTD_seekable_compressStream() error : %s \n", FUNC_2(VAR_14)); FUNC_9(12); }
            if (VAR_14 > VAR_7) VAR_14 = VAR_7;
            FUNC_15(VAR_10, VAR_16.pos, VAR_6);
        }
    }

    while (1) {
        ZSTD_outBuffer VAR_17 = { VAR_10, VAR_9, 0 };
        size_t const VAR_18 = FUNC_6(VAR_11, &VAR_17);
        if (FUNC_3(VAR_18)) { FUNC_12(VAR_0, "ZSTD_seekable_endStream() error : %s \n", FUNC_2(VAR_18)); FUNC_9(13); }
        FUNC_15(VAR_10, VAR_17.pos, VAR_6);
        if (!VAR_18) break;
    }

    FUNC_7(VAR_11);
    FUNC_10(VAR_6);
    FUNC_10(VAR_5);
    FUNC_14(VAR_8);
    FUNC_14(VAR_10);
}
