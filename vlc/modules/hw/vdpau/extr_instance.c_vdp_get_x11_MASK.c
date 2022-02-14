
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vdp_t ;
struct TYPE_6__ {int device; int * vdp; struct TYPE_6__* next; } ;
typedef TYPE_1__ vdp_instance_t ;
typedef scalar_t__ VdpStatus ;
typedef int VdpDevice ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,int,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (char const*,int) ;

VdpStatus FUNC_7(const char *VAR_5, int VAR_6,
                      vdp_t **restrict VAR_7, VdpDevice *restrict VAR_8)
{
    vdp_instance_t *VAR_9, *VAR_10;
    VdpStatus VAR_11 = VAR_2;

    if (VAR_5 == ((void*)0))
    {
        VAR_5 = FUNC_0("DISPLAY");
        if (VAR_5 == ((void*)0))
            return VAR_0;
    }

    FUNC_1(&VAR_4);
    VAR_9 = FUNC_6(VAR_5, VAR_6);
    FUNC_2(&VAR_4);
    if (VAR_9 != ((void*)0))
        goto found;

    VAR_11 = FUNC_4(VAR_5, VAR_6, &VAR_9);
    if (VAR_11 != VAR_1)
        return VAR_11;

    FUNC_1(&VAR_4);
    VAR_10 = FUNC_6(VAR_5, VAR_6);
    if (FUNC_3(VAR_10 != ((void*)0)))
    {
        FUNC_2(&VAR_4);
        FUNC_5(VAR_9);
        VAR_9 = VAR_10;
    }
    else
    {
        VAR_9->next = VAR_3;
        VAR_3 = VAR_9;
        FUNC_2(&VAR_4);
    }
found:
    *VAR_7 = VAR_9->vdp;
    *VAR_8 = VAR_9->device;
    return VAR_1;
}
