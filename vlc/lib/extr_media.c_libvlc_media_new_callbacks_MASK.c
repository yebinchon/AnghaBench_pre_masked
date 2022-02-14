
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
typedef void* libvlc_media_seek_cb ;
typedef void* libvlc_media_read_cb ;
typedef void* libvlc_media_open_cb ;
typedef void* libvlc_media_close_cb ;
typedef int libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,void*) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;

libvlc_media_t *FUNC_4(libvlc_instance_t *VAR_0,
                                           libvlc_media_open_cb VAR_1,
                                           libvlc_media_read_cb VAR_2,
                                           libvlc_media_seek_cb VAR_3,
                                           libvlc_media_close_cb VAR_4,
                                           void *VAR_5)
{
    libvlc_media_t *VAR_6 = FUNC_2(VAR_0, "imem://");
    if (FUNC_3(VAR_6 == ((void*)0)))
        return ((void*)0);

    FUNC_0(VAR_2 != ((void*)0));
    FUNC_1(VAR_6->p_input_item, "imem-data", VAR_5);
    FUNC_1(VAR_6->p_input_item, "imem-open", VAR_1);
    FUNC_1(VAR_6->p_input_item, "imem-read", VAR_2);
    FUNC_1(VAR_6->p_input_item, "imem-seek", VAR_3);
    FUNC_1(VAR_6->p_input_item, "imem-close", VAR_4);
    return VAR_6;
}
