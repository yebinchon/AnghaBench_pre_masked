
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ code; int name; } ;
typedef TYPE_1__ sd_bus_error_map ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const sd_bus_error_map *VAR_1) {
        for (; VAR_1->code != VAR_0; VAR_1++)
                if (!VAR_1->name || VAR_1->code <=0)
                        return 0;
        return 1;
}
