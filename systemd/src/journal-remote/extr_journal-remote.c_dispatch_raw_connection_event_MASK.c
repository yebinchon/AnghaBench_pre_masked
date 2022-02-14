
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union sockaddr_union {int dummy; } sockaddr_union ;
typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_3__ {int size; int type; } ;
typedef TYPE_1__ SocketAddress ;
typedef int RemoteServer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,TYPE_1__*,char**) ;
 int FUNC_1 (int *,int,char*,int) ;

__attribute__((used)) static int FUNC_2(
                sd_event_source *VAR_2,
                int VAR_3,
                uint32_t VAR_4,
                void *VAR_5) {

        RemoteServer *VAR_6 = VAR_5;
        int VAR_7;
        SocketAddress VAR_8 = {
                .size = sizeof(union sockaddr_union),
                .type = VAR_1,
        };
        char *VAR_9 = ((void*)0);

        VAR_7 = FUNC_0("raw", VAR_3, &VAR_8, &VAR_9);
        if (VAR_7 == -VAR_0)
                return 0;
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_1(VAR_6, VAR_7, VAR_9, 1);
}
