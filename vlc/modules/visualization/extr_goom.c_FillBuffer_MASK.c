
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_7__ {int i_blocks; int i_channels; TYPE_2__** pp_blocks; } ;
typedef TYPE_1__ goom_thread_t ;
typedef int date_t ;
struct TYPE_8__ {int i_buffer; scalar_t__ i_pts; int p_buffer; } ;
typedef TYPE_2__ block_t ;


 int FUNC_0 (float) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (TYPE_2__**,TYPE_2__**,int) ;

__attribute__((used)) static int FUNC_7( int16_t *VAR_3, int *VAR_4,
                       date_t *VAR_5, date_t *VAR_6,
                       goom_thread_t *VAR_7 )
{
    int VAR_8 = 0;
    block_t *VAR_9;

    while( *VAR_4 < 512 )
    {
        if( !VAR_7->i_blocks ) return VAR_0;

        VAR_9 = VAR_7->pp_blocks[0];
        VAR_8 = FUNC_1( (unsigned)(512 - *VAR_4),
                VAR_9->i_buffer / sizeof(float) / VAR_7->i_channels );


        if( VAR_9->i_pts != VAR_2 &&
            VAR_9->i_pts != FUNC_3( VAR_6 ) )
        {
           FUNC_5( VAR_6, VAR_9->i_pts );
        }
        VAR_9->i_pts = VAR_2;

        FUNC_4( VAR_6, VAR_8 );

        while( VAR_8 > 0 )
        {
            float *VAR_10 = (float *)VAR_9->p_buffer;

            VAR_3[*VAR_4] = FUNC_0( VAR_10[0] );
            if( VAR_7->i_channels > 1 )
                VAR_3[512 + *VAR_4] = FUNC_0( VAR_10[1] );

            (*VAR_4)++;
            VAR_9->p_buffer += (sizeof(float) * VAR_7->i_channels);
            VAR_9->i_buffer -= (sizeof(float) * VAR_7->i_channels);
            VAR_8--;
        }

        if( !VAR_9->i_buffer )
        {
            FUNC_2( VAR_9 );
            VAR_7->i_blocks--;
            if( VAR_7->i_blocks )
                FUNC_6( VAR_7->pp_blocks, VAR_7->pp_blocks + 1,
                         VAR_7->i_blocks * sizeof(block_t *) );
        }
    }

    *VAR_5 = *VAR_6;
    *VAR_4 = 0;
    return VAR_1;
}
