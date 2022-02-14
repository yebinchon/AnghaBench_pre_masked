
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_buffer; size_t i_payload; int * p_buffer; int * p_payload; int i_type; } ;
typedef TYPE_1__ mp4_box_iterator_t ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int const,int const,int const,int const) ;

__attribute__((used)) static bool FUNC_2( mp4_box_iterator_t *VAR_0 )
{
    while( VAR_0->i_buffer > 8 )
    {
        const uint8_t *VAR_1 = VAR_0->p_buffer;
        const size_t VAR_2 = FUNC_0( VAR_1 );
        VAR_0->i_type = FUNC_1(VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7]);
        if( VAR_2 >= 8 && VAR_2 <= VAR_0->i_buffer )
        {
            VAR_0->p_payload = &VAR_0->p_buffer[8];
            VAR_0->i_payload = VAR_2 - 8;

            VAR_0->p_buffer += VAR_2;
            VAR_0->i_buffer -= VAR_2;
            return 1;
        }
        else break;
    }
    return 0;
}
