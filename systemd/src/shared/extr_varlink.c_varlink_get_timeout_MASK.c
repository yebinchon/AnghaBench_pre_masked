
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ timeout; int timestamp; } ;
typedef TYPE_1__ Varlink ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

int FUNC_3(Varlink *VAR_6, usec_t *VAR_7) {
        FUNC_1(VAR_6, -VAR_0);

        if (VAR_6->state == VAR_5)
                return -VAR_1;

        if (FUNC_0(VAR_6->state, VAR_3, VAR_4) &&
            VAR_6->timeout != VAR_2) {
                if (VAR_7)
                        *VAR_7 = FUNC_2(VAR_6->timestamp, VAR_6->timeout);
                return 1;
        } else {
                if (VAR_7)
                        *VAR_7 = VAR_2;
                return 0;
        }
}
