
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int loaded_num_nodes; int loaded_nodes_list; } ;
typedef int Node_format ;
typedef TYPE_1__ DHT ;



 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int *,int const*,int,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, const uint8_t *VAR_3, uint32_t VAR_4, uint16_t VAR_5)
{
    DHT *VAR_6 = VAR_2;

    switch (VAR_5) {
        case 128:
            if (VAR_4 == 0)
                break;

            {
                FUNC_2(VAR_6->loaded_nodes_list);

                VAR_6->loaded_nodes_list = FUNC_0(VAR_0, sizeof(Node_format));

                int VAR_7 = FUNC_3(VAR_6->loaded_nodes_list, VAR_0, ((void*)0), VAR_3, VAR_4, 0);

                if (VAR_7 > 0) {
                    VAR_6->loaded_num_nodes = VAR_7;
                } else {
                    VAR_6->loaded_num_nodes = 0;
                }

            }

            break;
    }

    return 0;
}
