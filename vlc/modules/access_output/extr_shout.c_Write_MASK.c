
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_11__ {int p_shout; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_12__ {scalar_t__ i_buffer; int p_buffer; struct TYPE_12__* p_next; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static ssize_t FUNC_9( sout_access_out_t *VAR_2, block_t *VAR_3 )
{
    sout_access_out_sys_t *VAR_4 = VAR_2->p_sys;
    size_t VAR_5 = 0;

    FUNC_8( VAR_4->p_shout );
    while( VAR_3 )
    {
        block_t *VAR_6 = VAR_3->p_next;

        if( FUNC_7( VAR_4->p_shout, VAR_3->p_buffer, VAR_3->i_buffer )
             == VAR_0 )
        {
            VAR_5 += VAR_3->i_buffer;
        }
        else
        {
            FUNC_2( VAR_2, "cannot write to stream: %s",
                     FUNC_5( VAR_4->p_shout ) );





            FUNC_4( VAR_4->p_shout );
            FUNC_3( VAR_2, "server unavailable? trying to reconnect..." );

            if( FUNC_6( VAR_4->p_shout ) == VAR_0 )
            {
                FUNC_8( VAR_4->p_shout );
                FUNC_3( VAR_2, "reconnected to server" );
            }
            else
            {
                FUNC_2( VAR_2, "failed to reconnect to server" );
                FUNC_0( VAR_3 );
                return VAR_1;
            }

        }
        FUNC_1( VAR_3 );



        VAR_3 = VAR_6;
    }

    return VAR_5;
}
