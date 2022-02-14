
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int demux_t ;
typedef int IMMDeviceEnumerator ;
typedef int IMMDevice ;
typedef void IAudioClient ;
typedef int HRESULT ;
typedef int ERole ;
typedef scalar_t__ EDataFlow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,scalar_t__,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,char*) ;

__attribute__((used)) static IAudioClient *FUNC_9(demux_t *VAR_8, bool *restrict VAR_9)
{
    IMMDeviceEnumerator *VAR_10;
    IMMDevice *VAR_11;
    void *VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_3, &VAR_12);
    if (FUNC_1(VAR_13))
    {
        FUNC_7(VAR_8, "cannot create device enumerator (error 0x%lX)", VAR_13);
        return ((void*)0);
    }
    VAR_10 = VAR_12;

    bool VAR_14 = FUNC_8(VAR_8, "wasapi-loopback");
    EDataFlow VAR_15 = VAR_14 ? VAR_7 : VAR_4;
    ERole VAR_16 = VAR_14 ? VAR_6 : VAR_5;

    VAR_13 = FUNC_3(VAR_10, VAR_15, VAR_16, &VAR_11);
    FUNC_4(VAR_10);
    if (FUNC_1(VAR_13))
    {
        FUNC_7(VAR_8, "cannot get default device (error 0x%lX)", VAR_13);
        return ((void*)0);
    }

    VAR_13 = FUNC_5(VAR_11, &VAR_2, VAR_0, ((void*)0), &VAR_12);
    *VAR_9 = FUNC_2(VAR_11) == VAR_7;
    FUNC_6(VAR_11);
    if (FUNC_1(VAR_13))
        FUNC_7(VAR_8, "cannot activate device (error 0x%lX)", VAR_13);
    return VAR_12;
}
