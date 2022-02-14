
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;


struct TYPE_21__ {int error; scalar_t__ style; scalar_t__ tar_pid; int event; struct TYPE_21__* userdata; int (* on_finished ) (TYPE_1__*,int,TYPE_1__*) ;struct TYPE_21__* settings_temp_path; struct TYPE_21__* settings_path; struct TYPE_21__* settings_job; struct TYPE_21__* temp_path; struct TYPE_21__* final_path; struct TYPE_21__* signature_job; struct TYPE_21__* checksum_job; TYPE_13__* tar_job; void* disk_fd; } ;
typedef TYPE_1__ TarPull ;
struct TYPE_20__ {int etag_exists; void* disk_fd; } ;
typedef TYPE_1__ PullJob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*) ;
 void* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_13__*,int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*,int ,TYPE_1__*) ;
 void* FUNC_7 (void*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,TYPE_1__**) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_15(PullJob *VAR_8) {
        TarPull *VAR_9;
        int VAR_10;

        FUNC_0(VAR_8);
        FUNC_0(VAR_8->userdata);

        VAR_9 = VAR_8->userdata;

        if (VAR_8 == VAR_9->settings_job) {
                if (VAR_8->error != 0)
                        FUNC_3(VAR_8->error, "Settings file could not be retrieved, proceeding without.");
        } else if (VAR_8->error != 0 && VAR_8 != VAR_9->signature_job) {
                if (VAR_8 == VAR_9->checksum_job)
                        FUNC_2(VAR_8->error, "Failed to retrieve SHA256 checksum, cannot verify. (Try --verify=no?)");
                else
                        FUNC_2(VAR_8->error, "Failed to retrieve image file. (Wrong URL?)");

                VAR_10 = VAR_8->error;
                goto finish;
        }





        if (!FUNC_11(VAR_9))
                return;

        if (VAR_9->signature_job && VAR_9->checksum_job->style == VAR_6 && VAR_9->signature_job->error != 0) {
                FUNC_2(VAR_8->error, "Failed to retrieve signature file, cannot verify. (Try --verify=no?)");

                VAR_10 = VAR_9->signature_job->error;
                goto finish;
        }

        VAR_9->tar_job->disk_fd = FUNC_7(VAR_9->tar_job->disk_fd);
        if (VAR_9->settings_job)
                VAR_9->settings_job->disk_fd = FUNC_7(VAR_9->settings_job->disk_fd);

        VAR_10 = FUNC_10(VAR_9, ((void*)0), &VAR_9->final_path);
        if (VAR_10 < 0)
                goto finish;

        if (VAR_9->tar_pid > 0) {
                VAR_10 = FUNC_14("tar", VAR_9->tar_pid, VAR_7);
                VAR_9->tar_pid = 0;
                if (VAR_10 < 0)
                        goto finish;
                if (VAR_10 != VAR_2) {
                        VAR_10 = -VAR_1;
                        goto finish;
                }
        }

        if (!VAR_9->tar_job->etag_exists) {


                FUNC_13(VAR_9, VAR_5);

                VAR_10 = FUNC_5(VAR_9->tar_job, ((void*)0), VAR_9->settings_job, VAR_9->checksum_job, VAR_9->signature_job);
                if (VAR_10 < 0)
                        goto finish;

                FUNC_13(VAR_9, VAR_4);

                VAR_10 = FUNC_1(VAR_9->temp_path);
                if (VAR_10 < 0)
                        goto finish;

                VAR_10 = FUNC_6(VAR_0, VAR_9->temp_path, VAR_0, VAR_9->final_path);
                if (VAR_10 < 0) {
                        FUNC_2(VAR_10, "Failed to rename to final image name to %s: %m", VAR_9->final_path);
                        goto finish;
                }

                VAR_9->temp_path = FUNC_4(VAR_9->temp_path);

                if (VAR_9->settings_job &&
                    VAR_9->settings_job->error == 0) {



                        FUNC_0(VAR_9->settings_temp_path);



                        VAR_9->settings_path = FUNC_4(VAR_9->settings_path);

                        VAR_10 = FUNC_10(VAR_9, ".nspawn", &VAR_9->settings_path);
                        if (VAR_10 < 0)
                                goto finish;

                        VAR_10 = FUNC_1(VAR_9->settings_temp_path);
                        if (VAR_10 < 0)
                                goto finish;

                        VAR_10 = FUNC_6(VAR_0, VAR_9->settings_temp_path, VAR_0, VAR_9->settings_path);
                        if (VAR_10 < 0) {
                                FUNC_2(VAR_10, "Failed to rename settings file to %s: %m", VAR_9->settings_path);
                                goto finish;
                        }

                        VAR_9->settings_temp_path = FUNC_4(VAR_9->settings_temp_path);
                }
        }

        FUNC_13(VAR_9, VAR_3);

        VAR_10 = FUNC_12(VAR_9);
        if (VAR_10 < 0)
                goto finish;

        VAR_10 = 0;

finish:
        if (VAR_9->on_finished)
                VAR_9->on_finished(VAR_9, VAR_10, VAR_9->userdata);
        else
                FUNC_8(VAR_9->event, VAR_10);
}
