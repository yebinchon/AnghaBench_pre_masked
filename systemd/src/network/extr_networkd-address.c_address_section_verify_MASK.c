
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int line; int filename; } ;
struct TYPE_5__ {scalar_t__ family; TYPE_2__* section; } ;
typedef TYPE_1__ Address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

int FUNC_4(Address *VAR_2) {
        if (FUNC_3(VAR_2->section))
                return -VAR_1;

        if (VAR_2->family == VAR_0) {
                FUNC_1(VAR_2->section);

                return FUNC_2(FUNC_0(VAR_1),
                                         "%s: Address section without Address= field configured. "
                                         "Ignoring [Address] section from line %u.",
                                         VAR_2->section->filename, VAR_2->section->line);
        }

        return 0;
}
