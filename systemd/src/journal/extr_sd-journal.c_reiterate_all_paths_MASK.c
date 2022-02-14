
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ toplevel_fd; int * path; scalar_t__ no_new_files; } ;
typedef TYPE_1__ sd_journal ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(sd_journal *VAR_1) {
        FUNC_3(VAR_1);

        if (VAR_1->no_new_files)
                return FUNC_0(VAR_1);

        if (VAR_1->flags & VAR_0)
                return FUNC_2(VAR_1);

        if (VAR_1->toplevel_fd >= 0)
                return FUNC_1(VAR_1, ((void*)0), 0);

        if (VAR_1->path)
                return FUNC_1(VAR_1, VAR_1->path, 1);

        return FUNC_2(VAR_1);
}
