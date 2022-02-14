
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_14__ {int autodetect; int session; int * srtp; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_15__ {int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int ,size_t*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7 (demux_t *VAR_0, block_t *VAR_1)
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;

    if (VAR_1->i_buffer < 2)
        goto drop;
    const uint8_t VAR_3 = FUNC_3 (VAR_1);
    if (VAR_3 >= 72 && VAR_3 <= 76)
        goto drop;
    if (FUNC_6(VAR_2->autodetect))
    {
        FUNC_2 (VAR_0, VAR_2->session, VAR_1);
        VAR_2->autodetect = 0;
    }

    FUNC_4 (VAR_0, VAR_2->session, VAR_1);
    return;
drop:
    FUNC_0 (VAR_1);
}
