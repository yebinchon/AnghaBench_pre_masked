
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef int ping ;
struct TYPE_9__ {scalar_t__ status; scalar_t__ last_pinged; scalar_t__ ping_id; } ;
struct TYPE_8__ {scalar_t__ last_run_pinged; size_t size_accepted_connections; TYPE_2__* accepted_connection_array; } ;
typedef TYPE_1__ TCP_Server ;
typedef TYPE_2__ TCP_Secure_Connection ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (int *,scalar_t__*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int *,int,int) ;

__attribute__((used)) static void FUNC_8(TCP_Server *VAR_4)
{







    uint32_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4->size_accepted_connections; ++VAR_5) {
        TCP_Secure_Connection *VAR_6 = &VAR_4->accepted_connection_array[VAR_5];

        if (VAR_6->status != VAR_3)
            continue;

        if (FUNC_1(VAR_6->last_pinged, VAR_1)) {
            uint8_t VAR_7[1 + sizeof(uint64_t)];
            VAR_7[0] = VAR_0;
            uint64_t VAR_8 = FUNC_4();

            if (!VAR_8)
                ++VAR_8;

            FUNC_3(VAR_7 + 1, &VAR_8, sizeof(uint64_t));
            int VAR_9 = FUNC_7(VAR_6, VAR_7, sizeof(VAR_7), 1);

            if (VAR_9 == 1) {
                VAR_6->last_pinged = FUNC_6();
                VAR_6->ping_id = VAR_8;
            } else {
                if (FUNC_1(VAR_6->last_pinged, VAR_1 + VAR_2)) {
                    FUNC_2(VAR_4, VAR_5);
                    continue;
                }
            }
        }

        if (VAR_6->ping_id && FUNC_1(VAR_6->last_pinged, VAR_2)) {
            FUNC_2(VAR_4, VAR_5);
            continue;
        }

        FUNC_5(VAR_6);



        FUNC_0(VAR_4, VAR_5);


    }
}
