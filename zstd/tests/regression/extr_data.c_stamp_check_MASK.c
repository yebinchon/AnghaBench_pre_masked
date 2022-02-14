
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int data_t ;
typedef int actual ;
typedef int XXH64_canonical_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 scalar_t__ const FUNC_1 (int *) ;
 char* FUNC_2 (char const*,char*,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 size_t FUNC_6 (int *,int,int,int *) ;
 int FUNC_7 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int const* const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(char const* VAR_2, data_t const* const* VAR_3) {
    char* VAR_4 = FUNC_2(VAR_2, "/", VAR_0);
    uint64_t const VAR_5 = FUNC_8(VAR_3);
    XXH64_canonical_t VAR_6;
    FILE* VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (VAR_4 == ((void*)0))
        goto out;
    if (!FUNC_0(VAR_4)) {
        FUNC_5(VAR_1, "stamp does not exist: recreating the data cache\n");
        goto out;
    }

    VAR_7 = FUNC_4(VAR_4, "rb");
    if (VAR_7 == ((void*)0)) {
        FUNC_5(VAR_1, "could not open stamp: recreating the data cache\n");
        goto out;
    }

    size_t VAR_9;
    if ((VAR_9 = FUNC_6(&VAR_6, sizeof(VAR_6), 1, VAR_7)) != 1) {
        FUNC_5(VAR_1, "invalid stamp: recreating the data cache\n");
        goto out;
    }

    VAR_8 = (VAR_5 == FUNC_1(&VAR_6));
    if (VAR_8)
        FUNC_5(VAR_1, "stamp matches: reusing the cached data\n");
    else
        FUNC_5(VAR_1, "stamp does not match: recreating the data cache\n");

out:
    FUNC_7(VAR_4);
    if (VAR_7 != ((void*)0))
        FUNC_3(VAR_7);
    return VAR_8;
}
