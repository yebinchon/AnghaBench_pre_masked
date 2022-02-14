
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bit_offset; scalar_t__ len; int ptr; } ;
typedef TYPE_1__ istream_t ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(istream_t *const VAR_0) {
    if (VAR_0->bit_offset != 0) {
        if (VAR_0->len == 0) {
            FUNC_0();
        }
        VAR_0->ptr++;
        VAR_0->len--;
        VAR_0->bit_offset = 0;
    }
}
