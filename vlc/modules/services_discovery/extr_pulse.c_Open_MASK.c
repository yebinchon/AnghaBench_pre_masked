
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int description; TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_8__ {int mainloop; int * root; int * context; } ;
typedef TYPE_2__ services_discovery_sys_t ;
typedef int pa_subscription_mask_t ;
typedef int pa_operation ;
typedef int pa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int * FUNC_4 (int *,int ,TYPE_1__*) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 int * FUNC_6 (int *,int const,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12 (vlc_object_t *VAR_6)
{
    services_discovery_t *VAR_7 = (services_discovery_t *)VAR_6;
    pa_operation *VAR_8;
    pa_context *VAR_9;

    services_discovery_sys_t *VAR_10 = FUNC_3 (sizeof (*VAR_10));
    if (FUNC_10(VAR_10 == ((void*)0)))
        return VAR_4;

    VAR_9 = FUNC_11 (VAR_6, &VAR_10->mainloop);
    if (VAR_9 == ((void*)0))
    {
        FUNC_1 (VAR_10);
        return VAR_3;
    }

    VAR_7->p_sys = VAR_10;
    VAR_7->description = FUNC_0("Audio capture");
    VAR_10->context = VAR_9;
    VAR_10->root = ((void*)0);


    const pa_subscription_mask_t VAR_11 = VAR_1;
    FUNC_8 (VAR_10->mainloop);
    FUNC_5 (VAR_9, VAR_0, VAR_7);
    VAR_8 = FUNC_6 (VAR_9, VAR_11, ((void*)0), ((void*)0));
    if (FUNC_2(VAR_8 != ((void*)0)))
        FUNC_7 (VAR_8);


    VAR_8 = FUNC_4 (VAR_9, VAR_2, VAR_7);
    if (FUNC_2(VAR_8 != ((void*)0)))
    {


        FUNC_7 (VAR_8);
    }
    FUNC_9 (VAR_10->mainloop);
    return VAR_5;






}
