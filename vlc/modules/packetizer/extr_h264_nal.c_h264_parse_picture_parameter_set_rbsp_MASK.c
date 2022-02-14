
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {void* i_redundant_pic_present_flag; void* weighted_bipred_idc; void* weighted_pred_flag; void* i_pic_order_present_flag; scalar_t__ i_sps_id; scalar_t__ i_id; } ;
typedef TYPE_1__ h264_picture_parameter_set_t ;
typedef int bs_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static bool FUNC_5( bs_t *VAR_2,
                                                   h264_picture_parameter_set_t *VAR_3 )
{
    uint32_t VAR_4 = FUNC_3( VAR_2 );
    uint32_t VAR_5 = FUNC_3( VAR_2 );
    if( VAR_4 > VAR_0 || VAR_5 > VAR_1 )
        return 0;
    VAR_3->i_id = VAR_4;
    VAR_3->i_sps_id = VAR_5;

    FUNC_4( VAR_2, 1 );
    VAR_3->i_pic_order_present_flag = FUNC_0( VAR_2, 1 );

    unsigned VAR_6 = FUNC_3( VAR_2 ) + 1;
    if( VAR_6 > 8 )
        return 0;
    if( VAR_6 > 1 )
    {
        unsigned VAR_7 = FUNC_3( VAR_2 );
        if( VAR_7 == 0 )
        {
            for( unsigned VAR_8 = 0; VAR_8 < VAR_6; VAR_8++ )
                FUNC_3( VAR_2 );
        }
        else if( VAR_7 == 2 )
        {
            for( unsigned VAR_9 = 0; VAR_9 < VAR_6; VAR_9++ )
            {
                FUNC_3( VAR_2 );
                FUNC_3( VAR_2 );
            }
        }
        else if( VAR_7 > 2 && VAR_7 < 6 )
        {
            FUNC_1( VAR_2 );
            FUNC_3( VAR_2 );
        }
        else if( VAR_7 == 6 )
        {
            unsigned VAR_10 = FUNC_3( VAR_2 ) + 1;
            unsigned VAR_11 = 1;
            while(VAR_6 > 1)
            {
                VAR_11++;
                VAR_6 = ((VAR_6 - 1) >> 1) + 1;
            }
            for( unsigned VAR_12 = 0; VAR_12 < VAR_10; VAR_12++ )
            {
                FUNC_4( VAR_2, VAR_11 );
            }
        }
    }

    FUNC_3( VAR_2 );
    FUNC_3( VAR_2 );
    VAR_3->weighted_pred_flag = FUNC_0( VAR_2, 1 );
    VAR_3->weighted_bipred_idc = FUNC_0( VAR_2, 2 );
    FUNC_2( VAR_2 );
    FUNC_2( VAR_2 );
    FUNC_2( VAR_2 );
    FUNC_0( VAR_2, 1 );
    FUNC_0( VAR_2, 1 );
    VAR_3->i_redundant_pic_present_flag = FUNC_0( VAR_2, 1 );



    return 1;
}
