
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int cache; int * dec_device; scalar_t__ dest_pics; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__* const) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *) ;

void
FUNC_4(vlc_object_t *VAR_0)
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *const VAR_2 = VAR_1->p_sys;

    if (VAR_2->dest_pics)
        FUNC_2(VAR_2->dest_pics);
    if (VAR_2->dec_device != ((void*)0))
        FUNC_3(VAR_1, VAR_2->dec_device);
    FUNC_0(&VAR_2->cache);

    FUNC_1(VAR_2);
}
