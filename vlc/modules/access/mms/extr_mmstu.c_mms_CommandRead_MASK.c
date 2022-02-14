
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int i_command; int b_eof; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_2( stream_t *VAR_3, int VAR_4,
                            int VAR_5 )
{
    access_sys_t *VAR_6 = VAR_3->p_sys;
    int VAR_7;
    int VAR_8;

    for( VAR_7 = 0; VAR_7 < VAR_0; )
    {
        VAR_8 = FUNC_0( VAR_3 );
        if( VAR_8 < 0 || VAR_6->i_command == 0 )
        {
            VAR_7++;
        }
        else if( VAR_4 == 0 && VAR_5 == 0)
        {
            return VAR_2;
        }
        else if( VAR_6->i_command == VAR_4 ||
                 VAR_6->i_command == VAR_5 )
        {
            return VAR_2;
        }
        else
        {
            switch( VAR_6->i_command )
            {
                case 0x03:
                    FUNC_1( VAR_3, "socket closed by server" );
                    VAR_6->b_eof = 1;
                    return VAR_1;
                case 0x1e:
                    FUNC_1( VAR_3, "end of media stream" );
                    VAR_6->b_eof = 1;
                    return VAR_1;
                default:
                    break;
            }
        }
    }
    VAR_6->b_eof = 1;
    FUNC_1( VAR_3, "failed to receive command (aborting)" );

    return VAR_1;
}
