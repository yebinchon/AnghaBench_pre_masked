
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_12__ {int i_pos; int i_mdat_pos; int muxh; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_13__ {scalar_t__ b; } ;
typedef TYPE_3__ bo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(sout_mux_t *VAR_3)
{
    sout_mux_sys_t *VAR_4 = VAR_3->p_sys;
    bo_t *VAR_5;

    if (!FUNC_5(VAR_4->muxh, VAR_0))
    {

        VAR_5 = FUNC_4(VAR_4->muxh);
        if(!VAR_5)
            return VAR_1;

        VAR_4->i_pos += FUNC_1(VAR_5);
        VAR_4->i_mdat_pos = VAR_4->i_pos;
        FUNC_3(VAR_3, VAR_5);
    }


    VAR_5 = FUNC_2("mdat");
    if(!VAR_5)
        return VAR_1;

    FUNC_0(VAR_5, 0);

    if(VAR_5->b)
        VAR_4->i_pos += FUNC_1(VAR_5);

    FUNC_3(VAR_3, VAR_5);

    return VAR_2;
}
