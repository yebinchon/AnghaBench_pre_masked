
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {unsigned int i_anc_size; unsigned int i_active_size; int i_line_buffer; int const* p_line_buffer; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static const uint8_t *FUNC_1( demux_t *VAR_0, const uint8_t **VAR_1,
                               const uint8_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_0->p_sys;
    unsigned int VAR_4 = VAR_3->i_anc_size + VAR_3->i_active_size;
    const uint8_t *VAR_5;

    if ( VAR_3->i_line_buffer )
    {
        unsigned int VAR_6 = VAR_4 - VAR_3->i_line_buffer;
        FUNC_0( VAR_3->p_line_buffer + VAR_3->i_line_buffer,
                                   *VAR_1, VAR_6 );
        *VAR_1 += VAR_6;
        VAR_3->i_line_buffer = 0;

        return VAR_3->p_line_buffer;
    }

    if ( VAR_2 - *VAR_1 < (int)VAR_4 )
    {
        FUNC_0( VAR_3->p_line_buffer, *VAR_1,
                                   VAR_2 - *VAR_1 );
        VAR_3->i_line_buffer = VAR_2 - *VAR_1;
        return ((void*)0);
    }

    VAR_5 = *VAR_1;
    *VAR_1 += VAR_4;
    return VAR_5;
}
