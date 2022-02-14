
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct vlc_a52_bitstream_info {int i_fscod; int i_bsid; int i_bsmod; int i_acmod; int i_lfeon; int i_frmsizcod; } ;
struct TYPE_3__ {int i_extra; int p_extra; } ;
typedef TYPE_1__ mux_extradata_builder_t ;
typedef int bs_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct vlc_a52_bitstream_info*,int const*,size_t) ;

__attribute__((used)) static void FUNC_4(mux_extradata_builder_t *VAR_2,
                                       const uint8_t *VAR_3, size_t VAR_4)
{
    if(VAR_2->i_extra || VAR_4 < VAR_0 ||
       VAR_3[0] != 0x0B || VAR_3[1] != 0x77)
        return;

    struct vlc_a52_bitstream_info VAR_5;
    if(FUNC_3(&VAR_5, &VAR_3[4],
                                     VAR_0 - 4 ) != VAR_1)
        return;

    VAR_2->p_extra = FUNC_2(3);
    if(!VAR_2->p_extra)
        return;
    VAR_2->i_extra = 3;

    bs_t VAR_6;
    FUNC_1(&VAR_6, VAR_2->p_extra, VAR_2->i_extra);
    FUNC_0(&VAR_6, 2, VAR_5.i_fscod);
    FUNC_0(&VAR_6, 5, VAR_5.i_bsid);
    FUNC_0(&VAR_6, 3, VAR_5.i_bsmod);
    FUNC_0(&VAR_6, 3, VAR_5.i_acmod);
    FUNC_0(&VAR_6, 1, VAR_5.i_lfeon);
    FUNC_0(&VAR_6, 5, VAR_5.i_frmsizcod >> 1);
    FUNC_0(&VAR_6, 5, 0);
}
