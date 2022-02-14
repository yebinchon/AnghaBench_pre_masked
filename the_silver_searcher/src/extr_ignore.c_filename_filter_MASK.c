
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dirent {char* d_name; size_t d_namlen; } ;
struct TYPE_5__ {char* path_start; TYPE_2__* ig; } ;
typedef TYPE_1__ scandir_baton_t ;
struct TYPE_6__ {struct TYPE_6__* parent; int * extensions; int extensions_len; } ;
typedef TYPE_2__ ignores ;
struct TYPE_7__ {int path_to_ignore; scalar_t__ search_all_files; int follow_symlinks; int search_hidden_files; } ;


 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char const*,int *,int ,int ) ;
 int ** VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,struct dirent const*) ;
 scalar_t__ FUNC_4 (char const*,struct dirent const*) ;
 scalar_t__ FUNC_5 (char const*,struct dirent const*) ;
 int FUNC_6 (char*,char const*,...) ;
 TYPE_4__ VAR_1 ;
 int FUNC_7 (TYPE_2__ const*,char const*,char const*) ;
 char* FUNC_8 (char const*,char) ;
 scalar_t__ FUNC_9 (char const*,int *) ;
 size_t FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

int FUNC_12(const char *VAR_2, const struct dirent *VAR_3, void *VAR_4) {
    const char *VAR_5 = VAR_3->d_name;
    if (!VAR_1.search_hidden_files && VAR_5[0] == '.') {
        return 0;
    }

    size_t VAR_6;
    for (VAR_6 = 0; VAR_0[VAR_6] != ((void*)0); VAR_6++) {
        if (FUNC_9(VAR_5, VAR_0[VAR_6]) == 0) {
            return 0;
        }
    }

    if (!VAR_1.follow_symlinks && FUNC_5(VAR_2, VAR_3)) {
        FUNC_6("File %s ignored becaused it's a symlink", VAR_3->d_name);
        return 0;
    }

    if (FUNC_4(VAR_2, VAR_3)) {
        FUNC_6("%s ignored because it's a named pipe or socket", VAR_2);
        return 0;
    }

    if (VAR_1.search_all_files && !VAR_1.path_to_ignore) {
        return 1;
    }

    scandir_baton_t *VAR_7 = (scandir_baton_t *)VAR_4;
    const char *VAR_8 = VAR_7->path_start;

    const char *VAR_9 = FUNC_8(VAR_5, '.');
    if (VAR_9) {
        if (VAR_9[1]) {

            ++VAR_9;
        } else {

            VAR_9 = ((void*)0);
        }
    }




    size_t VAR_10 = 0;


    if (FUNC_11(VAR_5, "./", 2) == 0) {

        VAR_10 = FUNC_10(VAR_5);

        VAR_5++;
        VAR_10--;
    }

    const ignores *VAR_11 = VAR_7->ig;

    while (VAR_11 != ((void*)0)) {
        if (VAR_9) {
            int VAR_12 = FUNC_1(VAR_9, VAR_11->extensions, 0, VAR_11->extensions_len);
            if (VAR_12 >= 0) {
                FUNC_6("file %s ignored because name matches extension %s", VAR_5, VAR_11->extensions[VAR_12]);
                return 0;
            }
        }

        if (FUNC_7(VAR_11, VAR_8, VAR_5)) {
            return 0;
        }

        if (FUNC_3(VAR_2, VAR_3)) {

            if (!VAR_10) {
                VAR_10 = FUNC_10(VAR_5);
            }

            if (VAR_5[VAR_10 - 1] != '/') {
                char *VAR_13;
                FUNC_0(&VAR_13, "%s/", VAR_5);
                int VAR_14 = FUNC_7(VAR_11, VAR_8, VAR_13);
                FUNC_2(VAR_13);
                if (VAR_14) {
                    return 0;
                }
            }
        }
        VAR_11 = VAR_11->parent;
    }

    FUNC_6("%s not ignored", VAR_5);
    return 1;
}
