
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;




 int VAR_1 ;


 int FUNC_0 (char*,int ) ;

const char* FUNC_1(mode_t VAR_2) {







        switch(VAR_2 & VAR_1) {
                case 129:
                        return "/run/systemd/inaccessible/reg";

                case 131:
                        return "/run/systemd/inaccessible/dir";

                case 132:
                        if (FUNC_0("/run/systemd/inaccessible/chr", VAR_0) == 0)
                                return "/run/systemd/inaccessible/chr";
                        return "/run/systemd/inaccessible/sock";

                case 133:
                        if (FUNC_0("/run/systemd/inaccessible/blk", VAR_0) == 0)
                                return "/run/systemd/inaccessible/blk";
                        return "/run/systemd/inaccessible/sock";

                case 130:
                        return "/run/systemd/inaccessible/fifo";

                case 128:
                        return "/run/systemd/inaccessible/sock";
        }
        return ((void*)0);
}
