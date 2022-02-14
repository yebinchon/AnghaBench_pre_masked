
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int hevc_video_parameter_set_t ;
typedef int hevc_sequence_parameter_set_t ;
typedef int hevc_picture_parameter_set_t ;
struct TYPE_3__ {int rg_pps; int rg_sps; int rg_vps; } ;
typedef TYPE_1__ decoder_sys_t ;


 int FUNC_0 (int ,int const*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(decoder_sys_t *VAR_4,
                         const hevc_picture_parameter_set_t *VAR_5,
                         const hevc_sequence_parameter_set_t *VAR_6,
                         const hevc_video_parameter_set_t *VAR_7,
                         uint8_t **VAR_8, int *VAR_9)
{
    uint8_t *VAR_10 = ((void*)0);
    size_t VAR_11 = 0;

    FUNC_0(VAR_2, VAR_7, VAR_4->rg_vps, 1);
    FUNC_0(VAR_2, VAR_7, VAR_4->rg_vps, 0);
    FUNC_0(VAR_1, VAR_6, VAR_4->rg_sps, 1);
    FUNC_0(VAR_1, VAR_6, VAR_4->rg_sps, 0);
    FUNC_0(VAR_0, VAR_5, VAR_4->rg_pps, 1);
    FUNC_0(VAR_0, VAR_5, VAR_4->rg_pps, 0);


    if(VAR_11 <= VAR_3)
    {
        *VAR_8 = VAR_10;
        *VAR_9 = VAR_11;
    }
    else FUNC_1(VAR_10);
}
