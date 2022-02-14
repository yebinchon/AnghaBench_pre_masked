
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef size_t uint32_t ;
struct TYPE_11__ {unsigned int const i_frame_rate; unsigned int const i_frame_rate_base; int space; int transfer; int primaries; int i_visible_height; int i_visible_width; } ;
struct TYPE_12__ {TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_13__ {int i_buffer; unsigned int* p_buffer; unsigned int const i_pts; } ;
typedef TYPE_3__ block_t ;
struct TYPE_14__ {int min; int max; } ;


 unsigned int const VAR_0 ;
 size_t FUNC_0 (unsigned int*) ;
 size_t VAR_1 ;
 unsigned int FUNC_1 (unsigned int const) ;
 int FUNC_2 (unsigned int*,unsigned int) ;
 int FUNC_3 (unsigned int*,unsigned int const) ;
 size_t FUNC_4 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 TYPE_3__* FUNC_5 (TYPE_3__*,int,size_t) ;
 int FUNC_6 (TYPE_3__*) ;
 unsigned int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,unsigned int const,unsigned int const,int) ;
 TYPE_4__* VAR_2 ;
 int FUNC_9 (unsigned int*,char*,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static block_t *FUNC_11( block_t *VAR_3, const es_format_t *VAR_4 )
{
    size_t VAR_5 = 0;
    uint32_t VAR_6 = 0;
    while( VAR_3->i_buffer > 8 && VAR_3->i_buffer - VAR_5 > 8 )
    {
        const uint32_t VAR_7 = FUNC_0( &VAR_3->p_buffer[VAR_5] );
        VAR_6 = FUNC_4( VAR_3->p_buffer[VAR_5 + 4],
                            VAR_3->p_buffer[VAR_5 + 5],
                            VAR_3->p_buffer[VAR_5 + 6],
                            VAR_3->p_buffer[VAR_5 + 7] );
        if( VAR_3->i_buffer - VAR_5 < VAR_7 || VAR_7 < 8 )
        {
            VAR_6 = 0;
            break;
        }
        else if( VAR_6 == VAR_1 )
        {
            break;
        }

        VAR_5 += VAR_7;
    }

    if( VAR_6 != VAR_1 )
    {
        FUNC_6( VAR_3 );
        return ((void*)0);
    }

    if( VAR_5 < 38 )
    {
        block_t *VAR_8 = FUNC_5( VAR_3, 38 - VAR_5, VAR_3->i_buffer );
        if( FUNC_10(!VAR_8) )
        {
            FUNC_6( VAR_3 );
            return ((void*)0);
        }
        VAR_3 = VAR_8;
    }
    else
    {
        VAR_3->p_buffer += (VAR_5 - 38);
        VAR_3->i_buffer -= (VAR_5 - 38);
    }

    const int VAR_9 = FUNC_8( VAR_4->video.i_visible_width,
                                         VAR_4->video.i_visible_height,
                                         VAR_4->video.i_frame_rate,
                                         VAR_4->video.i_frame_rate_base, 1 );
    FUNC_9( VAR_3->p_buffer, "elsmfrat", 8 );
    FUNC_3( &VAR_3->p_buffer[8], VAR_4->video.i_frame_rate_base );
    FUNC_3( &VAR_3->p_buffer[10], VAR_4->video.i_frame_rate );
    FUNC_9( &VAR_3->p_buffer[12], "brat", 4 );
    unsigned VAR_10 = VAR_2[VAR_9].min * 1000000;
    unsigned VAR_11 = VAR_2[VAR_9].max * 1000000;
    FUNC_2(&VAR_3->p_buffer[16], VAR_11 );
    FUNC_2(&VAR_3->p_buffer[20], VAR_10 );
    FUNC_9( &VAR_3->p_buffer[24], "tcod", 4 );
    const unsigned VAR_12 = FUNC_1(VAR_3->i_pts);
    const unsigned VAR_13 = VAR_12 / 60;
    const unsigned VAR_14 = VAR_13 / 60;
    const uint64_t VAR_15 = VAR_4->video.i_frame_rate_base * VAR_0 /
                       VAR_4->video.i_frame_rate;
    const unsigned VAR_16 = (VAR_3->i_pts % VAR_0) / VAR_15;
    VAR_3->p_buffer[28] = VAR_14;
    VAR_3->p_buffer[29] = VAR_13 % 60;
    VAR_3->p_buffer[30] = VAR_12 % 60;
    VAR_3->p_buffer[31] = VAR_16;
    FUNC_9( &VAR_3->p_buffer[32], "bcol", 4 );
    VAR_3->p_buffer[36] = FUNC_7( VAR_4->video.primaries,
                                               VAR_4->video.transfer,
                                               VAR_4->video.space );
    VAR_3->p_buffer[37] = 0;

    return VAR_3;
}
