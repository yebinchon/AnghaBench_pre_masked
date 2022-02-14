
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char,void const*,size_t) ;
 int FUNC_2 (int *,int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char,char*) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_2, const char *VAR_3, const void *VAR_4, size_t VAR_5) {
        int VAR_6;

        VAR_6 = FUNC_4(VAR_2, VAR_1, "sv");
        if (VAR_6 < 0)
                return FUNC_0(VAR_6);

        VAR_6 = FUNC_2(VAR_2, VAR_0, VAR_3);
        if (VAR_6 < 0)
                return FUNC_0(VAR_6);

        VAR_6 = FUNC_4(VAR_2, 'v', "ay");
        if (VAR_6 < 0)
                return FUNC_0(VAR_6);

        VAR_6 = FUNC_1(VAR_2, 'y', VAR_4, VAR_5);
        if (VAR_6 < 0)
                return FUNC_0(VAR_6);

        VAR_6 = FUNC_3(VAR_2);
        if (VAR_6 < 0)
                return FUNC_0(VAR_6);

        VAR_6 = FUNC_3(VAR_2);
        if (VAR_6 < 0)
                return FUNC_0(VAR_6);

        return 1;
}
