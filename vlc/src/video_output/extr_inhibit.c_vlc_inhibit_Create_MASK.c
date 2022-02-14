
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int * inhibit; int * p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_8__ {int * module; TYPE_1__ ih; } ;
typedef TYPE_2__ inhibit_t ;


 int * FUNC_0 (TYPE_1__*,char*,int *,int) ;
 TYPE_2__* FUNC_1 (int *,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;

vlc_inhibit_t *FUNC_3 (vlc_object_t *VAR_0)
{
    inhibit_t *VAR_1 = FUNC_1 (VAR_0, sizeof (*VAR_1), "inhibit" );
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    vlc_inhibit_t *VAR_2 = &VAR_1->ih;
    VAR_2->p_sys = ((void*)0);
    VAR_2->inhibit = ((void*)0);

    VAR_1->module = FUNC_0 (VAR_2, "inhibit", ((void*)0), 0);
    if (VAR_1->module == ((void*)0))
    {
        FUNC_2(VAR_2);
        VAR_2 = ((void*)0);
    }
    return VAR_2;
}
