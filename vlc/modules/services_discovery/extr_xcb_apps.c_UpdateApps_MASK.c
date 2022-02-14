
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_connection_t ;
typedef void app ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {void* apps; int net_client_list; int root_window; int * conn; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 void* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,void**,int ) ;
 int FUNC_4 (void*,int (*) (void*)) ;
 void** FUNC_5 (int *,void**,int ) ;
 void** FUNC_6 (void*,void**,int ) ;
 int FUNC_7 (int *,int,int ,int ,int ,int ,int) ;
 int * FUNC_8 (int *,int ,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11 (services_discovery_t *VAR_2)
{
    services_discovery_sys_t *VAR_3 = VAR_2->p_sys;
    xcb_connection_t *VAR_4 = VAR_3->conn;

    xcb_get_property_reply_t *VAR_5 =
        FUNC_8 (VAR_4,
            FUNC_7 (VAR_4, 0, VAR_3->root_window,
                              VAR_3->net_client_list, VAR_0, 0, 1024),
            ((void*)0));
    if (VAR_5 == ((void*)0))
        return;

    xcb_window_t *VAR_6 = FUNC_9 (VAR_5);
    int VAR_7 = FUNC_10 (VAR_5) / 4;
    void *VAR_8 = ((void*)0), *VAR_9 = VAR_3->apps;

    for (int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
    {
        xcb_window_t VAR_11 = *(VAR_6++);
        struct app *VAR_12;

        void **VAR_13 = FUNC_5 (&VAR_11, &VAR_9, VAR_1);
        if (VAR_13 != ((void*)0))
        {
            VAR_12 = *VAR_13;
            FUNC_3 (VAR_12, &VAR_9, VAR_1);
        }
        else
        {
            VAR_12 = FUNC_0 (VAR_2, VAR_11);
            if (VAR_12 == ((void*)0))
                continue;
        }

        VAR_13 = FUNC_6 (VAR_12, &VAR_8, VAR_1);
        if (VAR_13 == ((void*)0) || *VAR_13 != VAR_12 )
            FUNC_1 (VAR_12);
    }
    FUNC_2 (VAR_5);


    FUNC_4 (VAR_9, FUNC_1);
    VAR_3->apps = VAR_8;
}
