
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int id; TYPE_1__* manager; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_13__ {TYPE_2__* seat; } ;
struct TYPE_11__ {int sessions; } ;
typedef TYPE_3__ Session ;
typedef TYPE_2__ Seat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *,int ,char*,char const*,...) ;
 int FUNC_3 (TYPE_2__*,char*,char const**) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Seat *VAR_5 = VAR_3;
        const char *VAR_6;
        Session *VAR_7;
        int VAR_8;

        FUNC_0(VAR_2);
        FUNC_0(VAR_5);

        VAR_8 = FUNC_3(VAR_2, "s", &VAR_6);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_7 = FUNC_1(VAR_5->manager->sessions, VAR_6);
        if (!VAR_7)
                return FUNC_2(VAR_4, VAR_0, "No session '%s' known", VAR_6);

        if (VAR_7->seat != VAR_5)
                return FUNC_2(VAR_4, VAR_1, "Session %s not on seat %s", VAR_6, VAR_5->id);

        VAR_8 = FUNC_5(VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_4(VAR_2, ((void*)0));
}
