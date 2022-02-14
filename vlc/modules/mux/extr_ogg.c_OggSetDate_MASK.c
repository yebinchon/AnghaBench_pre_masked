
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {int i_dts; int i_length; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ block_t ;



__attribute__((used)) static void FUNC_0( block_t *VAR_0, vlc_tick_t VAR_1, vlc_tick_t VAR_2 )
{
    int VAR_3;
    block_t *VAR_4;
    vlc_tick_t VAR_5;

    for( VAR_4 = VAR_0, VAR_3 = 0; VAR_4 != ((void*)0); VAR_4 = VAR_4->p_next )
    {
        VAR_3++;
    }

    if( VAR_3 == 0 ) return;

    VAR_5 = VAR_2 / VAR_3;

    for( VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->p_next )
    {
        VAR_4->i_dts = VAR_1;
        VAR_4->i_length = VAR_5;

        VAR_1 += VAR_5;
    }
}
