
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UnitFileScope ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (char*) ;
 char** FUNC_1 (char*,char*,char*,int ) ;

char **FUNC_2(UnitFileScope VAR_2) {

        switch (VAR_2) {

        case 129:
                return FUNC_1("/run/systemd/system-generators",
                                "/etc/systemd/system-generators",
                                "/usr/local/lib/systemd/system-generators",
                                VAR_0);

        case 130:
        case 128:
                return FUNC_1("/run/systemd/user-generators",
                                "/etc/systemd/user-generators",
                                "/usr/local/lib/systemd/user-generators",
                                VAR_1);

        default:
                FUNC_0("Hmm, unexpected scope.");
        }
}
