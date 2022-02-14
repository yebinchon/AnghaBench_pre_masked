
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {int i_buffer; scalar_t__ i_pts; scalar_t__ i_dts; int i_length; scalar_t__* p_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*,int,scalar_t__) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8( sout_stream_id_sys_t *VAR_5, block_t *VAR_6 )
{
    uint8_t *VAR_7 = VAR_6->p_buffer;
    int VAR_8 = VAR_6->i_buffer;
    int VAR_9;
    int VAR_10 = FUNC_5 (VAR_5) - VAR_0;
    int VAR_11;
    int VAR_12;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15 = 0;
    uint16_t VAR_16;

    if( VAR_8 < 2 )
    {
        FUNC_3(VAR_6);
        return VAR_2;
    }
    if( VAR_7[0] || VAR_7[1] )
    {
        FUNC_3(VAR_6);
        return VAR_2;
    }

    VAR_7 += 2;
    VAR_8 -= 2;
    VAR_11 = ( VAR_8 + VAR_10 - 1 ) / VAR_10;

    for( VAR_9 = 0; VAR_9 < VAR_11; VAR_9++ )
    {
        int VAR_17 = FUNC_1( VAR_10, VAR_8 );
        block_t *VAR_18 = FUNC_2( VAR_1 + VAR_17 );
        VAR_12 = (VAR_9 == 0) ? 1 : 0;
        VAR_16 = ( VAR_12 << 10 )|
            ( VAR_13 << 9 )|
            ( VAR_14 << 3 )|
              VAR_15;



        FUNC_6( VAR_5, VAR_18, (VAR_9 == VAR_11 - 1)?1:0,
                          VAR_6->i_pts != VAR_4 ? VAR_6->i_pts : VAR_6->i_dts );


        FUNC_0( VAR_18->p_buffer + 12, VAR_16 );
        FUNC_4( &VAR_18->p_buffer[VAR_1], VAR_7, VAR_17 );

        VAR_18->i_dts = VAR_6->i_dts + VAR_9 * VAR_6->i_length / VAR_11;
        VAR_18->i_length = VAR_6->i_length / VAR_11;

        FUNC_7( VAR_5, VAR_18 );

        VAR_7 += VAR_17;
        VAR_8 -= VAR_17;
    }

    FUNC_3(VAR_6);
    return VAR_3;
}
