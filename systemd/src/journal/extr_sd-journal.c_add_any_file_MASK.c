
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_17__ {scalar_t__ toplevel_fd; int current_invalidate_counter; int generation; int files; int mmap; } ;
typedef TYPE_2__ sd_journal ;
struct TYPE_16__ {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_18__ {char const* path; int close_fd; int fd; int last_seen_generation; TYPE_1__ last_stat; } ;
typedef TYPE_3__ JournalFile ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int,char const*,int,int ,int,int ,int,int *,int ,int *,int *,TYPE_3__**) ;
 int FUNC_6 (TYPE_2__*,int,char const*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (int,char*,char const*) ;
 int FUNC_9 (char const*,int) ;
 int FUNC_10 (scalar_t__,int ,int) ;
 TYPE_3__* FUNC_11 (int ,char const*) ;
 int FUNC_12 (int ,char const*,TYPE_3__*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (struct stat*) ;
 int FUNC_18 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_19(
                sd_journal *VAR_6,
                int VAR_7,
                const char *VAR_8) {

        bool VAR_9 = 0;
        JournalFile *VAR_10;
        struct stat VAR_11;
        int VAR_12, VAR_13;

        FUNC_0(VAR_6);
        FUNC_0(VAR_7 >= 0 || VAR_8);

        if (VAR_7 < 0) {
                if (VAR_6->toplevel_fd >= 0)



                        VAR_7 = FUNC_10(VAR_6->toplevel_fd, FUNC_16(VAR_8), VAR_4|VAR_2|VAR_3);
                else
                        VAR_7 = FUNC_9(VAR_8, VAR_4|VAR_2|VAR_3);
                if (VAR_7 < 0) {
                        VAR_12 = FUNC_8(VAR_5, "Failed to open journal file %s: %m", VAR_8);
                        goto finish;
                }

                VAR_9 = 1;

                VAR_12 = FUNC_2(VAR_7, 0);
                if (VAR_12 < 0) {
                        VAR_12 = FUNC_8(VAR_5, "Failed to turn off O_NONBLOCK for %s: %m", VAR_8);
                        goto finish;
                }
        }

        if (FUNC_3(VAR_7, &VAR_11) < 0) {
                VAR_12 = FUNC_8(VAR_5, "Failed to fstat file '%s': %m", VAR_8);
                goto finish;
        }

        VAR_12 = FUNC_17(&VAR_11);
        if (VAR_12 < 0) {
                FUNC_8(VAR_12, "Refusing to open '%s', as it is not a regular file.", VAR_8);
                goto finish;
        }

        VAR_10 = FUNC_11(VAR_6->files, VAR_8);
        if (VAR_10) {
                if (VAR_10->last_stat.st_dev == VAR_11.st_dev &&
                    VAR_10->last_stat.st_ino == VAR_11.st_ino) {






                        VAR_10->last_seen_generation = VAR_6->generation;
                        VAR_12 = 0;
                        goto finish;
                }



                FUNC_14(VAR_6, VAR_10);
                VAR_10 = ((void*)0);
        }

        if (FUNC_13(VAR_6->files) >= VAR_1) {
                FUNC_7("Too many open journal files, not adding %s.", VAR_8);
                VAR_12 = -VAR_0;
                goto finish;
        }

        VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_4, 0, 0, 0, 0, ((void*)0), VAR_6->mmap, ((void*)0), ((void*)0), &VAR_10);
        if (VAR_12 < 0) {
                FUNC_8(VAR_12, "Failed to open journal file %s: %m", VAR_8);
                goto finish;
        }



        VAR_12 = FUNC_12(VAR_6->files, VAR_10->path, VAR_10);
        if (VAR_12 < 0) {
                VAR_10->close_fd = 0;
                (void) FUNC_4(VAR_10);
                goto finish;
        }

        VAR_9 = 0;

        VAR_10->last_seen_generation = VAR_6->generation;

        FUNC_18(VAR_6, VAR_10);
        FUNC_1(VAR_6, VAR_10->fd);

        VAR_6->current_invalidate_counter++;

        FUNC_7("File %s added.", VAR_10->path);

        VAR_12 = 0;

finish:
        if (VAR_9)
                FUNC_15(VAR_7);

        if (VAR_12 < 0) {
                VAR_13 = FUNC_6(VAR_6, VAR_12, VAR_8);
                if (VAR_13 < 0)
                        return VAR_13;
        }

        return VAR_12;
}
