
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int description; int userdata; int (* destroy_callback ) (int ) ;} ;
typedef TYPE_1__ sd_bus_slot ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static sd_bus_slot* FUNC_5(sd_bus_slot *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0, 0);

        if (VAR_0->destroy_callback)
                VAR_0->destroy_callback(VAR_0->userdata);

        FUNC_2(VAR_0->description);
        return FUNC_3(VAR_0);
}
