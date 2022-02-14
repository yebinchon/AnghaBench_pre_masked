
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_3__ {int machine_info; int metadata_valid; } ;
typedef TYPE_1__ Image ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,char*) ;

int FUNC_3(
                sd_bus_message *VAR_0,
                void *VAR_1,
                sd_bus_error *VAR_2) {

        Image *VAR_3 = VAR_1;
        int VAR_4;

        if (!VAR_3->metadata_valid) {
                VAR_4 = FUNC_1(VAR_3);
                if (VAR_4 < 0)
                        return FUNC_2(VAR_2, VAR_4, "Failed to read image metadata: %m");
        }

        return FUNC_0(VAR_0, VAR_3->machine_info);
}
