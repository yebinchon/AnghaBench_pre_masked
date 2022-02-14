
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (unsigned long*,size_t) ;
 scalar_t__ FUNC_2 (int *,char const*,char const**) ;
 char* FUNC_3 (char*,char) ;
 unsigned long FUNC_4 (char*,int *,int) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static void FUNC_6(sd_device *VAR_3, const char* VAR_4,
                         unsigned long *VAR_5, size_t VAR_6,
                         bool VAR_7) {
        const char *VAR_8;
        char VAR_9[4096];
        unsigned VAR_10;
        char* VAR_11;
        unsigned long VAR_12;

        if (FUNC_2(VAR_3, VAR_4, &VAR_8) < 0)
                VAR_8 = "";

        FUNC_5(VAR_9, "%s", VAR_8);
        FUNC_0(VAR_3, "%s raw kernel attribute: %s", VAR_4, VAR_9);

        FUNC_1(VAR_5, VAR_6);
        VAR_10 = 0;
        while ((VAR_11 = FUNC_3(VAR_9, ' ')) != ((void*)0)) {
                VAR_12 = FUNC_4(VAR_11+1, ((void*)0), 16);
                if (VAR_10 < VAR_6 / sizeof(unsigned long))
                        VAR_5[VAR_10] = VAR_12;
                else
                        FUNC_0(VAR_3, "Ignoring %s block %lX which is larger than maximum size", VAR_4, VAR_12);
                *VAR_11 = '\0';
                ++VAR_10;
        }
        VAR_12 = FUNC_4 (VAR_9, ((void*)0), 16);
        if (VAR_10 < VAR_6 / sizeof(unsigned long))
                VAR_5[VAR_10] = VAR_12;
        else
                FUNC_0(VAR_3, "Ignoring %s block %lX which is larger than maximum size", VAR_4, VAR_12);

        if (VAR_7) {

                FUNC_5(VAR_9, "  bit %%4u: %%0%zulX\n",
                         2 * sizeof(unsigned long));
                FUNC_0(VAR_3, "%s decoded bit map:", VAR_4);
                VAR_12 = VAR_6 / sizeof (unsigned long);

                while (VAR_5[VAR_12-1] == 0 && VAR_12 > 0)
                        --VAR_12;
                for (VAR_10 = 0; VAR_10 < VAR_12; ++VAR_10) {
                        VAR_1;
                        FUNC_0(VAR_3, VAR_9, VAR_10 * VAR_0, VAR_5[VAR_10]);
                        VAR_2;
                }
        }
}
