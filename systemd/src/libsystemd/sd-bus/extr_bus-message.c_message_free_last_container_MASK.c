
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bus_container {int offsets; int peeked_signature; int signature; } ;
struct TYPE_4__ {scalar_t__ n_containers; } ;
typedef TYPE_1__ sd_bus_message ;


 int FUNC_0 (int ) ;
 struct bus_container* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(sd_bus_message *VAR_0) {
        struct bus_container *VAR_1;

        VAR_1 = FUNC_1(VAR_0);

        FUNC_0(VAR_1->signature);
        FUNC_0(VAR_1->peeked_signature);
        FUNC_0(VAR_1->offsets);


        if (VAR_0->n_containers > 0)
                VAR_0->n_containers--;
}
