
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bus_header {int dummy; } ;
struct TYPE_3__ {int fields_size; } ;
typedef TYPE_1__ sd_bus_message ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline size_t FUNC_1(sd_bus_message *VAR_0) {
        return
                sizeof(struct bus_header) +
                FUNC_0(VAR_0->fields_size);
}
