
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t req_opts_size; int* req_opts; int req_opts_allocated; int state; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int ,int) ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;





 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(sd_dhcp_client *VAR_6, uint8_t VAR_7) {
        size_t VAR_8;

        FUNC_2(VAR_6, -VAR_4);
        FUNC_2(FUNC_1(VAR_6->state, VAR_0, VAR_1), -VAR_2);

        switch(VAR_7) {

        case 129:
        case 130:
        case 131:
        case 128:
        case 132:
                return -VAR_4;

        default:
                break;
        }

        for (VAR_8 = 0; VAR_8 < VAR_6->req_opts_size; VAR_8++)
                if (VAR_6->req_opts[VAR_8] == VAR_7)
                        return -VAR_3;

        if (!FUNC_0(VAR_6->req_opts, VAR_6->req_opts_allocated,
                            VAR_6->req_opts_size + 1))
                return -VAR_5;

        VAR_6->req_opts[VAR_6->req_opts_size++] = VAR_7;

        return 0;
}
