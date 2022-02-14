
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int client_to_server_buffer_size; int client_to_server_buffer; int server_to_client_buffer_size; int server_to_client_buffer; } ;
typedef TYPE_1__ Connection ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(Connection *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);

        VAR_1 = FUNC_1(VAR_0, VAR_0->server_to_client_buffer, &VAR_0->server_to_client_buffer_size);
        if (VAR_1 < 0)
                goto fail;

        VAR_1 = FUNC_1(VAR_0, VAR_0->client_to_server_buffer, &VAR_0->client_to_server_buffer_size);
        if (VAR_1 < 0)
                goto fail;

        VAR_1 = FUNC_2(VAR_0);
        if (VAR_1 < 0)
                goto fail;

        return 0;

fail:
        FUNC_3(VAR_0);
        return 0;
}
