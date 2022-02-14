
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_device ;
struct TYPE_3__ {int mode; int seclabel_list; int gid; int uid; int dev_db_clone; int * dev; } ;
typedef TYPE_1__ UdevEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int,int,int ,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(UdevEvent *VAR_3) {
        sd_device *VAR_4 = VAR_3->dev;
        int VAR_5;

        VAR_5 = FUNC_6(VAR_4, ((void*)0));
        if (VAR_5 == -VAR_1)
                return 0;
        if (VAR_5 < 0)
                return FUNC_5(VAR_4, VAR_5, "Failed to get devnum: %m");


        if (VAR_3->dev_db_clone)
                (void) FUNC_8(VAR_4, VAR_3->dev_db_clone);

        if (!FUNC_9(VAR_3->uid)) {
                VAR_5 = FUNC_3(VAR_4, &VAR_3->uid);
                if (VAR_5 < 0 && VAR_5 != -VAR_1)
                        return FUNC_5(VAR_4, VAR_5, "Failed to get devnode UID: %m");
        }

        if (!FUNC_4(VAR_3->gid)) {
                VAR_5 = FUNC_1(VAR_4, &VAR_3->gid);
                if (VAR_5 < 0 && VAR_5 != -VAR_1)
                        return FUNC_5(VAR_4, VAR_5, "Failed to get devnode GID: %m");
        }

        if (VAR_3->mode == VAR_2) {
                VAR_5 = FUNC_2(VAR_4, &VAR_3->mode);
                if (VAR_5 < 0 && VAR_5 != -VAR_1)
                        return FUNC_5(VAR_4, VAR_5, "Failed to get devnode mode: %m");
        }
        if (VAR_3->mode == VAR_2 && FUNC_4(VAR_3->gid) && VAR_3->gid > 0)

                VAR_3->mode = 0660;

        bool VAR_6 = FUNC_0(VAR_4, VAR_0);

        return FUNC_7(VAR_4, VAR_6, VAR_3->mode, VAR_3->uid, VAR_3->gid, VAR_3->seclabel_list);
}
