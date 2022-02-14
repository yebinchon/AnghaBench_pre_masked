
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char const* d_name; } ;
typedef int ptrdiff_t ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*,...) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (char*,char const*,size_t) ;
 int * FUNC_9 (char const*) ;
 struct dirent* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (scalar_t__) ;
 size_t FUNC_13 (char const*) ;

int FUNC_14(const char *VAR_2, char** VAR_3, size_t* VAR_4, char** VAR_5, int VAR_6)
{
    DIR *VAR_7;
    struct dirent *VAR_8;
    char* VAR_9;
    size_t VAR_10, VAR_11, VAR_12;
    int VAR_13 = 0;

    if (!(VAR_7 = FUNC_9(VAR_2))) {
        FUNC_0(1, "Cannot open directory '%s': %s\n", VAR_2, FUNC_12(VAR_1));
        return 0;
    }

    VAR_10 = FUNC_13(VAR_2);
    VAR_1 = 0;
    while ((VAR_8 = FUNC_10(VAR_7)) != ((void*)0)) {
        if (FUNC_11 (VAR_8->d_name, "..") == 0 ||
            FUNC_11 (VAR_8->d_name, ".") == 0) continue;
        VAR_11 = FUNC_13(VAR_8->d_name);
        VAR_9 = (char*) FUNC_7(VAR_10 + VAR_11 + 2);
        if (!VAR_9) { FUNC_5(VAR_7); return 0; }
        FUNC_8(VAR_9, VAR_2, VAR_10);

        VAR_9[VAR_10] = '/';
        FUNC_8(VAR_9+VAR_10+1, VAR_8->d_name, VAR_11);
        VAR_12 = VAR_10+1+VAR_11;
        VAR_9[VAR_12] = 0;

        if (!VAR_6 && FUNC_2(VAR_9)) {
            FUNC_0(2, "Warning : %s is a symbolic link, ignoring\n", VAR_9);
            FUNC_6(VAR_9);
            continue;
        }

        if (FUNC_1(VAR_9)) {
            VAR_13 += FUNC_14(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
            if (*VAR_3 == ((void*)0)) { FUNC_6(VAR_9); FUNC_5(VAR_7); return 0; }
        } else {
            if (*VAR_3 + *VAR_4 + VAR_12 >= *VAR_5) {
                ptrdiff_t VAR_14 = (*VAR_5 - *VAR_3) + VAR_0;
                FUNC_4(VAR_14 >= 0);
                *VAR_3 = (char*)FUNC_3(*VAR_3, (size_t)VAR_14);
                *VAR_5 = *VAR_3 + VAR_14;
                if (*VAR_3 == ((void*)0)) { FUNC_6(VAR_9); FUNC_5(VAR_7); return 0; }
            }
            if (*VAR_3 + *VAR_4 + VAR_12 < *VAR_5) {
                FUNC_8(*VAR_3 + *VAR_4, VAR_9, VAR_12 + 1);
                *VAR_4 += VAR_12 + 1;
                VAR_13++;
            }
        }
        FUNC_6(VAR_9);
        VAR_1 = 0;
    }

    if (VAR_1 != 0) {
        FUNC_0(1, "readdir(%s) error: %s\n", VAR_2, FUNC_12(VAR_1));
        FUNC_6(*VAR_3);
        *VAR_3 = ((void*)0);
    }
    FUNC_5(VAR_7);
    return VAR_13;
}
