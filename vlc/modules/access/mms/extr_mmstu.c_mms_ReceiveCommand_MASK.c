
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {scalar_t__ i_buffer_tcp; int i_command; scalar_t__ buffer_tcp; } ;
typedef TYPE_2__ access_sys_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,size_t*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_3 )
{
    access_sys_t *VAR_4 = VAR_3->p_sys;

    for( ;; )
    {
        size_t VAR_5;
        int VAR_6;

        if( FUNC_0( VAR_3 ) < 0 )
        {
            FUNC_4( VAR_3, "cannot fill buffer" );
            return VAR_1;
        }
        if( VAR_4->i_buffer_tcp > 0 )
        {
            VAR_6 = FUNC_3( VAR_3, VAR_4->buffer_tcp,
                                         VAR_4->i_buffer_tcp, &VAR_5 );
            if( VAR_5 < VAR_0 )
            {
                FUNC_1( VAR_4->buffer_tcp, VAR_4->buffer_tcp + VAR_5,
                         VAR_0 - VAR_5 );
            }
            VAR_4->i_buffer_tcp -= VAR_5;

            if( VAR_6 < 0 )
            {
                return VAR_1;
            }

            if( VAR_4->i_command == 0x1b )
            {
                FUNC_2( VAR_3, 0x1b, 0, 0, ((void*)0), 0 );
            }
            else
            {
                break;
            }
        }
        else
        {
            return VAR_1;
        }
    }

    return VAR_2;
}
