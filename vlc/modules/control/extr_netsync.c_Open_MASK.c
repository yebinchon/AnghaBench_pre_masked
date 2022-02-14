
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_12__ {int fd; int timeout; int playlist; int * input; scalar_t__ is_master; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 char* FUNC_11 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_12(vlc_object_t *VAR_5)
{
    intf_thread_t *VAR_6 = (intf_thread_t*)VAR_5;
    intf_sys_t *VAR_7;
    int VAR_8;

    if (!FUNC_9(VAR_6, "netsync-master")) {
        char *VAR_9 = FUNC_11(VAR_6, "netsync-master-ip");
        if (VAR_9 == ((void*)0)) {
            FUNC_3(VAR_6, "master address not specified");
            return VAR_2;
        }
        VAR_8 = FUNC_5(FUNC_0(VAR_6), VAR_9, VAR_0, -1);
        FUNC_1(VAR_9);
    } else {
        VAR_8 = FUNC_6(FUNC_0(VAR_6), ((void*)0), VAR_0);
    }

    if (VAR_8 == -1) {
        FUNC_3(VAR_6, "Netsync socket failure");
        return VAR_2;
    }

    VAR_6->p_sys = VAR_7 = FUNC_2(sizeof(*VAR_7));
    if (!VAR_7) {
        FUNC_4(VAR_8);
        return VAR_3;
    }

    VAR_7->fd = VAR_8;
    VAR_7->is_master = FUNC_9(VAR_6, "netsync-master");
    VAR_7->timeout = FUNC_10(VAR_6, "netsync-timeout");
    if (VAR_7->timeout < 500)
        VAR_7->timeout = 500;
    VAR_7->playlist = FUNC_7(VAR_6);
    VAR_7->input = ((void*)0);

    FUNC_8(VAR_7->playlist, "input-current", VAR_1, VAR_6);
    return VAR_4;
}
