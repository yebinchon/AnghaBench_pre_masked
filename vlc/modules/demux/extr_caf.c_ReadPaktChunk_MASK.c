
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_6__ {scalar_t__ i_descriptions_start; int i_num_remainder_frames; int i_num_priming_frames; int i_num_valid_frames; int i_num_packets; } ;
struct TYPE_8__ {TYPE_1__ packet_table; } ;
typedef TYPE_3__ demux_sys_t ;


 scalar_t__ FUNC_0 (int const*,int *) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,int const**,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    const uint8_t *VAR_4;

    if ( FUNC_3( VAR_2->s, &VAR_4, 8 + 8 + 4 + 4 ) < ( 8 + 8 + 4 + 4 ))
    {
        FUNC_2( VAR_2, "Couldn't peek packet descriptions" );
        return VAR_0;
    }

    if( FUNC_1( VAR_4, &VAR_3->packet_table.i_num_packets ))
    {
        FUNC_2( VAR_2, "Invalid packet table: i_num_packets is negative.");
        return VAR_0;
    }
    if( FUNC_1( VAR_4 + 8, &VAR_3->packet_table.i_num_valid_frames ))
    {
        FUNC_2( VAR_2, "Invalid packet table: i_num_valid_frames is negative.");
        return VAR_0;
    }
    if( FUNC_0( VAR_4 + 16, &VAR_3->packet_table.i_num_priming_frames ))
    {
        FUNC_2( VAR_2, "Invalid packet table: i_num_priming_frames is negative.");
        return VAR_0;
    }
    if( FUNC_0( VAR_4 + 20, &VAR_3->packet_table.i_num_remainder_frames ))
    {
        FUNC_2( VAR_2, "Invalid packet table: i_num_remainder_frames is negative.");
        return VAR_0;
    }

    VAR_3->packet_table.i_descriptions_start = FUNC_4( VAR_2->s ) + 24;

    return VAR_1;
}
