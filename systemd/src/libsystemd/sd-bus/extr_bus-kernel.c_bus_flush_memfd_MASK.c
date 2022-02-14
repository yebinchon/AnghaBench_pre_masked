
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int n_memfd_cache; TYPE_1__* memfd_cache; } ;
typedef TYPE_2__ sd_bus ;
struct TYPE_5__ {int mapped; int address; int fd; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(sd_bus *VAR_0) {
        unsigned VAR_1;

        FUNC_0(VAR_0);

        for (VAR_1 = 0; VAR_1 < VAR_0->n_memfd_cache; VAR_1++)
                FUNC_1(VAR_0->memfd_cache[VAR_1].fd, VAR_0->memfd_cache[VAR_1].address, VAR_0->memfd_cache[VAR_1].mapped);
}
