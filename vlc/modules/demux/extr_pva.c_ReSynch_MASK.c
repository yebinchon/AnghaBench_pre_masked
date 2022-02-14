
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {int s; } ;
typedef TYPE_1__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const**,int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2( demux_t *VAR_2 )
{
    for( ;; )
    {
        const uint8_t *VAR_3;
        int VAR_4 = FUNC_0( VAR_2->s, &VAR_3, 1024 );
        if( VAR_4 < 8 )
            break;

        int VAR_5 = 0;

        while( VAR_5 < VAR_4 - 5 )
        {
            if( VAR_3[0] == 'A' && VAR_3[1] == 'V' && VAR_3[4] == 0x55 )
            {
                if( VAR_5 > 0
                 && FUNC_1( VAR_2->s, ((void*)0), VAR_5 ) < VAR_5 )
                    return VAR_0;
                return VAR_1;
            }
            VAR_3++;
            VAR_5++;
        }

        if( FUNC_1( VAR_2->s, ((void*)0), VAR_5 ) < VAR_5 )
            break;
    }

    return VAR_0;
}
