
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t client_id_len; void* client_id; } ;
typedef TYPE_1__ sd_dhcp_lease ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void const*,size_t) ;
 void* FUNC_3 (void*) ;

int FUNC_4(sd_dhcp_lease *VAR_2, const void *VAR_3, size_t VAR_4) {
        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(VAR_3 || VAR_4 <= 0, -VAR_0);

        if (VAR_4 <= 0)
                VAR_2->client_id = FUNC_3(VAR_2->client_id);
        else {
                void *VAR_5;

                VAR_5 = FUNC_2(VAR_3, VAR_4);
                if (!VAR_5)
                        return -VAR_1;

                FUNC_1(VAR_2->client_id);
                VAR_2->client_id = VAR_5;
                VAR_2->client_id_len = VAR_4;
        }

        return 0;
}
