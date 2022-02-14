
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ st_ino; int st_mode; int st_size; } ;
typedef int ssize_t ;
typedef int off_t ;
typedef scalar_t__ ag_compression_type ;
struct TYPE_2__ {scalar_t__ stdout_inode; char* query; int query_len; int match_found; scalar_t__ mmap; int path_sep; scalar_t__ print_nonmatching_files; scalar_t__ search_zip_files; int search_binary_files; int literal; scalar_t__ search_all_files; } ;
typedef int * HANDLE ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int *,int ,int ,void*,int ,int *) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (void*) ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int) ;
 char* FUNC_13 (scalar_t__,char*,int,char const*,int*) ;
 int * FUNC_14 (int,char*,scalar_t__) ;
 int FUNC_15 (char*,char const*,int,int) ;
 int VAR_14 ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int,struct stat*) ;
 scalar_t__ FUNC_20 (char*,int) ;
 scalar_t__ FUNC_21 (char*,int) ;
 int FUNC_22 (char*,char const*) ;
 int FUNC_23 (char*,char const*,...) ;
 int FUNC_24 (char*,int,int ) ;
 char* FUNC_25 (int ,int,int ,int ,int,int ) ;
 int FUNC_26 (char*,int) ;
 int FUNC_27 (char const*,int ) ;
 TYPE_1__ VAR_15 ;
 int FUNC_28 (int,int ,int,int ) ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int VAR_16 ;
 int FUNC_31 (char const*,int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int,char*,int) ;
 int FUNC_35 (char*,int,char const*) ;
 int FUNC_36 (int *,char const*) ;
 int FUNC_37 (char const*,struct stat*) ;
 int FUNC_38 (int ) ;

void FUNC_39(const char *VAR_17) {
    int VAR_18 = -1;
    off_t VAR_19 = 0;
    char *VAR_20 = ((void*)0);
    struct stat VAR_21;
    int VAR_22 = 0;
    int VAR_23 = -1;
    FILE *VAR_24 = ((void*)0);

    VAR_22 = FUNC_37(VAR_17, &VAR_21);
    if (VAR_22 != 0) {
        FUNC_23("Skipping %s: Error fstat()ing file.", VAR_17);
        goto cleanup;
    }

    if (VAR_15.stdout_inode != 0 && VAR_15.stdout_inode == VAR_21.st_ino) {
        FUNC_22("Skipping %s: stdout is redirected to it", VAR_17);
        goto cleanup;
    }


    if (!FUNC_7(VAR_21.st_mode) && !FUNC_6(VAR_21.st_mode)) {
        FUNC_23("Skipping %s: Mode %u is not a file.", VAR_17, VAR_21.st_mode);
        goto cleanup;
    }

    VAR_18 = FUNC_27(VAR_17, VAR_9);
    if (VAR_18 < 0) {

        FUNC_23("Skipping %s: Error opening file: %s", VAR_17, FUNC_38(VAR_14));
        goto cleanup;
    }


    VAR_22 = FUNC_19(VAR_18, &VAR_21);
    if (VAR_22 != 0) {
        FUNC_23("Skipping %s: Error fstat()ing file.", VAR_17);
        goto cleanup;
    }

    if (VAR_15.stdout_inode != 0 && VAR_15.stdout_inode == VAR_21.st_ino) {
        FUNC_22("Skipping %s: stdout is redirected to it", VAR_17);
        goto cleanup;
    }


    if (!FUNC_7(VAR_21.st_mode) && !FUNC_6(VAR_21.st_mode)) {
        FUNC_23("Skipping %s: Mode %u is not a file.", VAR_17, VAR_21.st_mode);
        goto cleanup;
    }

    FUNC_30();

    if (VAR_21.st_mode & VAR_13) {
        FUNC_22("%s is a named pipe. stream searching", VAR_17);
        VAR_24 = FUNC_17(VAR_18, "r");
        VAR_23 = FUNC_36(VAR_24, VAR_17);
        FUNC_16(VAR_24);
        goto cleanup;
    }

    VAR_19 = VAR_21.st_size;

    if (VAR_19 == 0) {
        if (VAR_15.query[0] == '.' && VAR_15.query_len == 1 && !VAR_15.literal && VAR_15.search_all_files) {
            VAR_23 = FUNC_35(VAR_20, VAR_19, VAR_17);
        } else {
            FUNC_22("Skipping %s: file is empty.", VAR_17);
        }
        goto cleanup;
    }

    if (!VAR_15.literal && VAR_19 > VAR_5) {
        FUNC_23("Skipping %s: pcre_exec() can't handle files larger than %i bytes.", VAR_17, VAR_5);
        goto cleanup;
    }
    if (VAR_15.mmap) {
        VAR_20 = FUNC_25(0, VAR_19, VAR_12, VAR_8, VAR_18, 0);
        if (VAR_20 == VAR_7) {
            FUNC_23("File %s failed to load: %s.", VAR_17, FUNC_38(VAR_14));
            goto cleanup;
        }





    } else {
        VAR_20 = FUNC_10(VAR_19);

        ssize_t VAR_25 = 0;

        if (!VAR_15.search_binary_files) {
            VAR_25 += FUNC_34(VAR_18, VAR_20, FUNC_11(VAR_19, 512));

            if (FUNC_20(VAR_20, VAR_19)) {
                FUNC_22("File %s is binary. Skipping...", VAR_17);
                goto cleanup;
            }
        }

        while (VAR_25 < VAR_19) {
            VAR_25 += FUNC_34(VAR_18, VAR_20 + VAR_25, VAR_19);
        }
        if (VAR_25 != VAR_19) {
            FUNC_15("File %s read(): expected to read %u bytes but read %u", VAR_17, VAR_19, VAR_25);
        }
    }


    if (VAR_15.search_zip_files) {
        ag_compression_type VAR_26 = FUNC_21(VAR_20, VAR_19);
        if (VAR_26 != VAR_0) {






            int VAR_27 = (int)VAR_19;
            char *VAR_28 = FUNC_13(VAR_26, VAR_20, VAR_19, VAR_17, &VAR_27);
            if (VAR_28 == ((void*)0) || VAR_27 == 0) {
                FUNC_23("Cannot decompress zipped file %s", VAR_17);
                goto cleanup;
            }
            VAR_23 = FUNC_35(VAR_28, VAR_27, VAR_17);
            FUNC_18(VAR_28);

            goto cleanup;
        }
    }

    VAR_23 = FUNC_35(VAR_20, VAR_19, VAR_17);

cleanup:

    if (VAR_15.print_nonmatching_files && VAR_23 == 0) {
        FUNC_32(&VAR_16);
        FUNC_31(VAR_17, VAR_15.path_sep);
        FUNC_33(&VAR_16);
        VAR_15.match_found = 1;
    }

    FUNC_29();
    if (VAR_20 != ((void*)0)) {



        if (VAR_15.mmap) {
            if (VAR_20 != VAR_7) {
                FUNC_26(VAR_20, VAR_19);
            }
        } else {
            FUNC_18(VAR_20);
        }

    }
    if (VAR_18 != -1) {
        FUNC_12(VAR_18);
    }
}
