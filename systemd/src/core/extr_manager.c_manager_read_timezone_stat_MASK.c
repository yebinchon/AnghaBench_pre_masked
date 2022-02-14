
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct stat {int st_mtim; } ;
struct TYPE_4__ {int etc_localtime_accessible; scalar_t__ etc_localtime_mtime; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(Manager *VAR_1) {
        struct stat VAR_2;
        bool VAR_3;

        FUNC_0(VAR_1);


        if (FUNC_2("/etc/localtime", &VAR_2) < 0) {
                FUNC_1(VAR_0, "Failed to stat /etc/localtime, ignoring: %m");
                VAR_3 = VAR_1->etc_localtime_accessible;
                VAR_1->etc_localtime_accessible = 0;
        } else {
                usec_t VAR_4;

                VAR_4 = FUNC_3(&VAR_2.st_mtim);
                VAR_3 = !VAR_1->etc_localtime_accessible || VAR_4 != VAR_1->etc_localtime_mtime;

                VAR_1->etc_localtime_mtime = VAR_4;
                VAR_1->etc_localtime_accessible = 1;
        }

        return VAR_3;
}
