
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ atom; } ;
typedef TYPE_1__ xcb_property_notify_event_t ;
struct TYPE_9__ {int response_type; } ;
typedef TYPE_2__ xcb_generic_event_t ;
typedef int xcb_connection_t ;
struct pollfd {int fd; int events; } ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ services_discovery_t ;
struct TYPE_11__ {scalar_t__ net_client_list; int * conn; } ;
typedef TYPE_4__ services_discovery_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;

__attribute__((used)) static void *FUNC_8 (void *VAR_2)
{
    services_discovery_t *VAR_3 = VAR_2;
    services_discovery_sys_t *VAR_4 = VAR_3->p_sys;
    xcb_connection_t *VAR_5 = VAR_4->conn;
    int VAR_6 = FUNC_6 (VAR_5);
    if (VAR_6 == -1)
        return ((void*)0);

    while (!FUNC_5 (VAR_5))
    {
        xcb_generic_event_t *VAR_7;
        struct pollfd VAR_8 = { .fd = VAR_6, .events = VAR_0, };

        FUNC_2 (&VAR_8, 1, -1);

        int VAR_9 = FUNC_4 ();
        while ((VAR_7 = FUNC_7 (VAR_5)) != ((void*)0))
        {
            if ((VAR_7->response_type & 0x7F) == VAR_1)
            {
                 const xcb_property_notify_event_t *VAR_10 =
                     (xcb_property_notify_event_t *)VAR_7;
                 if (VAR_10->atom == VAR_4->net_client_list)
                     FUNC_0 (VAR_3);
            }
            FUNC_1 (VAR_7);
        }
        FUNC_3 (VAR_9);
    }
    return ((void*)0);
}
