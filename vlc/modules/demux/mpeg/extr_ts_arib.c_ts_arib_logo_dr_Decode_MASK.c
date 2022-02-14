
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int i_logo_version; int i_logo_id; int i_download_data_id; size_t i_logo_char; int p_logo_char; } ;
typedef TYPE_1__ ts_arib_logo_dr_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int const*,size_t) ;
 int FUNC_3 (TYPE_1__*) ;

ts_arib_logo_dr_t * FUNC_4( const uint8_t *VAR_0, size_t VAR_1 )
{
    if( VAR_1 < 2 )
        return ((void*)0);

    ts_arib_logo_dr_t *VAR_2 = FUNC_0( 1, sizeof(*VAR_2) );
    if( VAR_2 )
    {
        VAR_2->i_logo_version = VAR_0[0];
        switch( VAR_0[0] )
        {
            case 1:
                if( VAR_1 == 7 )
                {
                    VAR_2->i_logo_id = ((VAR_0[1] & 0x01) << 8) | VAR_0[2];
                    VAR_2->i_logo_version = ((VAR_0[3] & 0x0F) << 8) | VAR_0[4];
                    VAR_2->i_download_data_id = (VAR_0[5] << 8) | VAR_0[6];
                    return VAR_2;
                }
                break;
            case 2:
                if( VAR_1 == 3 )
                {
                    VAR_2->i_logo_id = ((VAR_0[1] & 0x01) << 8) | VAR_0[2];
                    return VAR_2;
                }
                break;
            case 3:
                if( VAR_1 > 2 )
                {
                    VAR_2->p_logo_char = FUNC_1( VAR_1 - 1 );
                    if( VAR_2->p_logo_char )
                    {
                        VAR_2->i_logo_char = VAR_1 - 1;
                        FUNC_2( VAR_2->p_logo_char, &VAR_0[1], VAR_2->i_logo_char );
                        return VAR_2;
                    }
                }
            default:
                break;
        }
        FUNC_3( VAR_2 );
    }
    return ((void*)0);
}
