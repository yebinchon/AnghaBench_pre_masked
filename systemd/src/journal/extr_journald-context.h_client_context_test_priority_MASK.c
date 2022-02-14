
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ log_level_max; } ;
typedef TYPE_1__ ClientContext ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(const ClientContext *VAR_0, int VAR_1) {
        if (!VAR_0)
                return 1;

        if (VAR_0->log_level_max < 0)
                return 1;

        return FUNC_0(VAR_1) <= VAR_0->log_level_max;
}
