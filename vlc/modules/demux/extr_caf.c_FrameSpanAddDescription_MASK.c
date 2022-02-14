
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef unsigned int uint32_t ;
struct TYPE_13__ {unsigned int i_desc_bytes; int i_frames; int i_samples; int i_bytes; } ;
typedef TYPE_4__ frame_span_t ;
struct TYPE_14__ {int s; TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_11__ {scalar_t__ i_frame_length; scalar_t__ i_bytes_per_frame; } ;
struct TYPE_12__ {TYPE_2__ audio; } ;
struct TYPE_10__ {scalar_t__ i_descriptions_start; } ;
struct TYPE_15__ {TYPE_3__ fmt; TYPE_1__ packet_table; } ;
typedef TYPE_6__ demux_sys_t ;


 scalar_t__ FUNC_0 (int const*,int,scalar_t__*,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (int ,int const**,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_2, uint64_t VAR_3, frame_span_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;


    if( VAR_5->fmt.audio.i_bytes_per_frame && VAR_5->fmt.audio.i_frame_length )
    {
        VAR_4->i_bytes += VAR_5->fmt.audio.i_bytes_per_frame;
        VAR_4->i_samples += VAR_5->fmt.audio.i_frame_length;
        VAR_4->i_frames++;
        return VAR_1;
    }

    uint32_t VAR_6 = 0;

    if( FUNC_3( VAR_2->s, VAR_5->packet_table.i_descriptions_start + VAR_3 ))
    {
        FUNC_1( VAR_2, "Couldn't seek packet description." );
        return VAR_0;
    }

    const uint8_t *VAR_7;
    int VAR_8 = FUNC_2( VAR_2->s, &VAR_7, 2 * 10 );


    if( VAR_8 < 0 )
        VAR_8 = 0;

    if( VAR_5->fmt.audio.i_bytes_per_frame )
    {
        VAR_4->i_bytes += VAR_5->fmt.audio.i_bytes_per_frame;
    }
    else
    {
        uint64_t VAR_9;
        uint32_t VAR_10;
        if( FUNC_0( VAR_7, VAR_8, &VAR_9, &VAR_10 ))
        {
            return VAR_0;
        }

        VAR_6 += VAR_10;
        VAR_4->i_bytes += VAR_9;
    }

    if( VAR_5->fmt.audio.i_frame_length )
    {
        VAR_4->i_samples += VAR_5->fmt.audio.i_frame_length;
    }
    else
    {
        if( VAR_6 >= (unsigned)VAR_8 )
        {
            return VAR_0;
        }

        uint64_t VAR_11;
        uint32_t VAR_12;
        if( FUNC_0( VAR_7 + VAR_6, VAR_8 - VAR_6, &VAR_11, &VAR_12 ))
        {
            return VAR_0;
        }

        VAR_6 += VAR_12;
        VAR_4->i_samples += VAR_11;
    }
    VAR_4->i_desc_bytes += VAR_6;
    VAR_4->i_frames++;

    return VAR_1;
}
