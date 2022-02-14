
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int p_out; int b_spu_enable; } ;
typedef TYPE_2__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(demux_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
    demux_sys_t *VAR_7 = VAR_4->p_sys;
    int VAR_8 = -1;


    VAR_6--;

    if (VAR_5 == VAR_0) {
        VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_6);
    } else if (VAR_5 == VAR_1) {
        VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_6);
    }

    if (VAR_8 > 0)
    {
        if (VAR_5 == VAR_1 && !VAR_7->b_spu_enable)
            FUNC_1(VAR_7->p_out, VAR_3, (int)VAR_5, VAR_8);
        else
            FUNC_1(VAR_7->p_out, VAR_2, (int)VAR_5, VAR_8);
    }
}
