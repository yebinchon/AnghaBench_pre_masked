
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {char* p_buffer; int i_buffer; scalar_t__ i_pts; scalar_t__ i_dts; int i_length; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6( sout_stream_id_sys_t *VAR_2, block_t *VAR_3 )
{
    uint8_t *VAR_4 = VAR_3->p_buffer;
    int VAR_5, VAR_6, VAR_7;
    VAR_5 = VAR_6 = VAR_3->i_buffer;
    VAR_7 = 0;
    block_t *VAR_8;

    if ( VAR_3->i_buffer > FUNC_3 (VAR_2) )
    {
        FUNC_1(VAR_3);
        return VAR_0;
    }
    if ( VAR_6 % 4 )
    {
        VAR_7 = 4 - ( VAR_6 % 4 );
        VAR_6 += VAR_7;
    }





    VAR_8 = FUNC_0( 12 + VAR_6 );

    if ( VAR_7 )
    {



        char VAR_9, VAR_10;
        VAR_9 = 0x7F;
        VAR_10 = 0xFF;






        VAR_8->p_buffer[12 + VAR_5] = VAR_9;
        switch (VAR_7)
        {
          case 2:
            VAR_8->p_buffer[12 + VAR_5 + 1] = VAR_10;
            break;
          case 3:
            VAR_8->p_buffer[12 + VAR_5 + 1] = VAR_10;
            VAR_8->p_buffer[12 + VAR_5 + 2] = VAR_10;
            break;
        }
    }


    FUNC_4( VAR_2, VAR_8, 0,
                        (VAR_3->i_pts != VAR_1 ? VAR_3->i_pts : VAR_3->i_dts) );

    FUNC_2( &VAR_8->p_buffer[12], VAR_4, VAR_5 );

    VAR_8->i_dts = VAR_3->i_dts;
    VAR_8->i_length = VAR_3->i_length;
    FUNC_1(VAR_3);


    FUNC_5( VAR_2, VAR_8 );
    return VAR_0;
}
