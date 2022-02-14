
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ i_clock; scalar_t__ suspended_deadline; int input_buffer; } ;
typedef TYPE_1__ cea708_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 size_t FUNC_2 (int *) ;
 size_t FUNC_3 (int,int) ;

void FUNC_4( cea708_t *VAR_1, vlc_tick_t VAR_2,
                          const uint8_t *VAR_3, size_t VAR_4 )
{

    VAR_1->i_clock = VAR_2;

    for( size_t VAR_5=0; VAR_5<VAR_4; )
    {

        size_t VAR_6 = FUNC_2(&VAR_1->input_buffer);
        if( (VAR_4 - VAR_5) < VAR_6 )
            VAR_6 = (VAR_4 - VAR_5);
        else
            VAR_1->suspended_deadline = VAR_0;

        for( size_t VAR_7=0; VAR_7<VAR_6; VAR_7++ )
        {
            uint8_t VAR_8 = VAR_3[VAR_5+VAR_7];
            FUNC_1( &VAR_1->input_buffer, VAR_8 );
        }

        if( VAR_1->suspended_deadline != VAR_0 )
        {

            if ( VAR_1->suspended_deadline > VAR_1->i_clock )
            {

                if( VAR_6 )
                    VAR_1->i_clock += FUNC_3(1, 1200) * VAR_6;
                continue;
            }
            VAR_1->suspended_deadline = VAR_0;
        }


        FUNC_0( VAR_1 );

        VAR_5 += VAR_6;
    }
}
