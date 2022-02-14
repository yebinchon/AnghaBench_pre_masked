
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int module_t ;
typedef int audio_sample_format_t ;
struct TYPE_22__ {int headphones; } ;
struct TYPE_23__ {TYPE_2__ current_sink_info; TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_24__ {int gain; TYPE_5__* stream; int lock; int * dev; scalar_t__ request_device_restart; } ;
typedef TYPE_4__ aout_sys_t ;
struct TYPE_21__ {int * device; int activate; } ;
struct TYPE_25__ {TYPE_1__ owner; } ;
typedef TYPE_5__ aout_stream_t ;
struct TYPE_26__ {int uintVal; } ;
typedef TYPE_6__ PROPVARIANT ;
typedef int IPropertyStore ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;


 scalar_t__ FUNC_6 (int *,int ,int **) ;
 scalar_t__ FUNC_7 (int *,int *,TYPE_6__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;



 int VAR_3 ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 char* FUNC_19 (TYPE_3__*,char*) ;
 int * FUNC_20 (TYPE_5__*,char*,char*,int,int ,TYPE_5__*,int *,scalar_t__*) ;
 TYPE_5__* FUNC_21 (TYPE_3__*,int) ;
 int FUNC_22 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_23(audio_output_t *VAR_6, audio_sample_format_t *restrict VAR_7)
{
    aout_sys_t *VAR_8 = VAR_6->sys;

    const bool VAR_9 = FUNC_1(VAR_7);
    const bool VAR_10 = FUNC_0(VAR_7);
    if (VAR_9 || VAR_10)
    {
        switch (FUNC_18(VAR_6, "mmdevice-passthrough"))
        {
            case 130:
                return -1;
            case 129:
                if (VAR_10)
                    return -1;

            case 128:
                break;
        }
    }

    aout_stream_t *VAR_11 = FUNC_21(VAR_6, sizeof (*VAR_11));
    if (FUNC_17(VAR_11 == ((void*)0)))
        return -1;

    VAR_11->owner.activate = VAR_2;

    FUNC_5();
    FUNC_4(&VAR_8->lock);

    if ((VAR_8->request_device_restart && FUNC_2(VAR_6) != 0)
      || VAR_8->dev == ((void*)0))
    {


        FUNC_9(&VAR_8->lock);
        FUNC_10();
        FUNC_22(VAR_11);
        return -1;
    }

    module_t *VAR_12;

    for (;;)
    {
        char *VAR_13 = FUNC_19(VAR_6, "mmdevice-backend");
        HRESULT VAR_14;
        VAR_11->owner.device = VAR_8->dev;

        VAR_12 = FUNC_20(VAR_11, "aout stream", VAR_13,
                                 0, VAR_5, VAR_11, VAR_7, &VAR_14);
        FUNC_16(VAR_13);

        int VAR_15 = -1;
        if (VAR_14 == VAR_0)
        {
            VAR_15 = FUNC_2(VAR_6);
        }
        else if (VAR_14 == VAR_1)
        {



            VAR_15 = FUNC_3(VAR_6, ((void*)0));
        }
        if (VAR_15 != 0)
            break;
    }

    if (VAR_12 != ((void*)0))
    {
        IPropertyStore *VAR_16;
        HRESULT VAR_17 = FUNC_6(VAR_8->dev, VAR_4, &VAR_16);
        if (FUNC_13(VAR_17))
        {
            PROPVARIANT VAR_18;
            FUNC_12(&VAR_18);
            VAR_17 = FUNC_7(VAR_16, &VAR_3, &VAR_18);
            if (FUNC_13(VAR_17))
            {
                switch (VAR_18.uintVal)
                {
                    case 132:
                    case 131:
                        VAR_6->current_sink_info.headphones = 1;
                        break;
                }
                FUNC_11(&VAR_18);
            }
            FUNC_8(VAR_16);
        }
    }

    FUNC_9(&VAR_8->lock);
    FUNC_10();

    if (VAR_12 == ((void*)0))
    {
        FUNC_22(VAR_11);
        return -1;
    }

    FUNC_15 (VAR_8->stream == ((void*)0));
    VAR_8->stream = VAR_11;
    FUNC_14(VAR_6, VAR_8->gain);
    return 0;
}
