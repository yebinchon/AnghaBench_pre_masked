
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {scalar_t__ i_still_end; int i_data_peeked; int* p_peek; scalar_t__ i_level; scalar_t__ b_still; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    int VAR_5;

    if( VAR_4->b_still && VAR_4->i_still_end != VAR_2 )
    {

        FUNC_4( VAR_4->i_still_end );
        VAR_4->i_still_end = VAR_2;
        return VAR_1;
    }

    if( !FUNC_0( VAR_3, 1 ) )
    {
        FUNC_3( VAR_3, "cannot peek data" );
        return VAR_0;
    }
    if( VAR_4->i_data_peeked < 4 )
    {
        FUNC_3( VAR_3, "data shortage" );
        return VAR_0;
    }
    VAR_5 = 3;
FIND_NEXT_EOI:
    while( !( VAR_4->p_peek[VAR_5-1] == 0xFF && VAR_4->p_peek[VAR_5] == 0xD9 ) )
    {
        if( VAR_4->p_peek[VAR_5-1] == 0xFF && VAR_4->p_peek[VAR_5] == 0xD9 )
        {
            VAR_4->i_level++;
            FUNC_2( VAR_3, "we found another JPEG SOI at %d", VAR_5 );
        }
        VAR_5++;
        if( VAR_5 >= VAR_4->i_data_peeked )
        {
            FUNC_2( VAR_3, "did not find JPEG EOI in %d bytes",
                     VAR_4->i_data_peeked );
            if( !FUNC_0( VAR_3, 0 ) )
            {
                FUNC_3( VAR_3, "no more data is available at the moment" );
                return VAR_0;
            }
        }
    }
    VAR_5++;

    FUNC_2( VAR_3, "JPEG EOI detected at %d", VAR_5 );
    VAR_4->i_level--;

    if( VAR_4->i_level > 0 )
        goto FIND_NEXT_EOI;
    return FUNC_1( VAR_3, VAR_5 );
}
