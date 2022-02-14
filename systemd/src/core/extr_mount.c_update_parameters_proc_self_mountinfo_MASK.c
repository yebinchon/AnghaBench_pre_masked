
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fstype; int options; int what; } ;
struct TYPE_5__ {TYPE_1__ parameters_proc_self_mountinfo; } ;
typedef TYPE_1__ MountParameters ;
typedef TYPE_2__ Mount ;


 int FUNC_0 (int *,char const*) ;

__attribute__((used)) static int FUNC_1(
                Mount *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3) {

        MountParameters *VAR_4;
        int VAR_5, VAR_6, VAR_7;

        VAR_4 = &VAR_0->parameters_proc_self_mountinfo;

        VAR_5 = FUNC_0(&VAR_4->what, VAR_1);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_6 = FUNC_0(&VAR_4->options, VAR_2);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_7 = FUNC_0(&VAR_4->fstype, VAR_3);
        if (VAR_7 < 0)
                return VAR_7;

        return VAR_5 > 0 || VAR_6 > 0 || VAR_7 > 0;
}
