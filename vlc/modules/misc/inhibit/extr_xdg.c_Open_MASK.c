
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int inhibit; TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_7__ {int attr; int timer; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10 (vlc_object_t *VAR_7)
{
    vlc_inhibit_t *VAR_8 = (vlc_inhibit_t *)VAR_7;
    vlc_inhibit_sys_t *VAR_9 = FUNC_1 (sizeof (*VAR_9));
    if (VAR_9 == ((void*)0))
        return VAR_5;

    FUNC_3 (&VAR_9->attr);

    {
        sigset_t VAR_10;

        FUNC_8 (&VAR_10);
        FUNC_6 (&VAR_9->attr, &VAR_10);
        FUNC_7 (&VAR_10, VAR_3);
        FUNC_5 (&VAR_9->attr, &VAR_10);
        FUNC_4 (&VAR_9->attr, VAR_1
                                              | VAR_2);
    }

    VAR_8->p_sys = VAR_9;
    if (FUNC_9 (&VAR_9->timer, VAR_4, VAR_8))
    {
        FUNC_2 (&VAR_9->attr);
        FUNC_0 (VAR_9);
        return VAR_5;
    }

    VAR_8->inhibit = VAR_0;
    return VAR_6;
}
