
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_7__ {int i_socket; int b_quiet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,char*,int) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(intf_thread_t *VAR_2, char *VAR_3, int *VAR_4)
{
    while( *VAR_4 < VAR_1 )
    {
        if( VAR_2->p_sys->i_socket == -1 )
        {
            if( FUNC_4( 0 , VAR_3 + *VAR_4, 1 ) <= 0 )
            {
                FUNC_1( FUNC_5(VAR_2) );
                VAR_3[*VAR_4] = 0;
                return 1;
            }
        }
        else
        {
            if( FUNC_3( VAR_2, VAR_2->p_sys->i_socket, VAR_3 + *VAR_4,
                          1 ) <= 0 )
            {
                FUNC_2( VAR_2->p_sys->i_socket );
                VAR_2->p_sys->i_socket = -1;
                VAR_3[*VAR_4] = 0;
                return 1;
            }
        }

        if( VAR_3[ *VAR_4 ] == '\r' || VAR_3[ *VAR_4 ] == '\n' )
            break;

        (*VAR_4)++;
    }

    if( *VAR_4 == VAR_1 ||
        VAR_3[ *VAR_4 ] == '\r' || VAR_3[ *VAR_4 ] == '\n' )
    {
        VAR_3[ *VAR_4 ] = 0;
        return 1;
    }

    return 0;
}
