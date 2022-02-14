
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct block_extension_t {int dummy; } ;
struct TYPE_13__ {int i_width; int i_height; int i_sar_num; int i_sar_den; int i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_14__ {int i_id; int i_extra; int* p_extra; TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_15__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_16__ {int i_block_size; int i_width; int i_height; int i_id_video; int i_forced_aspect; int i_aspect; char* psz_telx; int i_telx_line; int i_telx_count; char* psz_telx_lang; void* p_es_telx; scalar_t__ b_vbi; void* p_es_video; int i_frame_rate_base; int i_frame_rate; int i_incr; int i_next_date; } ;
typedef TYPE_4__ demux_sys_t ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 void* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,char*,int,int,int,int) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int* FUNC_7 (int*,int) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char**,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11( demux_t *VAR_8 )
{
    demux_sys_t *VAR_9 = VAR_8->p_sys;
    es_format_t VAR_10;
    char *VAR_11;

    VAR_9->i_next_date = VAR_1;
    VAR_9->i_incr = FUNC_10(VAR_9->i_frame_rate_base, VAR_9->i_frame_rate);
    VAR_9->i_block_size = VAR_9->i_width * VAR_9->i_height * 3 / 2
                           + sizeof(struct block_extension_t);
    if( FUNC_2( VAR_8 ) != VAR_6 )
        return VAR_5;


    FUNC_3( &VAR_10, VAR_2, VAR_3 );
    VAR_10.i_id = VAR_9->i_id_video;
    VAR_10.video.i_frame_rate = VAR_9->i_frame_rate;
    VAR_10.video.i_frame_rate_base = VAR_9->i_frame_rate_base;
    VAR_10.video.i_width = VAR_9->i_width;
    VAR_10.video.i_height = VAR_9->i_height;
    int VAR_12 = VAR_9->i_forced_aspect ? VAR_9->i_forced_aspect
                                          : VAR_9->i_aspect;
    VAR_10.video.i_sar_num = VAR_12 * VAR_10.video.i_height
                           / VAR_10.video.i_width;
    VAR_10.video.i_sar_den = VAR_7;
    VAR_9->p_es_video = FUNC_4( VAR_8->out, &VAR_10 );

    if ( VAR_9->b_vbi && FUNC_1( VAR_8 ) != VAR_6 )
        VAR_9->b_vbi = 0;


    VAR_11 = VAR_9->psz_telx;
    if ( VAR_11 != ((void*)0) && *VAR_11 )
    {
        if ( !VAR_9->b_vbi )
        {
            FUNC_6( VAR_8, "VBI is unsupported on this input stream" );
        }
        else
        {
            int VAR_13;
            char *VAR_14 = FUNC_8( VAR_11, '=' );
            if ( VAR_14 != ((void*)0) )
            {
                *VAR_14 = '\0';
                VAR_13 = FUNC_9( VAR_11, ((void*)0), 0 );
                VAR_11 = VAR_14 + 1;
            }
            else
                VAR_13 = 0;

            VAR_14 = FUNC_8( VAR_11, '-' );
            if ( VAR_14 != ((void*)0) )
                *VAR_14++ = '\0';

            VAR_9->i_telx_line = FUNC_9( VAR_11, ((void*)0), 0 ) - 1;
            if ( VAR_14 != ((void*)0) )
                VAR_9->i_telx_count = FUNC_9( VAR_14, ((void*)0), 0 )
                                       - VAR_9->i_telx_line - 1 + 1;
            else
                VAR_9->i_telx_count = 1;

            if ( FUNC_0( VAR_8 ) == VAR_6 )
            {
                int VAR_15 = 0;
                uint8_t *VAR_16 = ((void*)0);

                FUNC_5( VAR_8, "capturing VBI lines %d-%d and %d-%d",
                         VAR_9->i_telx_line + 1,
                         VAR_9->i_telx_line + 1 + VAR_9->i_telx_count - 1,
                         VAR_9->i_telx_line + 1 + 313,
                         VAR_9->i_telx_line + 1 + 313
                                                + VAR_9->i_telx_count - 1 );

                FUNC_3( &VAR_10, VAR_0, VAR_4 );
                VAR_10.i_id = VAR_13;


                VAR_11 = VAR_9->psz_telx_lang;

                while ( (VAR_14 = FUNC_8( VAR_11, '=' )) != ((void*)0) )
                {
                    int VAR_17;
                    *VAR_14++ = '\0';
                    if ( !VAR_14[0] || !VAR_14[1] || !VAR_14[2] )
                        break;
                    VAR_17 = FUNC_9( VAR_11, ((void*)0), 0 );
                    VAR_15 += 5;
                    VAR_16 = FUNC_7( VAR_16, VAR_15 );
                    VAR_16[VAR_15 - 5] = *VAR_14++;
                    VAR_16[VAR_15 - 4] = *VAR_14++;
                    VAR_16[VAR_15 - 3] = *VAR_14++;
                    if ( *VAR_14 == '/' )
                    {
                        VAR_14++;
                        VAR_16[VAR_15 - 2] = FUNC_9( VAR_14, &VAR_14, 0 )
                                               << 3;
                    }
                    else
                        VAR_16[VAR_15 - 2] = 0x5 << 3;
                    VAR_16[VAR_15 - 2] |= (VAR_17 / 100) & 0x7;
                    VAR_16[VAR_15 - 1] = VAR_17 % 100;

                    if ( *VAR_14 == ',' )
                        VAR_14++;
                    VAR_11 = VAR_14;
                }

                VAR_10.i_extra = VAR_15;
                VAR_10.p_extra = VAR_16;
                VAR_9->p_es_telx = FUNC_4( VAR_8->out, &VAR_10 );
            }
            else
                VAR_9->i_telx_count = 0;
        }
    }
    return VAR_6;
}
