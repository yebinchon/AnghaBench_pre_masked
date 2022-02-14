
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {int s; TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_10__ {scalar_t__ i_num_packets; } ;
struct TYPE_8__ {scalar_t__ i_bytes_per_frame; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
struct TYPE_12__ {scalar_t__ i_data_size; scalar_t__ i_data_offset; TYPE_3__ packet_table; TYPE_2__ fmt; } ;
typedef TYPE_5__ demux_sys_t ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static uint64_t FUNC_2( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    if( !FUNC_0( VAR_2 ))
    {
        uint64_t VAR_3;

        if( VAR_2->i_data_size != VAR_0)
        {
            VAR_3 = VAR_2->i_data_size;
        }
        else
        {
            int64_t VAR_4 = FUNC_1( VAR_1->s );
            if(VAR_4 >= 0 && (uint64_t)VAR_4 >= VAR_2->i_data_offset)
                VAR_3 = VAR_4 - VAR_2->i_data_offset;
            else
                VAR_3 = 0;
        }

        return VAR_3 / VAR_2->fmt.audio.i_bytes_per_frame;
    }
    else
    {
        return VAR_2->packet_table.i_num_packets;
    }
}
