
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_4__ {int timeout_stop_usec; int timeout_abort_usec; scalar_t__ timeout_abort_set; } ;
typedef TYPE_1__ Service ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline usec_t FUNC_1(Service *VAR_0) {
        FUNC_0(VAR_0);
        return VAR_0->timeout_abort_set ? VAR_0->timeout_abort_usec : VAR_0->timeout_stop_usec;
}
