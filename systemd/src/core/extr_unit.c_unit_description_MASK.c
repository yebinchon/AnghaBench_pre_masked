
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* description; int id; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 char const* FUNC_1 (int ) ;

const char *FUNC_2(Unit *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->description)
                return VAR_0->description;

        return FUNC_1(VAR_0->id);
}
