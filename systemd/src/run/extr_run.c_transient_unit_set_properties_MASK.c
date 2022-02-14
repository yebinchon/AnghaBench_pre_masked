
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int UnitType ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(sd_bus_message *VAR_2, UnitType VAR_3, char **VAR_4) {
        int VAR_5;

        VAR_5 = FUNC_2(VAR_2, "(sv)", "Description", "s", VAR_1);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5);

        if (VAR_0) {
                VAR_5 = FUNC_2(VAR_2, "(sv)", "CollectMode", "s", "inactive-or-failed");
                if (VAR_5 < 0)
                        return FUNC_1(VAR_5);
        }

        VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        return 0;
}
