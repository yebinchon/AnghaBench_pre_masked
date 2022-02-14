
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
struct bus_header {int dummy; } ;
struct TYPE_3__ {scalar_t__ header; } ;
typedef TYPE_1__ sd_bus_message ;



__attribute__((used)) static inline void* FUNC_0(sd_bus_message *VAR_0) {
        return (uint8_t*) VAR_0->header + sizeof(struct bus_header);
}
