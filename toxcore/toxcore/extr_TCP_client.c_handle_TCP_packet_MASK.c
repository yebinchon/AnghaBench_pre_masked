
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_6__ {TYPE_1__* connections; int data_callback_object; int (* data_callback ) (int ,int ,int,int const*,int) ;int onion_callback_object; int (* onion_callback ) (int ,int const*,int) ;int oob_data_callback_object; int (* oob_data_callback ) (int ,int const*,int const*,int ) ;int ping_id; int ping_response_id; int status_callback_object; int (* status_callback ) (int ,int ,int,int) ;int response_callback_object; int (* response_callback ) (int ,int,int *) ;} ;
struct TYPE_5__ {int status; int number; int * public_key; } ;
typedef TYPE_2__ TCP_Client_Connection ;


 int const VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int const*,int const*,int ) ;
 int FUNC_6 (int ,int const*,int) ;
 int FUNC_7 (int ,int ,int,int const*,int) ;

__attribute__((used)) static int FUNC_8(TCP_Client_Connection *VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    if (VAR_4 <= 1)
        return -1;

    switch (VAR_3[0]) {
        case 128: {
            if (VAR_4 != 1 + 1 + VAR_1)
                return -1;

            if (VAR_3[1] < VAR_0)
                return 0;

            uint8_t VAR_5 = VAR_3[1] - VAR_0;

            if (VAR_2->connections[VAR_5].status != 0)
                return 0;

            VAR_2->connections[VAR_5].status = 1;
            VAR_2->connections[VAR_5].number = ~0;
            FUNC_0(VAR_2->connections[VAR_5].public_key, VAR_3 + 2, VAR_1);

            if (VAR_2->response_callback)
                VAR_2->response_callback(VAR_2->response_callback_object, VAR_5, VAR_2->connections[VAR_5].public_key);

            return 0;
        }

        case 134: {
            if (VAR_4 != 1 + 1)
                return -1;

            if (VAR_3[1] < VAR_0)
                return -1;

            uint8_t VAR_6 = VAR_3[1] - VAR_0;

            if (VAR_2->connections[VAR_6].status != 1)
                return 0;

            VAR_2->connections[VAR_6].status = 2;

            if (VAR_2->status_callback)
                VAR_2->status_callback(VAR_2->status_callback_object, VAR_2->connections[VAR_6].number, VAR_6,
                                      VAR_2->connections[VAR_6].status);

            return 0;
        }

        case 133: {
            if (VAR_4 != 1 + 1)
                return -1;

            if (VAR_3[1] < VAR_0)
                return -1;

            uint8_t VAR_7 = VAR_3[1] - VAR_0;

            if (VAR_2->connections[VAR_7].status == 0)
                return 0;

            if (VAR_2->connections[VAR_7].status != 2)
                return 0;

            VAR_2->connections[VAR_7].status = 1;

            if (VAR_2->status_callback)
                VAR_2->status_callback(VAR_2->status_callback_object, VAR_2->connections[VAR_7].number, VAR_7,
                                      VAR_2->connections[VAR_7].status);

            return 0;
        }

        case 130: {
            if (VAR_4 != 1 + sizeof(uint64_t))
                return -1;

            uint64_t VAR_8;
            FUNC_0(&VAR_8, VAR_3 + 1, sizeof(uint64_t));
            VAR_2->ping_response_id = VAR_8;
            FUNC_1(VAR_2);
            return 0;
        }

        case 129: {
            if (VAR_4 != 1 + sizeof(uint64_t))
                return -1;

            uint64_t VAR_9;
            FUNC_0(&VAR_9, VAR_3 + 1, sizeof(uint64_t));

            if (VAR_9) {
                if (VAR_9 == VAR_2->ping_id) {
                    VAR_2->ping_id = 0;
                }

                return 0;
            } else {
                return -1;
            }
        }

        case 131: {
            if (VAR_4 <= 1 + VAR_1)
                return -1;

            if (VAR_2->oob_data_callback)
                VAR_2->oob_data_callback(VAR_2->oob_data_callback_object, VAR_3 + 1, VAR_3 + 1 + VAR_1,
                                        VAR_4 - (1 + VAR_1));

            return 0;
        }

        case 132: {
            VAR_2->onion_callback(VAR_2->onion_callback_object, VAR_3 + 1, VAR_4 - 1);
            return 0;
        }

        default: {
            if (VAR_3[0] < VAR_0)
                return -1;

            uint8_t VAR_10 = VAR_3[0] - VAR_0;

            if (VAR_2->data_callback)
                VAR_2->data_callback(VAR_2->data_callback_object, VAR_2->connections[VAR_10].number, VAR_10, VAR_3 + 1, VAR_4 - 1);
        }
    }

    return 0;
}
