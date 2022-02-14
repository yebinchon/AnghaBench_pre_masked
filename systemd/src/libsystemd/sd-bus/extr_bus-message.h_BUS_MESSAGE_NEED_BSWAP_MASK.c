
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* header; } ;
typedef TYPE_2__ sd_bus_message ;
struct TYPE_4__ {scalar_t__ endian; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(sd_bus_message *VAR_1) {
        return VAR_1->header->endian != VAR_0;
}
