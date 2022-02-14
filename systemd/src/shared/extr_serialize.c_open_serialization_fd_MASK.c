
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,int) ;

int FUNC_4(const char *VAR_3) {
        int VAR_4;

        VAR_4 = FUNC_2(VAR_3, VAR_0);
        if (VAR_4 < 0) {
                const char *VAR_5;

                VAR_5 = FUNC_0() == 1 ? "/run/systemd" : "/tmp";
                VAR_4 = FUNC_3(VAR_5, VAR_2|VAR_1);
                if (VAR_4 < 0)
                        return VAR_4;

                FUNC_1("Serializing %s to %s.", VAR_3, VAR_5);
        } else
                FUNC_1("Serializing %s to memfd.", VAR_3);

        return VAR_4;
}
