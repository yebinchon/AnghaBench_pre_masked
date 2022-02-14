
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int result_t ;
typedef int method_state_t ;
struct TYPE_12__ {char* name; int (* destroy ) (int *) ;int (* compress ) (int *,TYPE_1__*) ;int * (* create ) (TYPE_2__*) ;} ;
struct TYPE_11__ {scalar_t__ total_size; } ;
struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {char* name; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_1__** VAR_0 ;
 TYPE_2__** VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 TYPE_4__** VAR_5 ;
 TYPE_3__ FUNC_1 (int const) ;
 unsigned long long FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,char*,char*) ;
 int FUNC_11 (int *,char*,...) ;

__attribute__((used)) static int FUNC_12(FILE* VAR_6) {
    FUNC_10(VAR_6, "Data", "Config", "Method");
    FUNC_11(VAR_6, "Total compressed size\n");
    for (size_t VAR_7 = 0; VAR_5[VAR_7] != ((void*)0); ++VAR_7) {
        if (VAR_4 != ((void*)0) && FUNC_5(VAR_5[VAR_7]->name, VAR_4))
            continue;
        for (size_t VAR_8 = 0; VAR_1[VAR_8] != ((void*)0); ++VAR_8) {
            if (VAR_3 != ((void*)0) && FUNC_5(VAR_1[VAR_8]->name, VAR_3))
                continue;

            method_state_t* VAR_9 = VAR_5[VAR_7]->create(VAR_1[VAR_8]);
            for (size_t VAR_10 = 0; VAR_0[VAR_10] != ((void*)0); ++VAR_10) {
                if (VAR_2 != ((void*)0) && FUNC_5(VAR_0[VAR_10]->name, VAR_2))
                    continue;
                if (FUNC_0(VAR_0[VAR_10], VAR_1[VAR_8]))
                    continue;

                result_t const VAR_11 =
                    VAR_5[VAR_7]->compress(VAR_9, VAR_0[VAR_10]);
                if (FUNC_4(VAR_11))
                    continue;
                FUNC_10(
                    VAR_6,
                    VAR_1[VAR_8]->name,
                    VAR_0[VAR_10]->name,
                    VAR_5[VAR_7]->name);
                if (FUNC_3(VAR_11)) {
                    FUNC_11(VAR_6, "%s\n", FUNC_2(VAR_11));
                } else {
                    FUNC_11(
                        VAR_6,
                        "%llu\n",
                        (unsigned long long)FUNC_1(VAR_11).total_size);
                }
                FUNC_9(VAR_6);
            }
            VAR_5[VAR_7]->destroy(VAR_9);
        }
    }
    return 0;
}
