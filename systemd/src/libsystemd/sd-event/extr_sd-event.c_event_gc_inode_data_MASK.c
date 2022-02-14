
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_data {int inodes; } ;
struct inode_data {struct inotify_data* inotify_data; scalar_t__ event_sources; } ;
typedef int sd_event ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct inode_data*) ;
 int FUNC_2 (int *,struct inotify_data*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(
                sd_event *VAR_0,
                struct inode_data *VAR_1) {

        struct inotify_data *VAR_2;

        FUNC_0(VAR_0);

        if (!VAR_1)
                return;

        if (VAR_1->event_sources)
                return;

        VAR_2 = VAR_1->inotify_data;
        FUNC_1(VAR_0, VAR_1);

        if (VAR_2 && FUNC_3(VAR_2->inodes))
                FUNC_2(VAR_0, VAR_2);
}
