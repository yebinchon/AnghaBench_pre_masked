
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int i_data_peeked; char* p_peek; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static char* FUNC_4( demux_t *VAR_0, int *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;
    const uint8_t *VAR_3;
    int VAR_4;
    int VAR_5;
    char *VAR_6;

    while( *VAR_1 >= VAR_2->i_data_peeked )
    {
        if( ! FUNC_0( VAR_0, 0 ) )
        {
            return ((void*)0);
        }
    }
    VAR_3 = VAR_2->p_peek + *VAR_1;
    VAR_4 = VAR_2->i_data_peeked - *VAR_1;
    VAR_5 = 0;
    while( VAR_3[VAR_5] != '\n' )
    {
        VAR_5++;
        if( VAR_5 == VAR_4 )
        {
            if( ! FUNC_0( VAR_0, 0 ) )
            {
                return ((void*)0);
            }
            VAR_3 = VAR_2->p_peek + *VAR_1;
            VAR_4 = VAR_2->i_data_peeked - *VAR_1;
        }
    }
    *VAR_1 += VAR_5 + 1;
    if( VAR_5 > 0 && VAR_3[VAR_5 - 1] == '\r' )
    {
        VAR_5--;
    }
    VAR_6 = FUNC_1( VAR_5 + 1 );
    if( FUNC_3( VAR_6 == ((void*)0) ) )
        return ((void*)0);
    FUNC_2 ( VAR_6, (char*)VAR_3, VAR_5 );
    VAR_6[VAR_5] = '\0';
    return VAR_6;
}
