
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ state; int control_command_id; int * control_command; int timer_event_source; } ;
typedef scalar_t__ SocketState ;
typedef TYPE_1__ Socket ;


 int FUNC_0 (scalar_t__,int ,int ,scalar_t__,int ,int ,int ,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int * VAR_13 ;
 int FUNC_10 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(Socket *VAR_14, SocketState VAR_15) {
        SocketState VAR_16;
        FUNC_2(VAR_14);

        if (VAR_14->state != VAR_15)
                FUNC_3(FUNC_1(VAR_14), 0);

        VAR_16 = VAR_14->state;
        VAR_14->state = VAR_15;

        if (!FUNC_0(VAR_15,
                    VAR_7,
                    VAR_5,
                    VAR_6,
                    VAR_9,
                    VAR_11,
                    VAR_10,
                    VAR_8,
                    VAR_2,
                    VAR_1,
                    VAR_0)) {

                VAR_14->timer_event_source = FUNC_5(VAR_14->timer_event_source);
                FUNC_8(VAR_14);
                VAR_14->control_command = ((void*)0);
                VAR_14->control_command_id = VAR_12;
        }

        if (VAR_15 != VAR_3)
                FUNC_9(VAR_14);

        if (!FUNC_0(VAR_15,
                    VAR_5,
                    VAR_6,
                    VAR_3,
                    VAR_4,
                    VAR_9,
                    VAR_11,
                    VAR_10,
                    VAR_0))
                FUNC_6(VAR_14);

        if (VAR_15 != VAR_16)
                FUNC_4(FUNC_1(VAR_14), "Changed %s -> %s", FUNC_7(VAR_16), FUNC_7(VAR_15));

        FUNC_10(FUNC_1(VAR_14), VAR_13[VAR_16], VAR_13[VAR_15], 0);
}
