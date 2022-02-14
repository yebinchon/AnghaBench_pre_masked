
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* sd_bus_message ;
typedef int sd_bus_error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,char*,char const*) ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (char const**,char*,unsigned int*,char const**) ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        const char **VAR_5 = VAR_3, *VAR_6;
        unsigned VAR_7;
        int VAR_8;

        FUNC_1(VAR_2);
        FUNC_1(VAR_5);

        VAR_8 = FUNC_5(VAR_2, "us", &VAR_7, &VAR_6);
        if (VAR_8 < 0) {
                FUNC_2(VAR_8);
                return 0;
        }

        if (!FUNC_6(*VAR_5, FUNC_4(VAR_2)))
                return 0;

        if (VAR_1 && FUNC_0(VAR_7) >= VAR_0)
                return 0;

        FUNC_3(VAR_7, "%s", VAR_6);
        return 0;
}
