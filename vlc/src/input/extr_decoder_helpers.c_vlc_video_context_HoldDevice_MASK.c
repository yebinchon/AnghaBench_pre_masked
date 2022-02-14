
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
typedef TYPE_1__ vlc_video_context ;
typedef int vlc_decoder_device ;


 int * FUNC_0 (int ) ;

vlc_decoder_device* FUNC_1(vlc_video_context *VAR_0)
{
    if (!VAR_0->device)
        return ((void*)0);
    return FUNC_0( VAR_0->device );
}
