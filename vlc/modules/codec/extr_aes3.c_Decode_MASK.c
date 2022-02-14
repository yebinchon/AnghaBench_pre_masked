
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_16__ {int end_date; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_17__ {int i_buffer; size_t* p_buffer; scalar_t__ i_pts; scalar_t__ i_length; } ;
typedef TYPE_3__ block_t ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int*,int*,TYPE_3__*,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 TYPE_3__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_8( decoder_t *VAR_3, block_t *VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_3->p_sys;
    block_t *VAR_6;
    int VAR_7, VAR_8;

    VAR_4 = FUNC_0( VAR_3, &VAR_7, &VAR_8, VAR_4, 0 );
    if( !VAR_4 )
        return VAR_1;

    if( FUNC_7( VAR_3 ) )
    {
        VAR_6 = ((void*)0);
        goto exit;
    }

    VAR_6 = FUNC_5( VAR_3, VAR_7 );
    if( VAR_6 == ((void*)0) )
        goto exit;

    VAR_6->i_pts = FUNC_3( &VAR_5->end_date );
    VAR_6->i_length = FUNC_4( &VAR_5->end_date,
                                      VAR_7 ) - VAR_6->i_pts;

    VAR_4->i_buffer -= VAR_0;
    VAR_4->p_buffer += VAR_0;

    if( VAR_8 == 24 )
    {
        uint32_t *VAR_9 = (uint32_t *)VAR_6->p_buffer;

        while( VAR_4->i_buffer / 7 )
        {
            *(VAR_9++) = (VAR_2[VAR_4->p_buffer[0]] << 8)
                        | (VAR_2[VAR_4->p_buffer[1]] << 16)
                        | (VAR_2[VAR_4->p_buffer[2]] << 24);
            *(VAR_9++) = ((VAR_2[VAR_4->p_buffer[3]] << 4)
                        | (VAR_2[VAR_4->p_buffer[4]] << 12)
                        | (VAR_2[VAR_4->p_buffer[5]] << 20)
                        | (VAR_2[VAR_4->p_buffer[6]] << 28)) & 0xFFFFFF00;

            VAR_4->i_buffer -= 7;
            VAR_4->p_buffer += 7;
        }

    }
    else if( VAR_8 == 20 )
    {
        uint32_t *VAR_10 = (uint32_t *)VAR_6->p_buffer;

        while( VAR_4->i_buffer / 6 )
        {
            *(VAR_10++) = (VAR_2[VAR_4->p_buffer[0]] << 12)
                       | (VAR_2[VAR_4->p_buffer[1]] << 20)
                       | (VAR_2[VAR_4->p_buffer[2]] << 28);
            *(VAR_10++) = (VAR_2[VAR_4->p_buffer[3]] << 12)
                       | (VAR_2[VAR_4->p_buffer[4]] << 20)
                       | (VAR_2[VAR_4->p_buffer[5]] << 28);

            VAR_4->i_buffer -= 6;
            VAR_4->p_buffer += 6;
        }
    }
    else
    {
        uint16_t *VAR_11 = (uint16_t *)VAR_6->p_buffer;

        FUNC_1( VAR_8 == 16 );

        while( VAR_4->i_buffer / 5 )
        {
            *(VAR_11++) = VAR_2[VAR_4->p_buffer[0]]
                        |(VAR_2[VAR_4->p_buffer[1]] << 8);
            *(VAR_11++) = (VAR_2[VAR_4->p_buffer[2]] >> 4)
                       | (VAR_2[VAR_4->p_buffer[3]] << 4)
                       | (VAR_2[VAR_4->p_buffer[4]] << 12);

            VAR_4->i_buffer -= 5;
            VAR_4->p_buffer += 5;
        }
    }

exit:
    FUNC_2( VAR_4 );
    if( VAR_6 != ((void*)0) )
        FUNC_6( VAR_3, VAR_6 );
    return VAR_1;
}
