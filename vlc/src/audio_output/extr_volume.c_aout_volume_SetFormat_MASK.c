
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_7__ {scalar_t__ format; } ;
typedef TYPE_1__ audio_volume_t ;
struct TYPE_8__ {int * module; TYPE_1__ object; } ;
typedef TYPE_2__ aout_volume_t ;


 int * FUNC_0 (TYPE_1__*,char*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(aout_volume_t *VAR_0, vlc_fourcc_t VAR_1)
{
    if (FUNC_3(VAR_0 == ((void*)0)))
        return -1;

    audio_volume_t *VAR_2 = &VAR_0->object;
    if (VAR_0->module != ((void*)0))
    {
        if (VAR_2->format == VAR_1)
        {
            FUNC_2 (VAR_2, "retaining sample format");
            return 0;
        }
        FUNC_2 (VAR_2, "changing sample format");
        FUNC_1(VAR_2, VAR_0->module);
    }

    VAR_2->format = VAR_1;
    VAR_0->module = FUNC_0(VAR_2, "audio volume", ((void*)0), 0);
    if (VAR_0->module == ((void*)0))
        return -1;
    return 0;
}
