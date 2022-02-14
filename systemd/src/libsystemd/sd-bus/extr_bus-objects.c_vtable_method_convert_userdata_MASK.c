
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void uint8_t ;
struct TYPE_6__ {int offset; } ;
struct TYPE_7__ {TYPE_1__ method; } ;
struct TYPE_8__ {TYPE_2__ x; } ;
typedef TYPE_3__ sd_bus_vtable ;


 int FUNC_0 (TYPE_3__ const*) ;

__attribute__((used)) static void *FUNC_1(const sd_bus_vtable *VAR_0, void *VAR_1) {
        FUNC_0(VAR_0);

        return (uint8_t*) VAR_1 + VAR_0->x.method.offset;
}
