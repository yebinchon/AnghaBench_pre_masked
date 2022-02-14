
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_4__ {int watchdog_original_usec; int watchdog_override_usec; scalar_t__ watchdog_override_enable; } ;
typedef TYPE_1__ Service ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static usec_t FUNC_1(Service *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->watchdog_override_enable)
                return VAR_0->watchdog_override_usec;

        return VAR_0->watchdog_original_usec;
}
