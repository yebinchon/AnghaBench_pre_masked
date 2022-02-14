
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_16__ {int i_frame_count; } ;
struct TYPE_18__ {scalar_t__ i_out_offset; TYPE_2__ truehd; TYPE_1__* p_out_buf; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_19__ {int i_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_15__ {scalar_t__ i_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_3__*,char const*,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_5__*,int,int) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_5( filter_t *VAR_6, block_t *VAR_7 )
{


    filter_sys_t *VAR_8 = VAR_6->p_sys;

    if( !VAR_8->p_out_buf
     && FUNC_3( VAR_6, VAR_7, 61440, 61440 / 16 ) )
        return VAR_1;

    int VAR_9 = 0;
    if( VAR_8->truehd.i_frame_count == 0 )
    {
        static const char VAR_10[20] = {
            0x07, 0x9E, 0x00, 0x03, 0x84, 0x01, 0x01, 0x01, 0x80, 0x00,
            0x56, 0xA5, 0x3B, 0xF4, 0x81, 0x83, 0x49, 0x80, 0x77, 0xE0
        };
        FUNC_1( VAR_6, VAR_10, 20, 1 );

        VAR_9 = 2560 - VAR_7->i_buffer - 20
                  - VAR_2;
    }
    else if( VAR_8->truehd.i_frame_count == 11 )
    {

        VAR_9 = 2560 - VAR_7->i_buffer - 4;
    }
    else if( VAR_8->truehd.i_frame_count == 12 )
    {
        static const char VAR_11[12] = {
            0xC3, 0xC1, 0x42, 0x49, 0x3B, 0xFA,
            0x82, 0x83, 0x49, 0x80, 0x77, 0xE0
        };
        FUNC_1( VAR_6, VAR_11, 12, 1 );
        VAR_9 = 2560 - VAR_7->i_buffer - ( 12 - 4 );
    }
    else if( VAR_8->truehd.i_frame_count == 23 )
    {
        static const char VAR_12[16] = {
            0xC3, 0xC2, 0xC0, 0xC4, 0x00, 0x00, 0x00, 0x00,
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0x11
        };


        VAR_9 = 2560 - VAR_7->i_buffer - 24;

        if( VAR_9 < 0 || VAR_7->i_buffer + VAR_9 >
            VAR_8->p_out_buf->i_buffer - VAR_8->i_out_offset )
            return VAR_1;

        FUNC_0( VAR_6, VAR_7 );
        FUNC_4( VAR_6, VAR_9 );
        FUNC_1( VAR_6, VAR_12, 16, 1 );
        FUNC_2( VAR_6, VAR_0, 1 );
        VAR_8->truehd.i_frame_count = 0;
        return VAR_4;
    }
    else
        VAR_9 = 2560 - VAR_7->i_buffer;

    if( VAR_9 < 0 || VAR_7->i_buffer + VAR_9 >
        VAR_8->p_out_buf->i_buffer - VAR_8->i_out_offset )
        return VAR_1;

    FUNC_0( VAR_6, VAR_7 );
    FUNC_4( VAR_6, VAR_9 );
    VAR_8->truehd.i_frame_count++;
    return VAR_3;
}
