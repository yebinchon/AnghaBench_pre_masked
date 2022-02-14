
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ before; } ;
struct TYPE_3__ {int line; void* printing_a_match; void* in_a_match; scalar_t__ last_printed_match; int lines_since_last_match; scalar_t__ line_preceding_current_match_offset; scalar_t__ prev_line_offset; scalar_t__ last_prev_line; scalar_t__ prev_line; int * context_prev_lines; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,scalar_t__) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_1(void) {
    if (VAR_3.context_prev_lines != ((void*)0)) {
        return;
    }
    VAR_3.context_prev_lines = FUNC_0(sizeof(char *), (VAR_2.before + 1));
    VAR_3.line = 1;
    VAR_3.prev_line = 0;
    VAR_3.last_prev_line = 0;
    VAR_3.prev_line_offset = 0;
    VAR_3.line_preceding_current_match_offset = 0;
    VAR_3.lines_since_last_match = VAR_1;
    VAR_3.last_printed_match = 0;
    VAR_3.in_a_match = VAR_0;
    VAR_3.printing_a_match = VAR_0;
}
