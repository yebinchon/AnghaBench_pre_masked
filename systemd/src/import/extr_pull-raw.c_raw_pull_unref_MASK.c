
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ local; scalar_t__ image_root; scalar_t__ settings_path; scalar_t__ roothash_path; scalar_t__ final_path; scalar_t__ settings_temp_path; scalar_t__ roothash_temp_path; scalar_t__ temp_path; int event; int glue; int signature_job; int checksum_job; int roothash_job; int settings_job; int raw_job; } ;
typedef TYPE_1__ RawPull ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

RawPull* FUNC_6(RawPull *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_3(VAR_0->raw_job);
        FUNC_3(VAR_0->settings_job);
        FUNC_3(VAR_0->roothash_job);
        FUNC_3(VAR_0->checksum_job);
        FUNC_3(VAR_0->signature_job);

        FUNC_0(VAR_0->glue);
        FUNC_4(VAR_0->event);

        if (VAR_0->temp_path) {
                (void) FUNC_5(VAR_0->temp_path);
                FUNC_1(VAR_0->temp_path);
        }

        if (VAR_0->roothash_temp_path) {
                (void) FUNC_5(VAR_0->roothash_temp_path);
                FUNC_1(VAR_0->roothash_temp_path);
        }

        if (VAR_0->settings_temp_path) {
                (void) FUNC_5(VAR_0->settings_temp_path);
                FUNC_1(VAR_0->settings_temp_path);
        }

        FUNC_1(VAR_0->final_path);
        FUNC_1(VAR_0->roothash_path);
        FUNC_1(VAR_0->settings_path);
        FUNC_1(VAR_0->image_root);
        FUNC_1(VAR_0->local);
        return FUNC_2(VAR_0);
}
