
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_clock_t ;
struct TYPE_4__ {int lock; int rc; int * master; } ;
typedef TYPE_1__ vlc_clock_main_t ;
struct vlc_clock_cbs {int dummy; } ;


 int * FUNC_0 (TYPE_1__*,int ,struct vlc_clock_cbs const*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

vlc_clock_t *FUNC_6(vlc_clock_main_t *VAR_0,
                                         const struct vlc_clock_cbs *VAR_1,
                                         void *VAR_2)
{

    vlc_clock_t *VAR_3 = FUNC_0(VAR_0, 0, VAR_1, VAR_2);
    if (!VAR_3)
        return ((void*)0);

    FUNC_4(&VAR_0->lock);
    if (VAR_0->master != ((void*)0))
    {
        FUNC_1(VAR_0->master);
        FUNC_3(VAR_0->master);
    }
    FUNC_2(VAR_3);
    VAR_0->master = VAR_3;
    VAR_0->rc++;
    FUNC_5(&VAR_0->lock);

    return VAR_3;
}
