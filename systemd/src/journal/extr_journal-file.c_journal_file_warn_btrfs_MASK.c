
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; int fd; } ;
typedef TYPE_1__ JournalFile ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(JournalFile *VAR_1) {
        unsigned VAR_2;
        int VAR_3;

        FUNC_0(VAR_1);
        VAR_3 = FUNC_1(VAR_1->fd);
        if (VAR_3 < 0)
                return FUNC_4(VAR_3, "Failed to determine if journal is on btrfs: %m");
        if (!VAR_3)
                return 0;

        VAR_3 = FUNC_5(VAR_1->fd, &VAR_2);
        if (VAR_3 < 0)
                return FUNC_4(VAR_3, "Failed to read file attributes: %m");

        if (VAR_2 & VAR_0) {
                FUNC_2("Detected btrfs file system with copy-on-write disabled, all is good.");
                return 0;
        }

        FUNC_3("Creating journal file %s on a btrfs file system, and copy-on-write is enabled. "
                   "This is likely to slow down journal access substantially, please consider turning "
                   "off the copy-on-write file attribute on the journal directory, using chattr +C.", VAR_1->path);

        return 1;
}
