
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vtable_member {int member; int interface; TYPE_3__* parent; TYPE_1__* vtable; scalar_t__ trusted; } ;
typedef struct vtable_member sd_bus_message ;
typedef int sd_bus_error ;
typedef struct vtable_member sd_bus ;
struct TYPE_6__ {TYPE_2__* vtable; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vtable_member*) ;
 int FUNC_2 (int *,int ,char*,int ,int ) ;
 int FUNC_3 (struct vtable_member*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(sd_bus *VAR_3, sd_bus_message *VAR_4, struct vtable_member *VAR_5, sd_bus_error *VAR_6) {
        uint64_t VAR_7;
        int VAR_8;

        FUNC_1(VAR_3);
        FUNC_1(VAR_4);
        FUNC_1(VAR_5);


        if (VAR_3->trusted)
                return 0;


        if (VAR_5->vtable->flags & VAR_2)
                return 0;






        VAR_7 = FUNC_0(VAR_5->vtable->flags);
        if (VAR_7 == 0)
                VAR_7 = FUNC_0(VAR_5->parent->vtable[0].flags);
        if (VAR_7 == 0)
                VAR_7 = VAR_0;
        else
                VAR_7--;

        VAR_8 = FUNC_3(VAR_4, VAR_7);
        if (VAR_8 < 0)
                return VAR_8;
        if (VAR_8 > 0)
                return 0;

        return FUNC_2(VAR_6, VAR_1, "Access to %s.%s() not permitted.", VAR_5->interface, VAR_5->member);
}
