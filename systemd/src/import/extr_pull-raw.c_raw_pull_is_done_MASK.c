
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* signature_job; struct TYPE_5__* checksum_job; struct TYPE_5__* settings_job; struct TYPE_5__* roothash_job; struct TYPE_5__* raw_job; } ;
typedef TYPE_1__ RawPull ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(RawPull *VAR_0) {
        FUNC_1(VAR_0);
        FUNC_1(VAR_0->raw_job);

        if (!FUNC_0(VAR_0->raw_job))
                return 0;
        if (VAR_0->roothash_job && !FUNC_0(VAR_0->roothash_job))
                return 0;
        if (VAR_0->settings_job && !FUNC_0(VAR_0->settings_job))
                return 0;
        if (VAR_0->checksum_job && !FUNC_0(VAR_0->checksum_job))
                return 0;
        if (VAR_0->signature_job && !FUNC_0(VAR_0->signature_job))
                return 0;

        return 1;
}
