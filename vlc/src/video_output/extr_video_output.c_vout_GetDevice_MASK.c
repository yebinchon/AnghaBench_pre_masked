
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vout; int * fmt; } ;
typedef TYPE_1__ vout_device_configuration_t ;
typedef int vlc_decoder_device ;
typedef int video_format_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int **) ;

vlc_decoder_device *FUNC_5(const vout_device_configuration_t *VAR_0)
{
    vlc_decoder_device *VAR_1 = ((void*)0);

    FUNC_2(VAR_0->fmt != ((void*)0));

    if (!FUNC_0(VAR_0->fmt))
        return ((void*)0);

    video_format_t VAR_2;
    FUNC_1(&VAR_2, VAR_0->fmt);

    int VAR_3 = FUNC_4(VAR_0->vout, &VAR_2, &VAR_1);
    FUNC_3(&VAR_2);
    if (VAR_3 != 0)
        return ((void*)0);
    return VAR_1;
}
