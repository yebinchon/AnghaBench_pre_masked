
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ force; } ;
struct TYPE_7__ {TYPE_1__ obj; int s; } ;
typedef TYPE_2__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_4, unsigned *VAR_5, int VAR_6 )
{
    const uint8_t *VAR_7;

    if( FUNC_2( VAR_4->s,
                     &VAR_7, VAR_6 + VAR_3 ) < VAR_6 + VAR_3 )
        return -1;

    for( int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++ )
    {
        if( VAR_7[VAR_6 + VAR_8] != 0x47 )
            continue;


        int VAR_9 = VAR_6 + VAR_3 * 3 + VAR_8 + 1;
        if( ( FUNC_2( VAR_4->s, &VAR_7, VAR_9 ) ) < VAR_9 )
        {
            FUNC_0( VAR_4, "cannot peek" );
            return -1;
        }
        if( VAR_7[VAR_6 + VAR_8 + 1 * VAR_0] == 0x47 &&
            VAR_7[VAR_6 + VAR_8 + 2 * VAR_0] == 0x47 &&
            VAR_7[VAR_6 + VAR_8 + 3 * VAR_0] == 0x47 )
        {
            return VAR_0;
        }
        else if( VAR_7[VAR_6 + VAR_8 + 1 * VAR_1] == 0x47 &&
                 VAR_7[VAR_6 + VAR_8 + 2 * VAR_1] == 0x47 &&
                 VAR_7[VAR_6 + VAR_8 + 3 * VAR_1] == 0x47 )
        {
            if( VAR_8 == 4 )
            {
                *VAR_5 = 4;
            }
            return VAR_1;
        }
        else if( VAR_7[VAR_6 + VAR_8 + 1 * VAR_2] == 0x47 &&
                 VAR_7[VAR_6 + VAR_8 + 2 * VAR_2] == 0x47 &&
                 VAR_7[VAR_6 + VAR_8 + 3 * VAR_2] == 0x47 )
        {
            return VAR_2;
        }
    }

    if( VAR_4->obj.force )
    {
        FUNC_1( VAR_4, "this does not look like a TS stream, continuing" );
        return VAR_0;
    }
    FUNC_0( VAR_4, "TS module discarded (lost sync)" );
    return -1;
}
