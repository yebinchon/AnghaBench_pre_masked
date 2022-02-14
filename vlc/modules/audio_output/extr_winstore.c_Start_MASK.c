
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int audio_sample_format_t ;
struct TYPE_12__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_13__ {TYPE_4__* stream; int * module; int client; } ;
typedef TYPE_3__ aout_sys_t ;
struct TYPE_11__ {int activate; int device; } ;
struct TYPE_14__ {TYPE_1__ owner; } ;
typedef TYPE_4__ aout_stream_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_4__*,char*,int *,int,int ,TYPE_4__*,int *,int *) ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(audio_output_t *VAR_2, audio_sample_format_t *restrict VAR_3)
{
    aout_sys_t *VAR_4 = VAR_2->sys;
    HRESULT VAR_5;

    aout_stream_t *VAR_6 = FUNC_5(VAR_2, sizeof (*VAR_6));
    if (FUNC_3(VAR_6 == ((void*)0)))
        return -1;

    VAR_6->owner.device = VAR_4->client;
    VAR_6->owner.activate = VAR_0;

    FUNC_0();
    VAR_4->module = FUNC_4(VAR_6, "aout stream", ((void*)0), 0,
                                  VAR_1, VAR_6, VAR_3, &VAR_5);
    FUNC_1();

    if (VAR_4->module == ((void*)0))
    {
        FUNC_6(VAR_6);
        return -1;
    }

    FUNC_2 (VAR_4->stream == ((void*)0));
    VAR_4->stream = VAR_6;
    return 0;
}
