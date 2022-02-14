
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ index; } ;
struct TYPE_7__ {scalar_t__ n_containers; TYPE_1__ root_container; scalar_t__ containers_allocated; int containers; } ;
typedef TYPE_2__ sd_bus_message ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(sd_bus_message *VAR_0) {
        FUNC_0(VAR_0);

        while (VAR_0->n_containers > 0)
                FUNC_1(VAR_0);

        VAR_0->containers = FUNC_2(VAR_0->containers);
        VAR_0->containers_allocated = 0;
        VAR_0->root_container.index = 0;
}
