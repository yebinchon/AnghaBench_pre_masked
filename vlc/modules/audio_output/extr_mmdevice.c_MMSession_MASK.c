
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_11__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_12__ {char* requested_device; char* acquired_device; float requested_volume; float gain; scalar_t__ requested_mute; int * dev; int lock; int session_events; int duck; int work; int ready; } ;
typedef TYPE_2__ aout_sys_t ;
typedef char* LPWSTR ;
typedef int * LPCGUID ;
typedef int ISimpleAudioVolume ;
typedef int IMMDeviceEnumerator ;
typedef int IAudioSessionManager2 ;
typedef int IAudioSessionManager ;
typedef int IAudioSessionControl2 ;
typedef int IAudioSessionControl ;
typedef int IAudioEndpointVolume ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 char* FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int *,float*,float*,float*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,char*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int ,int **) ;
 int FUNC_17 (int *,int *,scalar_t__,int **) ;
 int FUNC_18 (int *,int *,void**) ;
 int FUNC_19 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_20 (int *,int ,int ,int **) ;
 int FUNC_21 (int *,char*,int **) ;
 int FUNC_22 (int *,int *,int ,int *,void**) ;
 int FUNC_23 (int *,char**) ;
 int FUNC_24 (int *) ;
 int VAR_8 ;
 int FUNC_25 (int *,float*) ;
 int FUNC_26 (int *,scalar_t__*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,float,int *) ;
 int FUNC_29 (int *,scalar_t__,int *) ;
 int FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (int ) ;
 int VAR_9 ;
 int FUNC_32 (int *,int *,int ) ;
 scalar_t__ VAR_10 ;
 char* FUNC_33 (char*) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (TYPE_1__*,char*) ;
 int FUNC_36 (TYPE_1__*,int) ;
 int FUNC_37 (TYPE_1__*,int ) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (float) ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_40 (char*) ;
 scalar_t__ FUNC_41 (int ) ;
 int FUNC_42 (TYPE_1__*,char*,...) ;
 int FUNC_43 (TYPE_1__*,char*,char*,...) ;
 scalar_t__ FUNC_44 (TYPE_1__*,char*) ;
 char* FUNC_45 (TYPE_1__*,char*) ;

__attribute__((used)) static HRESULT FUNC_46(audio_output_t *VAR_15, IMMDeviceEnumerator *VAR_16)
{
    aout_sys_t *VAR_17 = VAR_15->sys;
    IAudioSessionManager *VAR_18;
    IAudioSessionControl *VAR_19;
    ISimpleAudioVolume *VAR_20;
    IAudioEndpointVolume *VAR_21;
    void *VAR_22;
    HRESULT VAR_23;

    FUNC_38(VAR_17->requested_device != ((void*)0));
    FUNC_38(VAR_17->dev == ((void*)0));



    if (VAR_17->acquired_device != VAR_17->requested_device
     && VAR_17->acquired_device != VAR_11)
        FUNC_40(VAR_17->acquired_device);
    if (VAR_17->requested_device != VAR_11)
    {
        FUNC_42(VAR_15, "using selected device %ls", VAR_17->requested_device);
        VAR_23 = FUNC_21(VAR_16, VAR_17->requested_device, &VAR_17->dev);
        if (FUNC_2(VAR_23))
            FUNC_43(VAR_15, "cannot get selected device %ls (error 0x%lX)",
                    VAR_17->requested_device, VAR_23);
        VAR_17->acquired_device = VAR_17->requested_device;
    }
    else
        VAR_23 = VAR_0;

    while (VAR_23 == VAR_0)
    {

        FUNC_42(VAR_15, "using default device");
        VAR_23 = FUNC_20(VAR_16, VAR_14,
                                                         VAR_13, &VAR_17->dev);
        if (FUNC_2(VAR_23))
        {
            FUNC_43(VAR_15, "cannot get default device (error 0x%lX)", VAR_23);
            VAR_17->acquired_device = ((void*)0);
        }
        else
            VAR_17->acquired_device = VAR_11;
    }

    VAR_17->requested_device = ((void*)0);
    FUNC_34(&VAR_17->ready);

    if (FUNC_31(VAR_23))
    {
        LPWSTR VAR_24;

        if (VAR_17->acquired_device == VAR_11)
            FUNC_35(VAR_15, VAR_12);
        else
        {
            VAR_23 = FUNC_23(VAR_17->dev, &VAR_24);
            if (FUNC_31(VAR_23))
            {
                char *VAR_25 = FUNC_3(VAR_24);
                FUNC_0(VAR_24);
                if (FUNC_41(VAR_25 != ((void*)0)))
                {
                    FUNC_35(VAR_15, VAR_25);
                    FUNC_40(VAR_25);
                }
            }
        }
    }
    else
    {
        FUNC_43(VAR_15, "cannot get device identifier (error 0x%lX)", VAR_23);
        return VAR_23;
    }


    VAR_23 = FUNC_22(VAR_17->dev, &VAR_6,
                            VAR_1, ((void*)0), &VAR_22);
    VAR_18 = VAR_22;
    if (FUNC_31(VAR_23))
    {
        LPCGUID VAR_26 = FUNC_44(VAR_15, "volume-save") ? &VAR_3 : ((void*)0);


        VAR_23 = FUNC_16(VAR_18, VAR_26, 0,
                                                         &VAR_19);
        if (FUNC_31(VAR_23))
        {
            char *VAR_27 = FUNC_45(VAR_15, "user-agent");
            if (VAR_27 != ((void*)0))
            {
                wchar_t *VAR_28 = FUNC_33(VAR_27);
                if (FUNC_41(VAR_28 != ((void*)0)))
                {
                    FUNC_11(VAR_19, VAR_28, ((void*)0));
                    FUNC_40(VAR_28);
                }
                FUNC_40(VAR_27);
            }

            FUNC_9(VAR_19,
                                                         &VAR_17->session_events);
        }
        else
            FUNC_43(VAR_15, "cannot get session control (error 0x%lX)", VAR_23);

        VAR_23 = FUNC_17(VAR_18, VAR_26, VAR_2,
                                                       &VAR_20);
        if (FUNC_2(VAR_23))
            FUNC_43(VAR_15, "cannot get simple volume (error 0x%lX)", VAR_23);


        wchar_t *VAR_29 = ((void*)0);

        VAR_23 = FUNC_18(VAR_18,
                                              &VAR_5, &VAR_22);
        if (FUNC_31(VAR_23))
        {
            IAudioSessionControl2 *VAR_30 = VAR_22;

            FUNC_8(VAR_30, VAR_2);
            VAR_23 = FUNC_6(VAR_30, &VAR_29);
            if (FUNC_2(VAR_23))
                VAR_29 = ((void*)0);
            FUNC_7(VAR_30);
        }
        else
            FUNC_42(VAR_15, "version 2 session control unavailable");

        VAR_23 = FUNC_18(VAR_18,
                                              &VAR_7, &VAR_22);
        if (FUNC_31(VAR_23))
        {
            IAudioSessionManager2 *VAR_31 = VAR_22;

            FUNC_13(VAR_31, VAR_29,
                                                           &VAR_17->duck);
            FUNC_14(VAR_31);
        }
        else
            FUNC_42(VAR_15, "version 2 session management unavailable");

        FUNC_0(VAR_29);
    }
    else
    {
        FUNC_43(VAR_15, "cannot activate session manager (error 0x%lX)", VAR_23);
        VAR_19 = ((void*)0);
        VAR_20 = ((void*)0);
    }

    VAR_23 = FUNC_22(VAR_17->dev, &VAR_4,
                            VAR_1, ((void*)0), &VAR_22);
    VAR_21 = VAR_22;
    if (FUNC_31(VAR_23))
    {
        float VAR_32, VAR_33, VAR_34;

        VAR_23 = FUNC_4(VAR_21, &VAR_32, &VAR_33, &VAR_34);
        if (FUNC_31(VAR_23))
            FUNC_42(VAR_15, "volume from %+f dB to %+f dB with %f dB increments",
                    VAR_32, VAR_33, VAR_34);
        else
            FUNC_43(VAR_15, "cannot get volume range (error 0x%lX)", VAR_23);
    }
    else
        FUNC_43(VAR_15, "cannot activate endpoint volume (error 0x%lX)", VAR_23);


    while (VAR_17->requested_device == ((void*)0))
    {
        if (VAR_20 != ((void*)0))
        {
            float VAR_35;

            VAR_35 = VAR_17->requested_volume;
            if (VAR_35 >= 0.f)
            {
                VAR_23 = FUNC_28(VAR_20, VAR_35, ((void*)0));
                if (FUNC_2(VAR_23))
                    FUNC_43(VAR_15, "cannot set master volume (error 0x%lX)",
                            VAR_23);
            }
            VAR_17->requested_volume = -1.f;

            VAR_23 = FUNC_25(VAR_20, &VAR_35);
            if (FUNC_31(VAR_23))
                FUNC_37(VAR_15, FUNC_39(VAR_35 * VAR_17->gain));
            else
                FUNC_43(VAR_15, "cannot get master volume (error 0x%lX)", VAR_23);

            BOOL VAR_36;

            VAR_23 = FUNC_26(VAR_20, &VAR_36);
            if (FUNC_31(VAR_23))
                FUNC_36(VAR_15, VAR_36 != VAR_2);
            else
                FUNC_43(VAR_15, "cannot get mute (error 0x%lX)", VAR_23);

            if (VAR_17->requested_mute >= 0)
            {
                VAR_36 = VAR_17->requested_mute ? VAR_10 : VAR_2;

                VAR_23 = FUNC_29(VAR_20, VAR_36, ((void*)0));
                if (FUNC_2(VAR_23))
                    FUNC_43(VAR_15, "cannot set mute (error 0x%lX)", VAR_23);
            }
            VAR_17->requested_mute = -1;
        }

        FUNC_32(&VAR_17->work, &VAR_17->lock, VAR_8);
    }
    FUNC_30(&VAR_17->lock);

    if (VAR_21 != ((void*)0))
        FUNC_5(VAR_21);

    if (VAR_18 != ((void*)0))
    {
        VAR_23 = FUNC_18(VAR_18,
                                              &VAR_7, &VAR_22);
        if (FUNC_31(VAR_23))
        {
            IAudioSessionManager2 *VAR_37 = VAR_22;

            FUNC_15(VAR_37, &VAR_17->duck);
            FUNC_14(VAR_37);
        }

        if (VAR_20 != ((void*)0))
            FUNC_27(VAR_20);

        if (VAR_19 != ((void*)0))
        {
            FUNC_12(VAR_19,
                                                         &VAR_17->session_events);
            FUNC_10(VAR_19);
        }

        FUNC_19(VAR_18);
    }

    FUNC_1(&VAR_17->lock);
    FUNC_24(VAR_17->dev);
    VAR_17->dev = ((void*)0);
    return VAR_9;
}
