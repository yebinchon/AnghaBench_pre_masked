
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_10__ {scalar_t__ i_buffer_tcp; scalar_t__ i_proto; int i_buffer_udp; int i_command; scalar_t__ buffer_udp; scalar_t__ buffer_tcp; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ,int *,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,size_t*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__,size_t*) ;
 int FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_4 )
{
    access_sys_t *VAR_5 = VAR_4->p_sys;
    int VAR_6;
    int VAR_7;

    for( ;; )
    {
        bool VAR_8 = 1;


        if( VAR_5->i_buffer_tcp >= VAR_1 )
        {
            if( FUNC_0( VAR_5->buffer_tcp + 4 ) == 0xb00bface )
            {
                if( FUNC_0( VAR_5->buffer_tcp + 8 ) + 16 <=
                    (size_t)VAR_5->i_buffer_tcp )
                {
                    VAR_8 = 0;
                }
            }
            else if( FUNC_1( VAR_5->buffer_tcp + 6 ) <= VAR_5->i_buffer_tcp )
            {
                VAR_8 = 0;
            }
        }
        if( VAR_5->i_proto == VAR_3 && VAR_5->i_buffer_udp >= 8 &&
            FUNC_1( VAR_5->buffer_udp + 6 ) <= VAR_5->i_buffer_udp )
        {
            VAR_8 = 0;
        }

        if( VAR_8 && FUNC_2( VAR_4 ) < 0 )
        {
            FUNC_7( VAR_4, "cannot fill buffer" );
            return -1;
        }

        VAR_6 = -1;
        VAR_7 = -1;

        if( VAR_5->i_buffer_tcp > 0 )
        {
            size_t VAR_9;

            if( FUNC_0( VAR_5->buffer_tcp + 4 ) == 0xb00bface )
            {
                VAR_6 =
                    FUNC_5( VAR_4, VAR_5->buffer_tcp,
                                      VAR_5->i_buffer_tcp, &VAR_9 );

            }
            else
            {
                VAR_6 =
                    FUNC_6( VAR_4, VAR_5->buffer_tcp,
                                     VAR_5->i_buffer_tcp, &VAR_9 );
            }
            if( VAR_9 > 0 && VAR_9 < VAR_0 )
            {
                FUNC_3( VAR_5->buffer_tcp, VAR_5->buffer_tcp + VAR_9,
                         VAR_0 - VAR_9 );
            }
            VAR_5->i_buffer_tcp -= VAR_9;
        }
        else if( VAR_5->i_buffer_udp > 0 )
        {
            size_t VAR_10;

            VAR_7 =
                FUNC_6( VAR_4, VAR_5->buffer_udp,
                                 VAR_5->i_buffer_udp, &VAR_10 );

            if( VAR_10 > 0 && VAR_10 < VAR_0 )
            {
                FUNC_3( VAR_5->buffer_udp, VAR_5->buffer_udp + VAR_10,
                         VAR_0 - VAR_10 );
            }
            VAR_5->i_buffer_udp -= VAR_10;
        }

        if( VAR_6 == VAR_2 && VAR_5->i_command == 0x1b )
        {
            FUNC_4( VAR_4, 0x1b, 0, 0, ((void*)0), 0 );
            VAR_6 = -1;
        }

        if( VAR_6 != -1 )
        {
            return VAR_6;
        }
        else if( VAR_7 != -1 )
        {
            return VAR_7;
        }
    }
}
