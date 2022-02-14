
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ genType_e ;
struct TYPE_4__ {int * srcStart; scalar_t__ src; int * dataStart; scalar_t__ data; } ;
typedef TYPE_1__ frame_t ;
typedef int dictInfo ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (size_t const,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const,int ,size_t const,int *) ;
 int FUNC_6 (int ,TYPE_1__*,int const) ;
 int FUNC_7 (int ,TYPE_1__*,int const) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int,size_t const,int * const,int const) ;
 int * FUNC_9 (size_t const) ;
 int FUNC_10 (int *,size_t const,char const* const) ;
 int FUNC_11 (char*,int,char*,char const* const,...) ;

__attribute__((used)) static int FUNC_12(U32 VAR_2, unsigned VAR_3, const char* const VAR_4,
                                  const char* const VAR_5, const size_t VAR_6,
                                  genType_e VAR_7)
{
    char VAR_8[VAR_0];
    BYTE* VAR_9;
    U32 const VAR_10 = FUNC_3(&VAR_2);
    int VAR_11 = 0;

    if (FUNC_11(VAR_8, VAR_0, "%s/dictionary", VAR_4) + 1 > VAR_0) {
        FUNC_0("Error: path too long\n");
        return 1;
    }


    VAR_9 = FUNC_9(VAR_6);
    if (VAR_9 == ((void*)0)) {
        FUNC_0("Error: could not allocate space for full dictionary.\n");
        return 1;
    }


    { int const VAR_12 = FUNC_5(VAR_10, VAR_2, VAR_6, VAR_9);
        if (VAR_12 != 0) {
            VAR_11 = VAR_12;
            goto dictCleanup;
        }
    }


    if (VAR_3 != 0) {
        if (FUNC_11(VAR_8, VAR_0, "%s/dictionary", VAR_4) + 1 > VAR_0) {
            FUNC_0("Error: dictionary path too long\n");
            VAR_11 = 1;
            goto dictCleanup;
        }
        FUNC_10(VAR_9, VAR_6, VAR_8);
    }
    else {
        FUNC_10(VAR_9, VAR_6, "dictionary");
    }


    { unsigned VAR_13;
        for (VAR_13 = 0; VAR_13 < FUNC_2(VAR_3, 1); VAR_13++) {
            frame_t VAR_14;
            FUNC_1("\r%u/%u        ", VAR_13, VAR_3);
            {
                size_t const VAR_15 = FUNC_2(VAR_6/4, 256);
                size_t const VAR_16 = VAR_6-VAR_15;
                BYTE* const VAR_17 = VAR_9+VAR_15;
                dictInfo const VAR_18 = FUNC_8(1, VAR_16, VAR_17, VAR_10);
                if (VAR_7 == VAR_1) {
                    VAR_2 = FUNC_7(VAR_2, &VAR_14, VAR_18);
                } else {
                    VAR_2 = FUNC_6(VAR_2, &VAR_14, VAR_18);
                }
            }

            if (VAR_3 != 0) {
                if (FUNC_11(VAR_8, VAR_0, "%s/z%06u.zst", VAR_4, VAR_13) + 1 > VAR_0) {
                    FUNC_0("Error: path too long\n");
                    VAR_11 = 1;
                    goto dictCleanup;
                }
                FUNC_10(VAR_14.dataStart, (BYTE*)VAR_14.data - (BYTE*)VAR_14.dataStart, VAR_8);

                if (VAR_5) {
                    if (FUNC_11(VAR_8, VAR_0, "%s/z%06u", VAR_5, VAR_13) + 1 > VAR_0) {
                        FUNC_0("Error: path too long\n");
                        VAR_11 = 1;
                        goto dictCleanup;
                    }
                    FUNC_10(VAR_14.srcStart, (BYTE*)VAR_14.src - (BYTE*)VAR_14.srcStart, VAR_8);
                }
            }
            else {
                FUNC_10(VAR_14.dataStart, (BYTE*)VAR_14.data - (BYTE*)VAR_14.dataStart, VAR_4);
                if (VAR_5) {
                    FUNC_10(VAR_14.srcStart, (BYTE*)VAR_14.src - (BYTE*)VAR_14.srcStart, VAR_5);
                }
            }
        }
    }

dictCleanup:
    FUNC_4(VAR_9);
    return VAR_11;
}
