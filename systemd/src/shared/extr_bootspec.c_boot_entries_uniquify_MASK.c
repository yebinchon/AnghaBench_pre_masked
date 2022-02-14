
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int show_title; scalar_t__ id; scalar_t__ machine_id; scalar_t__ version; } ;
typedef TYPE_1__ BootEntry ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t,int*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(BootEntry *VAR_1, size_t VAR_2) {
        char *VAR_3;
        size_t VAR_4;
        int VAR_5;
        bool VAR_6[VAR_2];

        FUNC_1(VAR_1 || VAR_2 == 0);


        if (!FUNC_3(VAR_1, VAR_2, VAR_6))
                return 0;


        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
                if (VAR_6[VAR_4] && VAR_1[VAR_4].version) {
                        VAR_5 = FUNC_0(&VAR_3, "%d (%ld)", FUNC_2(VAR_1 + VAR_4), VAR_1[VAR_4].version);
                        if (VAR_5 < 0)
                                return -VAR_0;

                        FUNC_4(VAR_1[VAR_4].show_title, VAR_3);
                }

        if (!FUNC_3(VAR_1, VAR_2, VAR_6))
                return 0;


        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
                if (VAR_6[VAR_4] && VAR_1[VAR_4].machine_id) {
                        VAR_5 = FUNC_0(&VAR_3, "%d (%ld)", FUNC_2(VAR_1 + VAR_4), VAR_1[VAR_4].machine_id);
                        if (VAR_5 < 0)
                                return -VAR_0;

                        FUNC_4(VAR_1[VAR_4].show_title, VAR_3);
                }

        if (!FUNC_3(VAR_1, VAR_2, VAR_6))
                return 0;


        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
                if (VAR_6[VAR_4]) {
                        VAR_5 = FUNC_0(&VAR_3, "%d (%ld)", FUNC_2(VAR_1 + VAR_4), VAR_1[VAR_4].id);
                        if (VAR_5 < 0)
                                return -VAR_0;

                        FUNC_4(VAR_1[VAR_4].show_title, VAR_3);
                }

        return 0;
}
