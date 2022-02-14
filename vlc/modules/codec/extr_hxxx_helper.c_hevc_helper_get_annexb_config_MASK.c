
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hxxx_helper_nal {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_vps_count; scalar_t__ i_sps_count; scalar_t__ i_pps_count; struct hxxx_helper_nal const* pps_list; struct hxxx_helper_nal const* sps_list; struct hxxx_helper_nal const* vps_list; } ;
struct hxxx_helper {TYPE_1__ hevc; } ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct hxxx_helper_nal const**,size_t const*,size_t const*,int) ;

block_t *
FUNC_1(const struct hxxx_helper *VAR_3)
{
    if (VAR_3->hevc.i_vps_count == 0 || VAR_3->hevc.i_sps_count == 0 ||
        VAR_3->hevc.i_pps_count == 0 )
        return ((void*)0);

    const struct hxxx_helper_nal *VAR_4[] = {
        VAR_3->hevc.vps_list, VAR_3->hevc.sps_list, VAR_3->hevc.pps_list };
    const size_t VAR_5[] = { VAR_3->hevc.i_vps_count, VAR_3->hevc.i_sps_count,
                                    VAR_3->hevc.i_pps_count };
    const size_t VAR_6[] = { VAR_2+1, VAR_1+1, VAR_0+1 };

    return FUNC_0( VAR_4, VAR_5, VAR_6, 3 );
}
