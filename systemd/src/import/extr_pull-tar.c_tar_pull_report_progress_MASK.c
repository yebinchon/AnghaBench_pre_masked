
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* tar_job; TYPE_3__* signature_job; TYPE_2__* checksum_job; TYPE_1__* settings_job; } ;
typedef TYPE_5__ TarPull ;
typedef int TarProgress ;
struct TYPE_11__ {unsigned int progress_percent; } ;
struct TYPE_10__ {int progress_percent; } ;
struct TYPE_9__ {int progress_percent; } ;
struct TYPE_8__ {int progress_percent; } ;






 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_4(TarPull *VAR_0, TarProgress VAR_1) {
        unsigned VAR_2;

        FUNC_0(VAR_0);

        switch (VAR_1) {

        case 130: {
                unsigned VAR_3 = 85;

                VAR_2 = 0;

                if (VAR_0->settings_job) {
                        VAR_2 += VAR_0->settings_job->progress_percent * 5 / 100;
                        VAR_3 -= 5;
                }

                if (VAR_0->checksum_job) {
                        VAR_2 += VAR_0->checksum_job->progress_percent * 5 / 100;
                        VAR_3 -= 5;
                }

                if (VAR_0->signature_job) {
                        VAR_2 += VAR_0->signature_job->progress_percent * 5 / 100;
                        VAR_3 -= 5;
                }

                if (VAR_0->tar_job)
                        VAR_2 += VAR_0->tar_job->progress_percent * VAR_3 / 100;
                break;
        }

        case 128:
                VAR_2 = 85;
                break;

        case 129:
                VAR_2 = 90;
                break;

        case 131:
                VAR_2 = 95;
                break;

        default:
                FUNC_1("Unknown progress state");
        }

        FUNC_3(0, "X_IMPORT_PROGRESS=%u", VAR_2);
        FUNC_2("Combined progress %u%%", VAR_2);
}
