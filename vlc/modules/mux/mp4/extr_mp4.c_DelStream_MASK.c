
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_14__ {int i_start_dts; int muxh; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_15__ {int p_fifo; scalar_t__ p_sys; } ;
typedef TYPE_3__ sout_input_t ;
struct TYPE_16__ {int tinfo; } ;
typedef TYPE_4__ mp4_stream_t ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_7(sout_mux_t *VAR_2, sout_input_t *VAR_3)
{
    sout_mux_sys_t *VAR_4 = VAR_2->p_sys;
    mp4_stream_t *VAR_5 = (mp4_stream_t*)VAR_3->p_sys;

    if(!FUNC_4(VAR_4->muxh, VAR_0))
    {
        while(FUNC_3(VAR_3->p_fifo) > 0 &&
              FUNC_1(VAR_2, VAR_3, VAR_5) == VAR_1) {};

        if(FUNC_0(VAR_5, VAR_4->i_start_dts, 0))
            FUNC_5(FUNC_2(VAR_2), VAR_5->tinfo);
    }

    FUNC_6(VAR_2, "removing input");
}
