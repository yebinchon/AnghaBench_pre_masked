
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_media_source_t ;
struct TYPE_5__ {int media_sources; int lock; } ;
typedef TYPE_1__ vlc_media_source_provider_t ;
struct TYPE_6__ {int node; } ;


 TYPE_4__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static vlc_media_source_t *
FUNC_5(vlc_media_source_provider_t *VAR_0,
                              const char *VAR_1)
{
    FUNC_4(&VAR_0->lock);

    vlc_media_source_t *VAR_2 = FUNC_3(VAR_0, VAR_1);
    if (FUNC_1(!VAR_2))
        return ((void*)0);

    FUNC_2(&FUNC_0(VAR_2)->node, &VAR_0->media_sources);
    return VAR_2;
}
