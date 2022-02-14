
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {int i_command; int b_eof; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_4, int VAR_5 )
{
    access_sys_t *VAR_6 = VAR_4->p_sys;
    int VAR_7;

    for( VAR_7 = 0; VAR_7 < VAR_3; )
    {
        int VAR_8;

        VAR_8 = FUNC_0( VAR_4 );
        if( VAR_8 < 0 )
        {
            VAR_7++;
            FUNC_2( VAR_4, "cannot receive header (%d/%d)",
                      VAR_7, VAR_3 );
        }
        else if( VAR_8 == VAR_5 || VAR_5 == VAR_0 )
        {
            return VAR_5;
        }
        else if( VAR_8 == VAR_1 )
        {
            switch( VAR_6->i_command )
            {
                case 0x03:
                    FUNC_2( VAR_4, "socket closed by server" );
                    VAR_6->b_eof = 1;
                    return -1;
                case 0x1e:
                    FUNC_2( VAR_4, "end of media stream" );
                    VAR_6->b_eof = 1;
                    return -1;
                case 0x20:



                    FUNC_1( VAR_4,
                             "reinitialization needed --> unsupported" );
                    VAR_6->b_eof = 1;
                    return -1;
                default:
                    break;
            }
        }
    }

    FUNC_1( VAR_4, "cannot receive %s (aborting)",
             ( VAR_5 == VAR_2 ) ? "header" : "media data" );
    VAR_6->b_eof = 1;
    return -1;
}
