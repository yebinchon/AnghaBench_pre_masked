
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int asfinfo; } ;
typedef TYPE_1__ mp4_track_t ;
typedef int asf_track_info_t ;
typedef int asf_packet_sys_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;

__attribute__((used)) static asf_track_info_t * FUNC_1( asf_packet_sys_t *VAR_0,
                                               uint8_t VAR_1 )
{
    mp4_track_t *VAR_2 = FUNC_0( VAR_0, VAR_1 );
    if ( VAR_2 )
        return &VAR_2->asfinfo;
    else
        return ((void*)0);
}
