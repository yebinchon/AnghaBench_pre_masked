
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_9__ {int monotonic; } ;
struct TYPE_8__ {int monotonic; } ;
struct TYPE_11__ {TYPE_2__ state_change_timestamp; TYPE_1__ active_enter_timestamp; } ;
struct TYPE_10__ {int deserialized_state; int timeout_stop_usec; int runtime_max_usec; } ;
typedef TYPE_3__ Scope ;





 TYPE_6__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static usec_t FUNC_3(Scope *VAR_1) {
        FUNC_1(VAR_1);

        switch (VAR_1->deserialized_state) {

        case 130:
                return FUNC_2(FUNC_0(VAR_1)->active_enter_timestamp.monotonic, VAR_1->runtime_max_usec);

        case 129:
        case 128:
                return FUNC_2(FUNC_0(VAR_1)->state_change_timestamp.monotonic, VAR_1->timeout_stop_usec);

        default:
                return VAR_0;
        }
}
