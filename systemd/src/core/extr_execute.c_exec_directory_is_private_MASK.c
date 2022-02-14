
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ runtime_directory_preserve_mode; int dynamic_user; } ;
typedef scalar_t__ ExecDirectoryType ;
typedef TYPE_1__ ExecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(const ExecContext *VAR_3, ExecDirectoryType VAR_4) {
        if (!VAR_3->dynamic_user)
                return 0;

        if (VAR_4 == VAR_0)
                return 0;

        if (VAR_4 == VAR_1 && VAR_3->runtime_directory_preserve_mode == VAR_2)
                return 0;

        return 1;
}
