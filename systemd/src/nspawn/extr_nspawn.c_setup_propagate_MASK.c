
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,char const*,char const*,int *,int,int *) ;
 char* FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (char const*,char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_6) {
        const char *VAR_7, *VAR_8;
        int VAR_9;

        (void) FUNC_1("/run/systemd/nspawn/", 0755);
        (void) FUNC_1("/run/systemd/nspawn/propagate", 0600);
        VAR_7 = FUNC_4("/run/systemd/nspawn/propagate/", VAR_5);
        (void) FUNC_1(VAR_7, 0600);

        VAR_9 = FUNC_5(VAR_6, "/run/systemd", 0755, 0, 0);
        if (VAR_9 < 0)
                return FUNC_0(VAR_9, "Failed to create /run/systemd: %m");

        VAR_9 = FUNC_5(VAR_6, "/run/systemd/nspawn", 0755, 0, 0);
        if (VAR_9 < 0)
                return FUNC_0(VAR_9, "Failed to create /run/systemd/nspawn: %m");

        VAR_9 = FUNC_5(VAR_6, "/run/systemd/nspawn/incoming", 0600, 0, 0);
        if (VAR_9 < 0)
                return FUNC_0(VAR_9, "Failed to create /run/systemd/nspawn/incoming: %m");

        VAR_8 = FUNC_3(VAR_6, "/run/systemd/nspawn/incoming");
        VAR_9 = FUNC_2(VAR_0, VAR_7, VAR_8, ((void*)0), VAR_1, ((void*)0));
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_2(VAR_0, ((void*)0), VAR_8, ((void*)0), VAR_1|VAR_3|VAR_2, ((void*)0));
        if (VAR_9 < 0)
                return VAR_9;



        return FUNC_2(VAR_0, ((void*)0), VAR_8, ((void*)0), VAR_4, ((void*)0));
}
