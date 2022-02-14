
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_7__ {scalar_t__* psz_text; scalar_t__ style; } ;
typedef TYPE_1__ text_segment_t ;
struct TYPE_8__ {scalar_t__* characters; int * styles; } ;
typedef TYPE_2__ cea708_text_row_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__* FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static text_segment_t * FUNC_5( const cea708_text_row_t *VAR_1,
                                              uint8_t VAR_2, uint8_t VAR_3,
                                              bool VAR_4 )
{
    text_segment_t *VAR_5 = FUNC_3( ((void*)0) );
    if( !VAR_5 )
        return ((void*)0);

    VAR_5->style = FUNC_4( VAR_0 );
    if( VAR_5->style )
        FUNC_0( &VAR_1->styles[VAR_2], VAR_5->style );

    VAR_5->psz_text = FUNC_1( 1U + !!VAR_4 + (VAR_3 - VAR_2 + 1) * 4U );
    if( !VAR_5->psz_text )
    {
        FUNC_2( VAR_5 );
        return ((void*)0);
    }

    size_t VAR_6 = 0;
    for( uint8_t VAR_7=VAR_2; VAR_7<=VAR_3; VAR_7++ )
    {
        for( size_t VAR_8=0; VAR_8<4; VAR_8++ )
        {
            if( VAR_1->characters[VAR_7 * 4 + VAR_8] != 0 )
                VAR_5->psz_text[VAR_6++] = VAR_1->characters[VAR_7 * 4 + VAR_8];
            else if( VAR_8 == 0 )
                VAR_5->psz_text[VAR_6++] = ' ';
            else
                break;
        }
    }

    if( VAR_4 )
        VAR_5->psz_text[VAR_6++] = '\n';
    VAR_5->psz_text[VAR_6] = '\0';

    return VAR_5;
}
