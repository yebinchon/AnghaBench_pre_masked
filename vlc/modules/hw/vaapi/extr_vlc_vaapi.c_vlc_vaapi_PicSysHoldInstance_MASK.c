
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_decoder_device ;
struct TYPE_4__ {TYPE_1__* instance; } ;
typedef TYPE_2__ picture_sys_t ;
typedef int VADisplay ;
struct TYPE_3__ {int dec_device; int va_dpy; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;

vlc_decoder_device *
FUNC_2(void *VAR_0, VADisplay *VAR_1)
{
    picture_sys_t *VAR_2 = (picture_sys_t *)VAR_0;
    FUNC_0(VAR_2->instance != ((void*)0));
    *VAR_1 = VAR_2->instance->va_dpy;
    return FUNC_1(VAR_2->instance->dec_device);
}
