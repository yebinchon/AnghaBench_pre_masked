
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int media_sources; int lock; } ;
typedef TYPE_1__ vlc_media_source_provider_t ;


 TYPE_1__* FUNC_0 (int *,int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

vlc_media_source_provider_t *
FUNC_4(vlc_object_t *VAR_0)
{
    vlc_media_source_provider_t *VAR_1 =
            FUNC_0(VAR_0, sizeof(*VAR_1), "media-source-provider");
    if (FUNC_1(!VAR_1))
        return ((void*)0);

    FUNC_3(&VAR_1->lock);
    FUNC_2(&VAR_1->media_sources);
    return VAR_1;
}
