
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_tokenizer_cursor ;
struct TYPE_3__ {struct TYPE_3__* out_buffer; int iter; } ;
typedef TYPE_1__ mm_cursor_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_tokenizer_cursor *VAR_1)
{
    mm_cursor_t *VAR_2 = (mm_cursor_t *) VAR_1;
    FUNC_1(VAR_2->iter);
    if (VAR_2->out_buffer)
        FUNC_0(VAR_2->out_buffer);
    FUNC_0(VAR_2);
    return VAR_0;
}
