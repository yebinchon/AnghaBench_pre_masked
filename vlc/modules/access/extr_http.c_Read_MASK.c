
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;
struct TYPE_10__ {int i_icy_meta; int offset; int i_icy_offset; scalar_t__ b_reconnect; int * stream; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int*,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static ssize_t FUNC_6( stream_t *VAR_1, void *VAR_2, size_t VAR_3 )
{
    access_sys_t *VAR_4 = VAR_1->p_sys;

    if (VAR_4->stream == ((void*)0))
        return 0;

    int VAR_5 = VAR_3;

    if( VAR_4->i_icy_meta > 0 )
    {
        if( VAR_0 - VAR_5 < VAR_4->offset )
            VAR_5 = VAR_0 - VAR_4->offset;

        if( VAR_4->offset + VAR_5 > VAR_4->i_icy_offset )
            VAR_5 = VAR_4->i_icy_offset - VAR_4->offset;
    }

    int VAR_6 = 0;
    if( FUNC_2( VAR_1, &VAR_6, (uint8_t*)VAR_2, VAR_5 ) )
        return 0;

    if( VAR_6 < 0 )
        return -1;

    if( VAR_6 == 0 )
    {
        FUNC_1( VAR_1 );
        if( VAR_4->b_reconnect )
        {
            FUNC_5( VAR_1, "got disconnected, trying to reconnect" );
            if( FUNC_0( VAR_1 ) )
                FUNC_5( VAR_1, "reconnection failed" );
            else
                return -1;
        }
        return 0;
    }

    FUNC_4( VAR_6 >= 0 );
    VAR_4->offset += VAR_6;

    if( VAR_4->i_icy_meta > 0 &&
        VAR_4->offset == VAR_4->i_icy_offset )
    {
        if( FUNC_3( VAR_1 ) )
            return 0;
        VAR_4->i_icy_offset = VAR_4->offset + VAR_4->i_icy_meta;
    }

    return VAR_6;
}
