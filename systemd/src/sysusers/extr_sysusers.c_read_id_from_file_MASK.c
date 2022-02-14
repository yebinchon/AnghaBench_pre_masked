
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct stat {scalar_t__ st_gid; scalar_t__ st_uid; } ;
typedef scalar_t__ gid_t ;
struct TYPE_4__ {scalar_t__ gid_path; scalar_t__ uid_path; } ;
typedef TYPE_1__ Item ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct stat*) ;

__attribute__((used)) static int FUNC_2(Item *VAR_0, uid_t *VAR_1, gid_t *VAR_2) {
        struct stat VAR_3;
        bool VAR_4 = 0, VAR_5 = 0;
        uid_t VAR_6 = 0;
        gid_t VAR_7 = 0;

        FUNC_0(VAR_0);


        if (VAR_2 && VAR_0->gid_path && FUNC_1(VAR_0->gid_path, &VAR_3) >= 0) {
                VAR_7 = VAR_3.st_gid;
                VAR_5 = 1;
        }


        if ((VAR_1 || (VAR_2 && !VAR_5))
            && VAR_0->uid_path
            && FUNC_1(VAR_0->uid_path, &VAR_3) >= 0) {

                VAR_6 = VAR_3.st_uid;
                VAR_4 = 1;


                if (VAR_2 && !VAR_5) {
                        VAR_7 = VAR_3.st_gid;
                        VAR_5 = 1;
                }
        }


        if (VAR_1 && !VAR_4 && VAR_0->gid_path) {

                if (VAR_5) {
                        VAR_6 = (uid_t) VAR_7;
                        VAR_4 = 1;
                } else if (FUNC_1(VAR_0->gid_path, &VAR_3) >= 0) {
                        VAR_6 = (uid_t) VAR_3.st_gid;
                        VAR_4 = 1;
                }
        }

        if (VAR_1) {
                if (!VAR_4)
                        return 0;

                *VAR_1 = VAR_6;
        }

        if (VAR_2) {
                if (!VAR_5)
                        return 0;

                *VAR_2 = VAR_7;
        }

        return 1;
}
