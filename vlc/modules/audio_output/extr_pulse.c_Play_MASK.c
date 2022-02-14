
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int pa_stream ;
struct TYPE_10__ {size_t i_buffer; size_t p_buffer; } ;
typedef TYPE_1__ block_t ;
struct TYPE_11__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_12__ {int mainloop; int context; int last_date; int * stream; } ;
typedef TYPE_3__ aout_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,size_t,size_t) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,void**,size_t*) ;
 int FUNC_5 (int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,void*,size_t,int *,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void FUNC_12(audio_output_t *VAR_1, block_t *VAR_2, vlc_tick_t VAR_3)
{
    aout_sys_t *VAR_4 = VAR_1->sys;
    pa_stream *VAR_5 = VAR_4->stream;







    FUNC_8(VAR_4->mainloop);

    VAR_4->last_date = VAR_3;

    if (FUNC_6(VAR_5) > 0)
        FUNC_10(VAR_5, VAR_1, VAR_3);
    while (VAR_2->i_buffer > 0)
    {
        void *VAR_6;
        size_t VAR_7 = VAR_2->i_buffer;

        if (FUNC_4(VAR_5, &VAR_6, &VAR_7))
            FUNC_11(VAR_1, "cannot begin write", VAR_4->context);

        FUNC_1(VAR_6, VAR_2->p_buffer, VAR_7);
        VAR_2->p_buffer += VAR_7;
        VAR_2->i_buffer -= VAR_7;

        if (FUNC_7(VAR_5, VAR_6, VAR_7, ((void*)0), 0, VAR_0) < 0)
            FUNC_11(VAR_1, "cannot write", VAR_4->context);
    }

    FUNC_0(VAR_2);

    FUNC_9(VAR_4->mainloop);
}
