
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Writer ;
struct TYPE_4__ {int ** sources; int active; int sources_size; } ;
typedef int RemoteSource ;
typedef TYPE_1__ RemoteServer ;


 int FUNC_0 (int **,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*,int **) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,char*) ;
 int * FUNC_5 (int,int,char*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(RemoteServer *VAR_0,
                             int VAR_1, char *VAR_2, RemoteSource **VAR_3) {
        Writer *VAR_4;
        int VAR_5;



        FUNC_1(VAR_1 >= 0);
        FUNC_1(VAR_3);

        if (!FUNC_0(VAR_0->sources, VAR_0->sources_size, VAR_1 + 1))
                return FUNC_3();

        VAR_5 = FUNC_2(VAR_0, VAR_2, &VAR_4);
        if (VAR_5 < 0)
                return FUNC_4(VAR_5, "Failed to get writer for source %s: %m",
                                         VAR_2);

        if (!VAR_0->sources[VAR_1]) {
                VAR_0->sources[VAR_1] = FUNC_5(VAR_1, 0, VAR_2, VAR_4);
                if (!VAR_0->sources[VAR_1]) {
                        FUNC_6(VAR_4);
                        return FUNC_3();
                }

                VAR_0->active++;
        }

        *VAR_3 = VAR_0->sources[VAR_1];
        return 0;
}
