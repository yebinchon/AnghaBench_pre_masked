
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {scalar_t__ i_next_date; scalar_t__ i_incr; int es; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;
    block_t *VAR_2;

    if( !VAR_1->i_next_date ) VAR_1->i_next_date = FUNC_3();


    while( FUNC_3() >= VAR_1->i_next_date + VAR_1->i_incr )
        VAR_1->i_next_date += VAR_1->i_incr;

    FUNC_4( VAR_1->i_next_date );
    VAR_2 = FUNC_2( VAR_0 );
    if( !VAR_2 )
    {
        VAR_1->i_next_date += VAR_1->i_incr;
        return 1;
    }

    VAR_2->i_dts = VAR_2->i_pts = VAR_1->i_next_date;

    FUNC_1( VAR_0->out, VAR_2->i_pts );
    FUNC_0( VAR_0->out, VAR_1->es, VAR_2 );

    VAR_1->i_next_date += VAR_1->i_incr;

    return 1;
}
