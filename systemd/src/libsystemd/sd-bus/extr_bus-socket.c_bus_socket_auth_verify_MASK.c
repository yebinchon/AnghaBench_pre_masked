
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ is_server; } ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(sd_bus *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->is_server)
                return FUNC_2(VAR_0);
        else
                return FUNC_1(VAR_0);
}
