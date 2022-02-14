
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vout_window_t ;
struct TYPE_6__ {int * ops; } ;
typedef TYPE_1__ vlc_decoder_device ;
struct vlc_decoder_device_priv {TYPE_1__ device; int rc; } ;
typedef int module_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,char*,char*,int,int ,TYPE_1__*,int *) ;
 struct vlc_decoder_device_priv* FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*) ;

vlc_decoder_device *
FUNC_7(vout_window_t *VAR_1)
{
    struct vlc_decoder_device_priv *VAR_2 =
            FUNC_5(VAR_1, sizeof (*VAR_2));
    if (!VAR_2)
        return ((void*)0);
    char *VAR_3 = FUNC_2(VAR_1, "dec-dev");
    module_t *VAR_4 = FUNC_4(&VAR_2->device, "decoder device", VAR_3,
                                    1, VAR_0, &VAR_2->device,
                                    VAR_1);
    FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0))
    {
        FUNC_6(&VAR_2->device);
        return ((void*)0);
    }
    FUNC_0(VAR_2->device.ops != ((void*)0));
    FUNC_3(&VAR_2->rc);
    return &VAR_2->device;
}
