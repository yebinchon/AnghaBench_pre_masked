
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int stream_t ;
struct TYPE_5__ {TYPE_2__* p_SA3D; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
struct TYPE_6__ {scalar_t__ i_ambisonic_type; scalar_t__ i_ambisonic_channel_ordering; scalar_t__ i_ambisonic_normalization; int i_num_channels; int i_ambisonic_order; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    FUNC_2( VAR_0, ((void*)0) );

    uint8_t VAR_3;
    FUNC_0( VAR_3 );
    if ( VAR_3 != 0 )
        FUNC_3( 0 );

    FUNC_0( VAR_2->data.p_SA3D->i_ambisonic_type );
    FUNC_1( VAR_2->data.p_SA3D->i_ambisonic_order );
    FUNC_0( VAR_2->data.p_SA3D->i_ambisonic_channel_ordering );
    FUNC_0( VAR_2->data.p_SA3D->i_ambisonic_normalization );
    FUNC_1( VAR_2->data.p_SA3D->i_num_channels );
    FUNC_3( 1 );
}
