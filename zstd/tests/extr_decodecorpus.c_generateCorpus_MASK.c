
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ genType_e ;
struct TYPE_4__ {scalar_t__ srcStart; scalar_t__ src; scalar_t__ dataStart; scalar_t__ data; } ;
typedef TYPE_1__ frame_t ;
typedef int dictInfo ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*,int const) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*,int const) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (scalar_t__,int,char*) ;
 int FUNC_6 (char*,int,char*,char const* const,unsigned int) ;

__attribute__((used)) static int FUNC_7(U32 VAR_2, unsigned VAR_3, const char* const VAR_4,
                          const char* const VAR_5, genType_e VAR_6)
{
    char VAR_7[VAR_0];
    unsigned VAR_8;

    FUNC_0("seed: %u\n", (unsigned)VAR_2);

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        frame_t VAR_9;

        FUNC_1("\r%u/%u        ", VAR_8, VAR_3);

        { dictInfo const VAR_10 = FUNC_4(0, 0, ((void*)0), 0);
            if (VAR_6 == VAR_1) {
                VAR_2 = FUNC_3(VAR_2, &VAR_9, VAR_10);
            } else {
                VAR_2 = FUNC_2(VAR_2, &VAR_9, VAR_10);
            }
        }

        if (FUNC_6(VAR_7, VAR_0, "%s/z%06u.zst", VAR_4, VAR_8) + 1 > VAR_0) {
            FUNC_0("Error: path too long\n");
            return 1;
        }
        FUNC_5(VAR_9.dataStart, (BYTE*)VAR_9.data - (BYTE*)VAR_9.dataStart, VAR_7);

        if (VAR_5) {
            if (FUNC_6(VAR_7, VAR_0, "%s/z%06u", VAR_5, VAR_8) + 1 > VAR_0) {
                FUNC_0("Error: path too long\n");
                return 1;
            }
            FUNC_5(VAR_9.srcStart, (BYTE*)VAR_9.src - (BYTE*)VAR_9.srcStart, VAR_7);
        }
    }

    FUNC_0("\r%u/%u      \n", VAR_8, VAR_3);

    return 0;
}
