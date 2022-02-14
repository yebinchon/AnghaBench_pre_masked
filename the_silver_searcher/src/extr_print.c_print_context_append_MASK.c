
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int before; } ;
struct TYPE_3__ {size_t last_prev_line; int ** context_prev_lines; } ;


 int * FUNC_0 (char const*,size_t) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_2(const char *VAR_2, size_t VAR_3) {
    if (VAR_0.before == 0) {
        return;
    }
    if (VAR_1.context_prev_lines[VAR_1.last_prev_line] != ((void*)0)) {
        FUNC_1(VAR_1.context_prev_lines[VAR_1.last_prev_line]);
    }
    VAR_1.context_prev_lines[VAR_1.last_prev_line] = FUNC_0(VAR_2, VAR_3);
    VAR_1.last_prev_line = (VAR_1.last_prev_line + 1) % VAR_0.before;
}
