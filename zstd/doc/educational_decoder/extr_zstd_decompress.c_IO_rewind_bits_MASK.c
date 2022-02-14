
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bit_offset; int len; int ptr; } ;
typedef TYPE_1__ istream_t ;
typedef int i64 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(istream_t *const VAR_0, int VAR_1) {
    if (VAR_1 < 0) {
        FUNC_0("Attempting to rewind stream by a negative number of bits");
    }


    const int VAR_2 = VAR_0->bit_offset - VAR_1;


    const i64 VAR_3 = -(VAR_2 - 7) / 8;

    VAR_0->ptr -= VAR_3;
    VAR_0->len += VAR_3;


    VAR_0->bit_offset = ((VAR_2 % 8) + 8) % 8;
}
