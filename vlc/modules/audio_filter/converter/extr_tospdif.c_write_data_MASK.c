
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ i_format; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
struct TYPE_11__ {TYPE_2__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_12__ {size_t i_out_offset; TYPE_3__* p_out_buf; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_10__ {int* p_buffer; size_t i_buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int const*,size_t) ;
 int FUNC_2 (TYPE_4__*,int*,int const) ;
 int FUNC_3 (int const*,int*,size_t) ;

__attribute__((used)) static void FUNC_4( filter_t *VAR_1, const void *VAR_2, size_t VAR_3,
                        bool VAR_4 )
{
    filter_sys_t *VAR_5 = VAR_1->p_sys;
    FUNC_0( VAR_5->p_out_buf != ((void*)0) );

    bool VAR_6 =
        VAR_1->fmt_out.audio.i_format == VAR_0;
    uint8_t *VAR_7 = &VAR_5->p_out_buf->p_buffer[VAR_5->i_out_offset];
    const uint8_t *VAR_8 = VAR_2;

    FUNC_0( VAR_5->p_out_buf->i_buffer - VAR_5->i_out_offset >= VAR_3 );

    if( VAR_4 != VAR_6 )
        FUNC_3( VAR_8, VAR_7, VAR_3 & ~1 );
    else
        FUNC_1( VAR_7, VAR_8, VAR_3 & ~1 );
    VAR_5->i_out_offset += ( VAR_3 & ~1 );

    if( VAR_3 & 1 )
    {
        FUNC_0( VAR_5->p_out_buf->i_buffer - VAR_5->i_out_offset >= 2 );
        VAR_7 += ( VAR_3 & ~1 );
        FUNC_2( VAR_1, VAR_7, VAR_8[VAR_3 - 1] << 8 );
        VAR_5->i_out_offset += 2;
    }
}
