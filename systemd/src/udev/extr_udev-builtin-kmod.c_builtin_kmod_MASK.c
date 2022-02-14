
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(sd_device *VAR_2, int VAR_3, char *VAR_4[], bool VAR_5) {
        int VAR_6;

        if (!VAR_1)
                return 0;

        if (VAR_3 < 3 || !FUNC_3(VAR_4[1], "load"))
                return FUNC_1(FUNC_0(VAR_0),
                                       "%s: expected: load <module>", VAR_4[0]);

        for (VAR_6 = 2; VAR_4[VAR_6]; VAR_6++)
                (void) FUNC_2(VAR_1, VAR_4[VAR_6], 0);

        return 0;
}
