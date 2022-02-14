
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int sublayer_profile_present_flag; int sublayer_level_present_flag; void** sub_layer_level_idc; int * sub_layer; void* general_level_idc; int general; } ;
typedef TYPE_1__ hevc_profile_tier_level_t ;
typedef int bs_t ;


 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool FUNC_4( bs_t *VAR_0, bool VAR_1,
                                                uint8_t VAR_2,
                                                hevc_profile_tier_level_t *VAR_3 )
{
    if( VAR_1 && !FUNC_3( VAR_0, &VAR_3->general ) )
        return 0;

    if( FUNC_2( VAR_0 ) < 8)
        return 0;

    VAR_3->general_level_idc = FUNC_0( VAR_0, 8 );

    if( VAR_2 > 0 )
    {
        if( FUNC_2( VAR_0 ) < 16 )
            return 0;

        for( uint8_t VAR_4=0; VAR_4< 8; VAR_4++ )
        {
            if( VAR_4 < VAR_2 )
            {
                if( FUNC_1( VAR_0 ) )
                    VAR_3->sublayer_profile_present_flag |= (0x80 >> VAR_4);
                if( FUNC_1( VAR_0 ) )
                    VAR_3->sublayer_level_present_flag |= (0x80 >> VAR_4);
            }
            else
                FUNC_0( VAR_0, 2 );
        }

        for( uint8_t VAR_5=0; VAR_5 < VAR_2; VAR_5++ )
        {
            if( ( VAR_3->sublayer_profile_present_flag & (0x80 >> VAR_5) ) &&
                ! FUNC_3( VAR_0, &VAR_3->sub_layer[VAR_5] ) )
                return 0;

            if( VAR_3->sublayer_profile_present_flag & (0x80 >> VAR_5) )
            {
                if( FUNC_2( VAR_0 ) < 8 )
                    return 0;
                VAR_3->sub_layer_level_idc[VAR_5] = FUNC_0( VAR_0, 8 );
            }
        }
    }

    return 1;
}
