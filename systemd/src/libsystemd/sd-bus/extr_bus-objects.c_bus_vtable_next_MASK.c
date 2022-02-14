
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int element_size; } ;
struct TYPE_8__ {TYPE_1__ start; } ;
struct TYPE_9__ {TYPE_2__ x; } ;
typedef TYPE_3__ sd_bus_vtable ;



const sd_bus_vtable* FUNC_0(const sd_bus_vtable *VAR_0, const sd_bus_vtable *VAR_1) {
        return (const sd_bus_vtable*) ((char*) VAR_1 + VAR_0[0].x.start.element_size);
}
