
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inotify_event {int mask; scalar_t__ len; int name; int wd; int directories_by_wd; } ;
typedef struct inotify_event sd_journal ;
struct TYPE_4__ {int path; scalar_t__ is_root; } ;
typedef TYPE_1__ Directory ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct inotify_event*,int ,int ) ;
 int FUNC_2 (struct inotify_event*,int ,int ) ;
 int FUNC_3 (struct inotify_event*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct inotify_event*) ;
 int FUNC_9 (struct inotify_event*,TYPE_1__*) ;
 int FUNC_10 (struct inotify_event*,int ,int ) ;

__attribute__((used)) static void FUNC_11(sd_journal *VAR_12, struct inotify_event *VAR_13) {
        Directory *VAR_14;

        FUNC_3(VAR_12);
        FUNC_3(VAR_13);

        if (VAR_13->mask & VAR_10) {
                FUNC_8(VAR_12);
                return;
        }


        VAR_14 = FUNC_5(VAR_12->directories_by_wd, FUNC_0(VAR_13->wd));
        if (VAR_14) {
                if (!(VAR_13->mask & VAR_5) && VAR_13->len > 0 &&
                    (FUNC_4(VAR_13->name, ".journal") ||
                     FUNC_4(VAR_13->name, ".journal~"))) {



                        if (VAR_13->mask & (VAR_1|VAR_8|VAR_6|VAR_0))
                                (void) FUNC_2(VAR_12, VAR_14->path, VAR_13->name);
                        else if (VAR_13->mask & (VAR_2|VAR_7|VAR_11))
                                FUNC_10(VAR_12, VAR_14->path, VAR_13->name);

                } else if (!VAR_14->is_root && VAR_13->len == 0) {



                        if (VAR_13->mask & (VAR_3|VAR_9|VAR_11))
                                FUNC_9(VAR_12, VAR_14);

                } else if (VAR_14->is_root && (VAR_13->mask & VAR_5) && VAR_13->len > 0 && FUNC_6(VAR_13->name)) {



                        if (VAR_13->mask & (VAR_1|VAR_8|VAR_6|VAR_0))
                                (void) FUNC_1(VAR_12, VAR_14->path, VAR_13->name);
                }

                return;
        }

        if (VAR_13->mask & VAR_4)
                return;

        FUNC_7("Unexpected inotify event.");
}
