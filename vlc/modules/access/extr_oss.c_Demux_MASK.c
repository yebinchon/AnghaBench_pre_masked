
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pollfd {int events; int revents; int fd; } ;
struct TYPE_8__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {scalar_t__ i_next_demux_date; int p_es; int i_fd; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {scalar_t__ i_pts; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;

    struct pollfd VAR_6;
    VAR_6.fd = VAR_5->i_fd;
    VAR_6.events = VAR_1|VAR_2;
    VAR_6.revents = 0;

    block_t *VAR_7 = ((void*)0);

    do
    {
        if( VAR_7 )
        {
            FUNC_1( VAR_4->out, VAR_5->p_es, VAR_7 );
            VAR_7 = ((void*)0);
        }


        if( FUNC_3( &VAR_6, 1, 10 ) )
        {
            if( VAR_3 == VAR_0 )
                continue;
            if( VAR_6.revents & (VAR_1|VAR_2) )
            {
                VAR_7 = FUNC_0( VAR_4 );
                if( VAR_7 )
                    FUNC_2( VAR_4->out, VAR_7->i_pts );
            }
        }
    } while( VAR_7 && VAR_5->i_next_demux_date > 0 &&
             VAR_7->i_pts < VAR_5->i_next_demux_date );

    if( VAR_7 )
        FUNC_1( VAR_4->out, VAR_5->p_es, VAR_7 );

    return 1;
}
