
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_2__ {int local_family; int peer_family; } ;
typedef TYPE_1__ FouTunnel ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int*,union in_addr_union*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int FUNC_4(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        union in_addr_union *VAR_11 = VAR_9;
        FouTunnel *VAR_12 = VAR_10;
        int VAR_13, *VAR_14;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        if (FUNC_3(VAR_6, "Local"))
                VAR_14 = &VAR_12->local_family;
        else
                VAR_14 = &VAR_12->peer_family;

        VAR_13 = FUNC_1(VAR_8, VAR_14, VAR_11);
        if (VAR_13 < 0)
                FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3, VAR_13,
                           "Foo over UDP tunnel '%s' address is invalid, ignoring assignment: %s",
                           VAR_6, VAR_8);

        return 0;
}
