
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int pending_input_events; int pending_output_events; int event_generator; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef scalar_t__ MediaEventType ;
typedef int IMFMediaEvent ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static HRESULT FUNC_5(decoder_t *VAR_4)
{
    decoder_sys_t *VAR_5 = VAR_4->p_sys;
    HRESULT VAR_6;

    IMFMediaEvent *VAR_7 = ((void*)0);
    VAR_6 = FUNC_1(VAR_5->event_generator, VAR_0, &VAR_7);
    if (FUNC_0(VAR_6))
        return VAR_6;
    MediaEventType VAR_8;
    VAR_6 = FUNC_2(VAR_7, &VAR_8);
    FUNC_3(VAR_7);
    if (FUNC_0(VAR_6))
        return VAR_6;

    if (VAR_8 == VAR_3)
        VAR_5->pending_input_events += 1;
    else if (VAR_8 == VAR_2)
        VAR_5->pending_output_events += 1;
    else
        FUNC_4(VAR_4, "Unsupported asynchronous event.");

    return VAR_1;
}
