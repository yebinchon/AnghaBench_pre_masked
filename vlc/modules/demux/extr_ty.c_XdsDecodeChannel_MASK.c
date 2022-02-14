
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int psz_channel_number; int psz_channel_call_letter; int psz_channel_name; } ;
struct TYPE_8__ {int i_type; TYPE_1__ meta; } ;
typedef TYPE_2__ xds_t ;
struct TYPE_9__ {int i_data; int * p_data; } ;
typedef TYPE_3__ xds_packet_t ;


 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int FUNC_1 (char*,int *,int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3( xds_t *VAR_1, xds_packet_t *VAR_2 )
{
    char VAR_3[2*32+1];
    char VAR_4[2*32+1];

    switch( VAR_1->i_type )
    {
    case 0x01:
        if( VAR_2->i_data < 2 )
            return;
        FUNC_1( VAR_3, VAR_2->p_data, VAR_2->i_data );
        if( FUNC_0( VAR_1, &VAR_1->meta.psz_channel_name, VAR_3 ) )
        {


        }
        break;

    case 0x02:
        if( VAR_2->i_data < 4 )
            return;

        FUNC_1( VAR_3, VAR_2->p_data, 4 );
        if( FUNC_0( VAR_1, &VAR_1->meta.psz_channel_call_letter, VAR_3 ) )
        {


        }
        if( VAR_2->i_data >= 6 )
        {
            FUNC_1( VAR_4, &VAR_2->p_data[4], 2 );
            if( FUNC_0( VAR_1, &VAR_1->meta.psz_channel_number, VAR_4 ) )
            {


            }
        }
        else
        {
            if( FUNC_0( VAR_1, &VAR_1->meta.psz_channel_number, ((void*)0) ) )
            {


            }
        }
        break;
    case 0x03:

        break;
    case 0x04:

        break;
    default:



        break;
    }
}
