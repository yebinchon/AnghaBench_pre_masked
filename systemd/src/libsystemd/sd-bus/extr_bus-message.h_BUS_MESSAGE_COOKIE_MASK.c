
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {TYPE_3__* header; } ;
typedef TYPE_4__ sd_bus_message ;
struct TYPE_9__ {int serial; } ;
struct TYPE_8__ {int cookie; } ;
struct TYPE_10__ {int version; TYPE_2__ dbus1; TYPE_1__ dbus2; } ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static inline uint64_t FUNC_2(sd_bus_message *VAR_0) {
        if (VAR_0->header->version == 2)
                return FUNC_1(VAR_0, VAR_0->header->dbus2.cookie);

        return FUNC_0(VAR_0, VAR_0->header->dbus1.serial);
}
