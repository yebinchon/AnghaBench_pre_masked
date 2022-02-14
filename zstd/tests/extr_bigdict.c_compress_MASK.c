
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* member_0; size_t member_1; scalar_t__ pos; int member_2; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_8__ {void const* member_0; size_t member_1; scalar_t__ pos; scalar_t__ size; int member_2; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_EndDirective ;
typedef int ZSTD_DCtx ;
typedef int ZSTD_CCtx ;


 size_t FUNC_0 (int *,TYPE_1__*,TYPE_2__*,int ) ;
 size_t FUNC_1 (int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(ZSTD_CCtx* VAR_2, ZSTD_DCtx* VAR_3,
         void* VAR_4, size_t VAR_5,
         void const* VAR_6, size_t VAR_7,
         void* VAR_8, ZSTD_EndDirective VAR_9)
{
    ZSTD_inBuffer VAR_10 = {VAR_6, VAR_7, 0};
    ZSTD_outBuffer VAR_11 = {VAR_4, VAR_5, 0};
    int VAR_12 = 0;

    while (!VAR_12 && (VAR_10.pos < VAR_10.size || VAR_11.pos > 0)) {
        size_t VAR_13;
        VAR_11.pos = 0;
        VAR_13 = FUNC_0(VAR_2, &VAR_11, &VAR_10, VAR_9);
        if (FUNC_3(VAR_13))
            return 1;
        if (VAR_9 == VAR_0 && VAR_13 == 0)
            VAR_12 = 1;
        {
            ZSTD_inBuffer VAR_14 = {VAR_4, VAR_11.pos, 0};
            ZSTD_outBuffer VAR_15 = {VAR_8, VAR_7, 0};
            VAR_13 = 1;
            while (VAR_14.pos < VAR_14.size || VAR_15.pos > 0) {
                VAR_15.pos = 0;
                VAR_13 = FUNC_1(VAR_3, &VAR_15, &VAR_14);
                if (FUNC_3(VAR_13)) {
                    FUNC_4(VAR_1, "Decompression error: %s\n", FUNC_2(VAR_13));
                    return 1;
                }
                if (VAR_13 == 0)
                    break;
            }
            if (VAR_12 && VAR_13 != 0) {
                FUNC_4(VAR_1, "Frame not finished!\n");
                return 1;
            }
        }
    }

    return 0;
}
