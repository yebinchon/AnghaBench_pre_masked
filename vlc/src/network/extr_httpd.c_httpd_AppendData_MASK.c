
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_buffer_pos; int i_buffer_size; int * p_buffer; } ;
typedef TYPE_1__ httpd_stream_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(httpd_stream_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->i_buffer_pos % VAR_0->i_buffer_size;
    int VAR_4 = VAR_2;
    while (VAR_4 > 0) {
        int VAR_5 = FUNC_0(VAR_4, VAR_0->i_buffer_size - VAR_3);


        FUNC_1(&VAR_0->p_buffer[VAR_3], VAR_1, VAR_5);

        VAR_3 = (VAR_3 + VAR_5) % VAR_0->i_buffer_size;
        VAR_4 -= VAR_5;
        VAR_1 += VAR_5;
    }

    VAR_0->i_buffer_pos += VAR_2;
}
