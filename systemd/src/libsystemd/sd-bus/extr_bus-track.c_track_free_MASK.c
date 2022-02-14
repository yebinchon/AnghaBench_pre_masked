
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int userdata; int (* destroy_callback ) (int ) ;TYPE_4__* bus; int names; scalar_t__ in_list; } ;
typedef TYPE_1__ sd_bus_track ;
struct TYPE_12__ {int tracks; } ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;

__attribute__((used)) static sd_bus_track *FUNC_7(sd_bus_track *VAR_1) {
        FUNC_1(VAR_1);

        if (VAR_1->in_list)
                FUNC_0(VAR_0, VAR_1->bus->tracks, VAR_1);

        FUNC_2(VAR_1);
        VAR_1->names = FUNC_3(VAR_1->names);
        VAR_1->bus = FUNC_5(VAR_1->bus);

        if (VAR_1->destroy_callback)
                VAR_1->destroy_callback(VAR_1->userdata);

        return FUNC_4(VAR_1);
}
