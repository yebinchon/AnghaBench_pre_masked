
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int line; int filename; } ;
struct TYPE_4__ {scalar_t__ family; scalar_t__ lladdr_size; TYPE_2__* section; } ;
typedef TYPE_1__ Neighbor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

int FUNC_3(Neighbor *VAR_2) {
        if (FUNC_2(VAR_2->section))
                return -VAR_1;

        if (VAR_2->family == VAR_0)
                return FUNC_1(FUNC_0(VAR_1),
                                         "%s: Neighbor section without Address= configured. "
                                         "Ignoring [Neighbor] section from line %u.",
                                         VAR_2->section->filename, VAR_2->section->line);

        if (VAR_2->lladdr_size == 0)
                return FUNC_1(FUNC_0(VAR_1),
                                         "%s: Neighbor section without LinkLayerAddress= configured. "
                                         "Ignoring [Neighbor] section from line %u.",
                                         VAR_2->section->filename, VAR_2->section->line);

        return 0;
}
