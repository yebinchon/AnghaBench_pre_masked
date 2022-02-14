
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int limit; } ;
struct TYPE_13__ {int n_max_files; } ;
struct TYPE_14__ {TYPE_10__ space; int path; int oldest_file_usec; int max_retention_usec; TYPE_1__ metrics; } ;
typedef TYPE_2__ Server ;
typedef TYPE_2__ JournalStorage ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(Server *VAR_1, JournalStorage *VAR_2, bool VAR_3) {

        int VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        (void) FUNC_2(VAR_1, VAR_2);

        if (VAR_3)
                FUNC_5(VAR_1, VAR_2);

        VAR_4 = FUNC_3(VAR_2->path, VAR_2->space.limit,
                                     VAR_2->metrics.n_max_files, VAR_1->max_retention_usec,
                                     &VAR_1->oldest_file_usec, VAR_3);
        if (VAR_4 < 0 && VAR_4 != -VAR_0)
                FUNC_4(VAR_4, "Failed to vacuum %s, ignoring: %m", VAR_2->path);

        FUNC_1(&VAR_2->space);
}
