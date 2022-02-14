
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_7__ {int i_end_date; } ;
struct TYPE_9__ {TYPE_1__ audio; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_10__ {scalar_t__ i_pts; } ;
typedef TYPE_4__ block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(decoder_t *VAR_1, block_t **VAR_2)
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    block_t *VAR_4 = *VAR_2;


    if (FUNC_0(&VAR_3->audio.i_end_date) == VAR_0)
    {
        if (VAR_4->i_pts == VAR_0)
            return 0;
        FUNC_1(&VAR_3->audio.i_end_date, VAR_4->i_pts);
    }

    return 1;
}
