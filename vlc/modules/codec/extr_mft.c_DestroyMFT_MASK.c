
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int * mft; int * output_type; int * output_sample; int * input_type; int * event_generator; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int IMFMediaBuffer ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(decoder_t *VAR_0)
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;

    if (VAR_1->event_generator)
        FUNC_0(VAR_1->event_generator);
    if (VAR_1->input_type)
        FUNC_1(VAR_1->input_type);
    if (VAR_1->output_sample)
    {
        IMFMediaBuffer *VAR_2 = ((void*)0);
        HRESULT VAR_3 = FUNC_2(VAR_1->output_sample, 0, &VAR_2);
        if (FUNC_5(VAR_3))
            FUNC_3(VAR_2);
        FUNC_3(VAR_1->output_sample);
    }
    if (VAR_1->output_type)
        FUNC_1(VAR_1->output_type);
    if (VAR_1->mft)
        FUNC_4(VAR_1->mft);

    VAR_1->event_generator = ((void*)0);
    VAR_1->input_type = ((void*)0);
    VAR_1->output_sample = ((void*)0);
    VAR_1->output_type = ((void*)0);
    VAR_1->mft = ((void*)0);
}
