
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
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int,char*,int ) ;
 scalar_t__ FUNC_2 (char const*,int ,int *,int ,int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_5) {
        for (unsigned VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
                if (FUNC_2(VAR_5, VAR_4[VAR_6].target, ((void*)0), VAR_2, ((void*)0)) < 0) {
                        FUNC_1(VAR_4[VAR_6].ignore_mount_error ? VAR_0 : VAR_1, VAR_3, "Failed to mount %s: %m", VAR_4[VAR_6].target);
                        if (!VAR_4[VAR_6].ignore_mount_error)
                                return -VAR_3;
                } else
                        VAR_4[VAR_6].is_mounted = 1;
        }

        return 0;
}
