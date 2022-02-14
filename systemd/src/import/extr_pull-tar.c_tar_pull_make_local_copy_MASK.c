
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ force_local; int settings_path; int local; int image_root; struct TYPE_5__* settings_job; scalar_t__ settings; int final_path; struct TYPE_5__* tar_job; } ;
typedef TYPE_1__ TarPull ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char const*,int,int ,int ,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 char* FUNC_6 (int ,char*,int ,char*) ;
 int FUNC_7 (TYPE_1__*,char*,int *) ;

__attribute__((used)) static int FUNC_8(TarPull *VAR_4) {
        int VAR_5;

        FUNC_0(VAR_4);
        FUNC_0(VAR_4->tar_job);

        if (!VAR_4->local)
                return 0;

        VAR_5 = FUNC_5(VAR_4->final_path, VAR_4->image_root, VAR_4->local, VAR_4->force_local);
        if (VAR_5 < 0)
                return VAR_5;

        if (VAR_4->settings) {
                const char *VAR_6;
                FUNC_0(VAR_4->settings_job);

                VAR_5 = FUNC_7(VAR_4, ".nspawn", &VAR_4->settings_path);
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_6 = FUNC_6(VAR_4->image_root, "/", VAR_4->local, ".nspawn");

                VAR_5 = FUNC_1(VAR_4->settings_path, VAR_6, 0664, 0, 0, VAR_0 | (VAR_4->force_local ? VAR_1 : 0));
                if (VAR_5 == -VAR_2)
                        FUNC_4(VAR_5, "Settings file %s already exists, not replacing.", VAR_6);
                else if (VAR_5 == -VAR_3)
                        FUNC_2(VAR_5, "Skipping creation of settings file, since none was found.");
                else if (VAR_5 < 0)
                        FUNC_4(VAR_5, "Failed to copy settings files %s, ignoring: %m", VAR_6);
                else
                        FUNC_3("Created new settings file %s.", VAR_6);
        }

        return 0;
}
