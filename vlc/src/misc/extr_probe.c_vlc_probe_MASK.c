
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t count; int * list; } ;
typedef TYPE_1__ vlc_probe_t ;
typedef int vlc_object_t ;
typedef int module_t ;


 int * FUNC_0 (TYPE_1__*,char const*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int,char*) ;
 int FUNC_5 (TYPE_1__*) ;

void *FUNC_6 (vlc_object_t *VAR_0,
                 const char *VAR_1, size_t *restrict VAR_2)
{
    vlc_probe_t *VAR_3 = FUNC_4 (VAR_0, sizeof(*VAR_3), "probe");
    if (FUNC_3(VAR_3 == ((void*)0)))
    {
        *VAR_2 = 0;
        return ((void*)0);
    }
    VAR_3->list = ((void*)0);
    VAR_3->count = 0;

    module_t *VAR_4 = FUNC_0 (VAR_3, VAR_1, ((void*)0), 0);
    if (VAR_4 != ((void*)0))
    {
        FUNC_2 (VAR_3, "probing halted");
        FUNC_1 (VAR_3, VAR_4);
    }

    void *VAR_5 = VAR_3->list;
    *VAR_2 = VAR_3->count;
    FUNC_5(VAR_3);
    return VAR_5;
}
