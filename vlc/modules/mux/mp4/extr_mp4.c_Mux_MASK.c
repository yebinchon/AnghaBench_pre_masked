
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__** pp_inputs; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_10__ {int b_header_sent; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_11__ {scalar_t__ p_sys; } ;
typedef TYPE_3__ sout_input_t ;
typedef int mp4_stream_t ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;

__attribute__((used)) static int FUNC_3(sout_mux_t *VAR_1)
{
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;
    int VAR_3 = VAR_0;

    if(!VAR_2->b_header_sent)
    {
        VAR_3 = FUNC_1(VAR_1);
        if(VAR_3 != VAR_0)
            return VAR_3;
        VAR_2->b_header_sent = 1;
    }

    do
    {
        int VAR_4 = FUNC_2(VAR_1, 2, ((void*)0));
        if (VAR_4 < 0)
            break;

        sout_input_t *VAR_5 = VAR_1->pp_inputs[VAR_4];
        mp4_stream_t *VAR_6 = (mp4_stream_t*)VAR_5->p_sys;

        VAR_3 = FUNC_0(VAR_1, VAR_5, VAR_6);
    } while( VAR_3 == VAR_0 );

    return VAR_3;
}
