
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {int fd; int origlen; int thread; int * first; scalar_t__ session_count; int wait; int lock; int interval; int orig; int group; } ;
typedef TYPE_1__ sap_address_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,struct sockaddr*,int*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char const*,int ,int) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static sap_address_t *FUNC_11 (vlc_object_t *VAR_3, const char *VAR_4)
{
    int VAR_5 = FUNC_5 (VAR_3, VAR_4, VAR_0, 255);
    if (VAR_5 == -1)
        return ((void*)0);

    sap_address_t *VAR_6 = FUNC_2 (sizeof (*VAR_6));
    if (VAR_6 == ((void*)0))
    {
        FUNC_4 (VAR_5);
        return ((void*)0);
    }

    FUNC_6 (VAR_6->group, VAR_4, sizeof (VAR_6->group));
    VAR_6->fd = VAR_5;
    VAR_6->origlen = sizeof (VAR_6->orig);
    FUNC_1 (VAR_5, (struct sockaddr *)&VAR_6->orig, &VAR_6->origlen);

    VAR_6->interval = FUNC_7 (VAR_3, "sap-interval");
    FUNC_10 (&VAR_6->lock);
    FUNC_9 (&VAR_6->wait);
    VAR_6->session_count = 0;
    VAR_6->first = ((void*)0);

    if (FUNC_8 (&VAR_6->thread, VAR_1, VAR_6, VAR_2))
    {
        FUNC_3 (VAR_3, "unable to spawn SAP announce thread");
        FUNC_4 (VAR_5);
        FUNC_0 (VAR_6);
        return ((void*)0);
    }
    return VAR_6;
}
