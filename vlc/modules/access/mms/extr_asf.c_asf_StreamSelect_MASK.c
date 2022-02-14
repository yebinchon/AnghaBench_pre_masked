
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* stream; } ;
typedef TYPE_2__ asf_header_t ;
struct TYPE_4__ {scalar_t__ i_cat; int i_selected; scalar_t__ i_bitrate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0 ( asf_header_t *VAR_3,
                              int VAR_4,
                              bool VAR_5, bool VAR_6, bool VAR_7 )
{

    unsigned VAR_8;
    int VAR_9, VAR_10;
    int VAR_11;




    VAR_9 = 0;
    VAR_10 = 0;
    VAR_11 = 0;
    if( VAR_5 )
    {

        for( VAR_8 = 1; VAR_8 < 128; VAR_8++ )
        {
            if( VAR_3->stream[VAR_8].i_cat != VAR_1 )
            {
                VAR_3->stream[VAR_8].i_selected = 1;
            }
        }
        return;
    }
    else
    {
        for( VAR_8 = 0; VAR_8 < 128; VAR_8++ )
        {

            VAR_3->stream[VAR_8].i_selected = 0;
        }
    }
    for( VAR_8 = 1; VAR_8 < 128; VAR_8++ )
    {
        if( VAR_3->stream[VAR_8].i_cat == VAR_1 )
        {
            continue;
        }
        else if( VAR_3->stream[VAR_8].i_cat == VAR_0 && VAR_6 &&
                 ( VAR_9 <= 0 ||
                    ( ( ( VAR_3->stream[VAR_8].i_bitrate > VAR_3->stream[VAR_9].i_bitrate &&
                          ( VAR_11 + VAR_3->stream[VAR_8].i_bitrate - VAR_3->stream[VAR_9].i_bitrate
                                            < VAR_4 || !VAR_4) ) ||
                        ( VAR_3->stream[VAR_8].i_bitrate < VAR_3->stream[VAR_9].i_bitrate &&
                              VAR_4 != 0 && VAR_11 > VAR_4 )
                      ) ) ) )
        {

            if( VAR_9 > 0 )
            {
                VAR_3->stream[VAR_9].i_selected = 0;
                if( VAR_3->stream[VAR_9].i_bitrate> 0 )
                {
                    VAR_11 -= VAR_3->stream[VAR_9].i_bitrate;
                }
            }

            VAR_3->stream[VAR_8].i_selected = 1;
            if( VAR_3->stream[VAR_8].i_bitrate> 0 )
            {
                VAR_11 += VAR_3->stream[VAR_8].i_bitrate;
            }
            VAR_9 = VAR_8;
        }
        else if( VAR_3->stream[VAR_8].i_cat == VAR_2 && VAR_7 &&
                 ( VAR_10 <= 0 ||
                    (
                        ( ( VAR_3->stream[VAR_8].i_bitrate > VAR_3->stream[VAR_10].i_bitrate &&
                            ( VAR_11 + VAR_3->stream[VAR_8].i_bitrate - VAR_3->stream[VAR_10].i_bitrate
                                            < VAR_4 || !VAR_4) ) ||
                          ( VAR_3->stream[VAR_8].i_bitrate < VAR_3->stream[VAR_10].i_bitrate &&
                            VAR_4 != 0 && VAR_11 > VAR_4 )
                        ) ) ) )
        {

            if( VAR_10 > 0 )
            {
                VAR_3->stream[VAR_10].i_selected = 0;
                if( VAR_3->stream[VAR_10].i_bitrate> 0 )
                {
                    VAR_11 -= VAR_3->stream[VAR_10].i_bitrate;
                }
            }

            VAR_3->stream[VAR_8].i_selected = 1;
            if( VAR_3->stream[VAR_8].i_bitrate> 0 )
            {
                VAR_11 += VAR_3->stream[VAR_8].i_bitrate;
            }
            VAR_10 = VAR_8;
        }

    }
}
