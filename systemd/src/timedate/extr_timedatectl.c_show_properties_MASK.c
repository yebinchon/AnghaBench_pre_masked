
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char*,int *,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(int VAR_3, char **VAR_4, void *VAR_5) {
        sd_bus *VAR_6 = VAR_5;
        int VAR_7;

        FUNC_0(VAR_6);

        VAR_7 = FUNC_2(VAR_6,
                                     "org.freedesktop.timedate1",
                                     "/org/freedesktop/timedate1",
                                     ((void*)0),
                                     VAR_1,
                                     VAR_2,
                                     VAR_0,
                                     ((void*)0));
        if (VAR_7 < 0)
                return FUNC_1(VAR_7);

        return 0;
}
