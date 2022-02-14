
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; int where; int type; int options; int flags; int what; int (* condition_fn ) () ;} ;
typedef TYPE_1__ MountPoint ;


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
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_10 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (int,int,char*,int ,...) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(const MountPoint *VAR_11, bool VAR_12) {
        int VAR_13, VAR_14;

        FUNC_1(VAR_11);

        VAR_14 = (VAR_11->mode & VAR_7) ? VAR_5 : VAR_4;

        if (VAR_11->condition_fn && !VAR_11->condition_fn())
                return 0;


        if (VAR_12)
                (void) FUNC_3(VAR_11->where, VAR_2|VAR_3);

        VAR_13 = FUNC_9(VAR_11->where, ((void*)0), VAR_0);
        if (VAR_13 < 0 && VAR_13 != -VAR_1) {
                FUNC_5(VAR_14, VAR_13, "Failed to determine whether %s is a mount point: %m", VAR_11->where);
                return (VAR_11->mode & VAR_7) ? VAR_13 : 0;
        }
        if (VAR_13 > 0)
                return 0;


        if (!(VAR_11->mode & VAR_8) && FUNC_2() > 0)
                return 0;



        if (VAR_12)
                (void) FUNC_7(VAR_11->where, 0755);
        else
                (void) FUNC_6(VAR_11->where, 0755);

        FUNC_4("Mounting %s to %s of type %s with options %s.",
                  VAR_11->what,
                  VAR_11->where,
                  VAR_11->type,
                  FUNC_11(VAR_11->options));

        if (FUNC_8(VAR_11->what,
                  VAR_11->where,
                  VAR_11->type,
                  VAR_11->flags,
                  VAR_11->options) < 0) {
                FUNC_5(VAR_14, VAR_10, "Failed to mount %s at %s: %m", VAR_11->type, VAR_11->where);
                return (VAR_11->mode & VAR_7) ? -VAR_10 : 0;
        }


        if (VAR_12)
                (void) FUNC_3(VAR_11->where, 0);

        if (VAR_11->mode & VAR_6) {
                if (FUNC_0(VAR_11->where, VAR_9) < 0) {
                        VAR_13 = -VAR_10;

                        (void) FUNC_13(VAR_11->where);
                        (void) FUNC_10(VAR_11->where);

                        FUNC_5(VAR_14, VAR_13, "Mount point %s not writable after mounting: %m", VAR_11->where);
                        return (VAR_11->mode & VAR_7) ? VAR_13 : 0;
                }
        }

        return 1;
}
