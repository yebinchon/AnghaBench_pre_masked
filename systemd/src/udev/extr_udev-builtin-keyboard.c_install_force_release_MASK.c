
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int const sd_device ;
typedef int codes ;


 int FUNC_0 (unsigned int const*) ;
 int FUNC_1 (unsigned int const*,char*,char*) ;
 int FUNC_2 (unsigned int const*,int,char*) ;
 int FUNC_3 (unsigned int const*,char*,int *,unsigned int const**) ;
 int FUNC_4 (unsigned int const*,char*,char const**) ;
 int FUNC_5 (unsigned int const*,char*,char*) ;
 size_t FUNC_6 (char**,size_t,char const*) ;
 size_t FUNC_7 (char**,size_t,char*,unsigned int const) ;

__attribute__((used)) static int FUNC_8(sd_device *VAR_0, const unsigned *VAR_1, unsigned VAR_2) {
        sd_device *VAR_3;
        const char *VAR_4;
        char VAR_5[4096];
        char *VAR_6;
        size_t VAR_7;
        unsigned VAR_8;
        int VAR_9;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_9 = FUNC_3(VAR_0, "serio", ((void*)0), &VAR_3);
        if (VAR_9 < 0)
                return FUNC_2(VAR_0, VAR_9, "Failed to get serio parent: %m");

        VAR_9 = FUNC_4(VAR_3, "force_release", &VAR_4);
        if (VAR_9 < 0)
                return FUNC_2(VAR_3, VAR_9, "Failed to get force-release attribute: %m");

        VAR_6 = VAR_5;
        VAR_7 = sizeof(VAR_5);


        VAR_7 = FUNC_6(&VAR_6, VAR_7, VAR_4);


        for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
                VAR_7 = FUNC_7(&VAR_6, VAR_7, ",%u", VAR_1[VAR_8]);

        FUNC_1(VAR_3, "keyboard: updating force-release list with '%s'", VAR_5);
        VAR_9 = FUNC_5(VAR_3, "force_release", VAR_5);
        if (VAR_9 < 0)
                return FUNC_2(VAR_3, VAR_9, "Failed to set force-release attribute: %m");

        return 0;
}
