
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* group; TYPE_1__* user; } ;
struct TYPE_13__ {int stdin_fd; int stdout_fd; int stderr_fd; } ;
struct TYPE_12__ {int netns_storage_socket; } ;
struct TYPE_11__ {int storage_socket; } ;
struct TYPE_10__ {int storage_socket; } ;
typedef TYPE_3__ ExecRuntime ;
typedef TYPE_4__ ExecParameters ;
typedef TYPE_5__ DynamicCreds ;


 int FUNC_0 (int*,size_t*,int ) ;
 int FUNC_1 (TYPE_4__ const*) ;
 int FUNC_2 (int*,size_t) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static int FUNC_4(
                const ExecParameters *VAR_0,
                const ExecRuntime *VAR_1,
                const DynamicCreds *VAR_2,
                int VAR_3,
                int VAR_4,
                int VAR_5,
                int *VAR_6, size_t VAR_7) {

        size_t VAR_8 = 0;
        int VAR_9[VAR_7 + 12];

        FUNC_1(VAR_0);

        if (VAR_0->stdin_fd >= 0)
                VAR_9[VAR_8++] = VAR_0->stdin_fd;
        if (VAR_0->stdout_fd >= 0)
                VAR_9[VAR_8++] = VAR_0->stdout_fd;
        if (VAR_0->stderr_fd >= 0)
                VAR_9[VAR_8++] = VAR_0->stderr_fd;

        if (VAR_4 >= 0)
                VAR_9[VAR_8++] = VAR_4;
        if (VAR_5 >= 0)
                VAR_9[VAR_8++] = VAR_5;
        if (VAR_7 > 0) {
                FUNC_3(VAR_9 + VAR_8, VAR_6, sizeof(int) * VAR_7);
                VAR_8 += VAR_7;
        }

        if (VAR_1)
                FUNC_0(VAR_9, &VAR_8, VAR_1->netns_storage_socket);

        if (VAR_2) {
                if (VAR_2->user)
                        FUNC_0(VAR_9, &VAR_8, VAR_2->user->storage_socket);
                if (VAR_2->group)
                        FUNC_0(VAR_9, &VAR_8, VAR_2->group->storage_socket);
        }

        if (VAR_3 >= 0)
                VAR_9[VAR_8++] = VAR_3;

        return FUNC_2(VAR_9, VAR_8);
}
