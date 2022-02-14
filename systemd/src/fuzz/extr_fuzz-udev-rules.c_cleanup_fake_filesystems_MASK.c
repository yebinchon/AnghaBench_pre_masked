
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_mounted; scalar_t__ ignore_mount_error; int target; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4) {
        for (unsigned VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
                if (!VAR_3[VAR_5].is_mounted)
                        continue;

                if (FUNC_2(VAR_3[VAR_5].target) < 0) {
                        FUNC_1(VAR_3[VAR_5].ignore_mount_error ? VAR_0 : VAR_1, VAR_2, "Failed to umount %s: %m", VAR_3[VAR_5].target);
                        if (!VAR_3[VAR_5].ignore_mount_error)
                                return -VAR_2;
                } else
                        VAR_3[VAR_5].is_mounted = 0;
        }
        return 0;
}
