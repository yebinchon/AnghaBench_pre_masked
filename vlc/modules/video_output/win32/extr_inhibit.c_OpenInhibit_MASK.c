
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int inhibit; TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_6__ {int mutex; int cond; int thread; scalar_t__ mask; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7 (vlc_object_t *VAR_6)
{
    vlc_inhibit_t *VAR_7 = (vlc_inhibit_t *)VAR_6;
    vlc_inhibit_sys_t *VAR_8 = VAR_7->p_sys =
            FUNC_6(VAR_6, sizeof(vlc_inhibit_sys_t));
    if (FUNC_0(VAR_7->p_sys == ((void*)0)))
        return VAR_3;

    FUNC_5(&VAR_8->mutex);
    FUNC_3(&VAR_8->cond);
    VAR_8->mask = 0;


    if (FUNC_1(&VAR_8->thread, VAR_1, VAR_7, VAR_5))
    {
        FUNC_2(&VAR_8->cond);
        FUNC_4(&VAR_8->mutex);
        return VAR_2;
    }

    VAR_7->inhibit = VAR_0;
    return VAR_4;
}
