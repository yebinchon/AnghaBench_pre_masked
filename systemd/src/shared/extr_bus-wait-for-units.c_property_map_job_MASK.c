
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_3__ {int job_id; } ;
typedef TYPE_1__ WaitForItem ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int *,char const**) ;

__attribute__((used)) static int FUNC_2(
                sd_bus *VAR_0,
                const char *VAR_1,
                sd_bus_message *VAR_2,
                sd_bus_error *VAR_3,
                void *VAR_4) {

        WaitForItem *VAR_5 = VAR_4;
        const char *VAR_6;
        uint32_t VAR_7;
        int VAR_8;

        FUNC_0(VAR_5);

        VAR_8 = FUNC_1(VAR_2, "(uo)", &VAR_7, &VAR_6);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_5->job_id = VAR_7;
        return 0;
}
