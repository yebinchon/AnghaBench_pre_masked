
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_event ;
typedef char const sd_bus ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int *,char const*,int ,int *,char const*) ;
 int FUNC_2 (char const*,char const**) ;
 int FUNC_3 (char const*,int *,char const*,int *,int *) ;
 char* FUNC_4 (char*,char const*,char*,char*,char const*,char*,char*) ;

int FUNC_5(sd_event *VAR_1, sd_bus *VAR_2, const char *VAR_3) {
        const char *VAR_4;
        const char *VAR_5;
        int VAR_6;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);






        VAR_6 = FUNC_2(VAR_2, &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_4 = FUNC_4(
                        "sender='org.freedesktop.DBus',"
                        "type='signal',"
                        "interface='org.freedesktop.DBus',"
                        "member='NameOwnerChanged',"
                        "path='/org/freedesktop/DBus',"
                        "arg0='", VAR_3, "',",
                        "arg1='", VAR_5, "',",
                        "arg2=''");

        VAR_6 = FUNC_1(VAR_2, ((void*)0), VAR_4, VAR_0, ((void*)0), VAR_1);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_3(VAR_2, ((void*)0), VAR_3, ((void*)0), ((void*)0));
        if (VAR_6 < 0)
                return VAR_6;

        return 0;
}
