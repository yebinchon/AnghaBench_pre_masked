
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef scalar_t__ vlc_fourcc_t ;
struct hxxx_helper {int b_need_xvcC; scalar_t__ i_codec; int * p_obj; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hxxx_helper*,int ,int) ;

void
FUNC_2(struct hxxx_helper *VAR_2, vlc_object_t *VAR_3,
                 vlc_fourcc_t VAR_4, bool VAR_5)
{
    FUNC_0(VAR_4 == VAR_0 || VAR_4 == VAR_1);

    FUNC_1(VAR_2, 0, sizeof(struct hxxx_helper));
    VAR_2->p_obj = VAR_3;
    VAR_2->i_codec = VAR_4;
    VAR_2->b_need_xvcC = VAR_5;
}
