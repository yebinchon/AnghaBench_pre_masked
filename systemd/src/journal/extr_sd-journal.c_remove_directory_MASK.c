
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ inotify_fd; int directories_by_path; int directories_by_wd; } ;
typedef TYPE_1__ sd_journal ;
struct TYPE_11__ {scalar_t__ wd; struct TYPE_11__* path; scalar_t__ is_root; } ;
typedef TYPE_2__ Directory ;


 TYPE_2__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(sd_journal *VAR_0, Directory *VAR_1) {
        FUNC_1(VAR_0);

        if (VAR_1->wd > 0) {
                FUNC_3(VAR_0->directories_by_wd, FUNC_0(VAR_1->wd));

                if (VAR_0->inotify_fd >= 0)
                        (void) FUNC_4(VAR_0->inotify_fd, VAR_1->wd);
        }

        FUNC_3(VAR_0->directories_by_path, VAR_1->path);

        if (VAR_1->is_root)
                FUNC_5("Root directory %s removed.", VAR_1->path);
        else
                FUNC_5("Directory %s removed.", VAR_1->path);

        FUNC_2(VAR_1->path);
        FUNC_2(VAR_1);
}
