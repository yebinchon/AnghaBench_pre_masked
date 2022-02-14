
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pollfd {int fd; scalar_t__ revents; int events; } ;
struct dvb_frontend_event {int status; } ;
typedef int ssize_t ;
struct TYPE_3__ {int demux; int frontend; int obj; int * cam; } ;
typedef TYPE_1__ dvb_device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int,int ,struct dvb_frontend_event*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,void*,size_t) ;
 int FUNC_5 (struct pollfd*,int,int) ;
 int FUNC_6 (scalar_t__) ;

ssize_t FUNC_7 (dvb_device_t *VAR_7, void *VAR_8, size_t VAR_9, int VAR_10)
{
    struct pollfd VAR_11[2];
    int VAR_12;

    if (VAR_7->cam != ((void*)0))
        FUNC_1 (VAR_7->cam);

    VAR_11[0].fd = VAR_7->demux;
    VAR_11[0].events = VAR_4;
    if (VAR_7->frontend != -1)
    {
        VAR_11[1].fd = VAR_7->frontend;
        VAR_11[1].events = VAR_5;
        VAR_12 = 2;
    }
    else
        VAR_12 = 1;

    VAR_6 = 0;
    VAR_12 = FUNC_5 (VAR_11, VAR_12, VAR_10);
    if (VAR_12 == 0)
        VAR_6 = VAR_0;
    if (VAR_12 <= 0)
        return -1;

    if (VAR_7->frontend != -1 && VAR_11[1].revents)
    {
        struct dvb_frontend_event VAR_13;

        if (FUNC_2 (VAR_7->frontend, VAR_3, &VAR_13) < 0)
        {
            if (VAR_6 == VAR_2)
            {
                FUNC_3 (VAR_7->obj, "cannot dequeue events fast enough!");
                return -1;
            }
            FUNC_3 (VAR_7->obj, "cannot dequeue frontend event: %s",
                     FUNC_6(VAR_6));
            return 0;
        }

        FUNC_0(VAR_7->obj, VAR_13.status);
    }

    if (VAR_11[0].revents)
    {
        ssize_t VAR_14 = FUNC_4 (VAR_7->demux, VAR_8, VAR_9);
        if (VAR_14 == -1 && (VAR_6 != VAR_0 && VAR_6 != VAR_1))
        {
            if (VAR_6 == VAR_2)
            {
                FUNC_3 (VAR_7->obj, "cannot demux data fast enough!");
                return -1;
            }
            FUNC_3 (VAR_7->obj, "cannot demux: %s", FUNC_6(VAR_6));
            return 0;
        }
        return VAR_14;
    }

    return -1;
}
