
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_13__ {scalar_t__ i_handle; scalar_t__ segment_max_length; int ongoing_segment; int full_segments; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_14__ {scalar_t__ i_length; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (int ,int *,int *,scalar_t__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6( sout_access_out_t *VAR_0, block_t *VAR_1 )
{
    sout_access_out_sys_t *VAR_2 = VAR_0->p_sys;
    ssize_t VAR_3 = 0;

    vlc_tick_t VAR_4 = 0;
    vlc_tick_t VAR_5 = 0;

    FUNC_0( VAR_2->full_segments, ((void*)0), ((void*)0), &VAR_4 );
    FUNC_0( VAR_2->ongoing_segment, ((void*)0), ((void*)0), &VAR_5 );

    if( VAR_2->i_handle > 0 &&
       (( VAR_1->i_length + VAR_4 + VAR_5 ) >= VAR_2->segment_max_length ) )
    {
        VAR_3 = FUNC_5( VAR_0 );
        if( FUNC_4( VAR_3 < 0 ) )
        {
            FUNC_1 ( VAR_1 );
            return -1;
        }
        FUNC_2( VAR_0, VAR_2, 0 );
        return VAR_3;
    }

    if ( FUNC_4( VAR_2->i_handle < 0 ) )
    {
        if ( FUNC_3( VAR_0, VAR_2 ) < 0 )
           return -1;
    }
    return VAR_3;
}
