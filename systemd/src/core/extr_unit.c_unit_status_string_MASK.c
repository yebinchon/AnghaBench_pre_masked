
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char const* id; TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_6__ {scalar_t__ status_unit_format; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 char const* FUNC_1 (TYPE_2__*) ;

const char *FUNC_2(Unit *VAR_1) {
        FUNC_0(VAR_1);

        if (VAR_1->manager->status_unit_format == VAR_0 && VAR_1->id)
                return VAR_1->id;

        return FUNC_1(VAR_1);
}
