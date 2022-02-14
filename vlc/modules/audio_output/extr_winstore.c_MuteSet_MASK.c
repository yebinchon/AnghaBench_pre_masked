
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int * client; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int ISimpleAudioVolume ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int **) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(audio_output_t *VAR_2, bool VAR_3)
{
    aout_sys_t *VAR_4 = VAR_2->sys;
    if( FUNC_6( VAR_4->client == ((void*)0) ) )
        return VAR_1;
    HRESULT VAR_5;
    ISimpleAudioVolume *VAR_6 = ((void*)0);

    VAR_5 = FUNC_1(VAR_4->client, &VAR_0, &VAR_6);
    if (FUNC_0(VAR_5))
    {
        FUNC_5(VAR_2, "cannot get volume service (error 0x%lX)", VAR_5);
        goto done;
    }

    VAR_5 = FUNC_3(VAR_6, VAR_3, ((void*)0));
    if (FUNC_0(VAR_5))
    {
        FUNC_5(VAR_2, "cannot set mute (error 0x%lX)", VAR_5);
        goto done;
    }

done:
    FUNC_2(VAR_6);

    return FUNC_4(VAR_5) ? 0 : -1;
}
