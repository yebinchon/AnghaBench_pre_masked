
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tar_pid; scalar_t__ local; scalar_t__ image_root; scalar_t__ settings_path; scalar_t__ final_path; scalar_t__ settings_temp_path; scalar_t__ temp_path; int event; int glue; int signature_job; int checksum_job; int settings_job; int tar_job; } ;
typedef TYPE_1__ TarPull ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int *) ;

TarPull* FUNC_9(TarPull *VAR_4) {
        if (!VAR_4)
                return ((void*)0);

        if (VAR_4->tar_pid > 1) {
                (void) FUNC_2(VAR_4->tar_pid, VAR_3);
                (void) FUNC_8(VAR_4->tar_pid, ((void*)0));
        }

        FUNC_4(VAR_4->tar_job);
        FUNC_4(VAR_4->settings_job);
        FUNC_4(VAR_4->checksum_job);
        FUNC_4(VAR_4->signature_job);

        FUNC_0(VAR_4->glue);
        FUNC_6(VAR_4->event);

        if (VAR_4->temp_path) {
                (void) FUNC_5(VAR_4->temp_path, VAR_1|VAR_0|VAR_2);
                FUNC_1(VAR_4->temp_path);
        }

        if (VAR_4->settings_temp_path) {
                (void) FUNC_7(VAR_4->settings_temp_path);
                FUNC_1(VAR_4->settings_temp_path);
        }

        FUNC_1(VAR_4->final_path);
        FUNC_1(VAR_4->settings_path);
        FUNC_1(VAR_4->image_root);
        FUNC_1(VAR_4->local);

        return FUNC_3(VAR_4);
}
