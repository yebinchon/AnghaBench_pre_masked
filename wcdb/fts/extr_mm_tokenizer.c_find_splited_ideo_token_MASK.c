
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ideo_state; int ideo_start; int ideo_end; int * in_buffer; } ;
typedef TYPE_1__ mm_cursor_t ;
typedef int int32_t ;
typedef int UChar32 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(mm_cursor_t *VAR_0, int32_t *VAR_1, int32_t *VAR_2)
{
    int32_t VAR_3, VAR_4;
    UChar32 VAR_5;

    if (VAR_0->ideo_state < 0)
        return 0;

    if (VAR_0->ideo_start == VAR_0->ideo_end) {
        VAR_0->ideo_state = -1;
        return 0;
    }


    VAR_3 = VAR_0->ideo_start;
    VAR_4 = VAR_3 + 1;
    VAR_5 = VAR_0->in_buffer[VAR_3];
    if (FUNC_0(VAR_5) && VAR_0->ideo_end - VAR_3 >= 2)
        VAR_4++;

    *VAR_1 = VAR_3;
    *VAR_2 = VAR_4;
    VAR_0->ideo_start = VAR_4;
    return 1;
}
