
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char*,char const*) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char* VAR_2,
                      const char *VAR_3,
                      unsigned VAR_4,
                      const char *VAR_5,
                      unsigned VAR_6,
                      const char *VAR_7,
                      int VAR_8,
                      const char *VAR_9,
                      void *VAR_10,
                      void *VAR_11) {

        int VAR_12;
        bool *VAR_13 = VAR_10;
        bool VAR_14 = VAR_8;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        VAR_12 = FUNC_2(VAR_9);
        if (VAR_12 < 0) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_12,
                           "Failed to parse boolean value%s: %s",
                           VAR_14 ? "" : ", ignoring", VAR_9);
                return VAR_14 ? -VAR_0 : 0;
        }

        *VAR_13 = VAR_12;
        return 0;
}
