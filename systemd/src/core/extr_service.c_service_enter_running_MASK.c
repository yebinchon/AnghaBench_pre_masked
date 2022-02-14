
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_17__ {scalar_t__ result; scalar_t__ notify_state; scalar_t__ remain_after_exit; int runtime_max_usec; } ;
struct TYPE_16__ {int monotonic; } ;
struct TYPE_15__ {TYPE_1__ active_enter_timestamp; } ;
typedef scalar_t__ ServiceResult ;
typedef TYPE_2__ Service ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_13__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(Service *VAR_6, ServiceResult VAR_7) {
        FUNC_1(VAR_6);

        if (VAR_6->result == VAR_5)
                VAR_6->result = VAR_7;

        FUNC_9(VAR_6);

        if (VAR_6->result != VAR_5)
                FUNC_4(VAR_6, VAR_4, VAR_7);
        else if (FUNC_7(VAR_6)) {


                if (VAR_6->notify_state == VAR_0)
                        FUNC_3(VAR_6);
                else if (VAR_6->notify_state == VAR_1)
                        FUNC_6(VAR_6);
                else {
                        FUNC_8(VAR_6, VAR_3);
                        FUNC_2(VAR_6, FUNC_10(FUNC_0(VAR_6)->active_enter_timestamp.monotonic, VAR_6->runtime_max_usec));
                }

        } else if (VAR_6->remain_after_exit)
                FUNC_8(VAR_6, VAR_2);
        else
                FUNC_5(VAR_6, VAR_5);
}
