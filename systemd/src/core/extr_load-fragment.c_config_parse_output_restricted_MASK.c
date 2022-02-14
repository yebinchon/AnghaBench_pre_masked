
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ExecOutput ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;

int FUNC_4(
                const char* VAR_5,
                const char *VAR_6,
                unsigned VAR_7,
                const char *VAR_8,
                unsigned VAR_9,
                const char *VAR_10,
                int VAR_11,
                const char *VAR_12,
                void *VAR_13,
                void *VAR_14) {

        ExecOutput VAR_15, *VAR_16 = VAR_13;

        FUNC_1(VAR_6);
        FUNC_1(VAR_10);
        FUNC_1(VAR_12);
        FUNC_1(VAR_13);

        VAR_15 = FUNC_2(VAR_12);
        if (VAR_15 < 0) {
                FUNC_3(VAR_5, VAR_4, VAR_6, VAR_7, 0, "Failed to parse output type, ignoring: %s", VAR_12);
                return 0;
        }

        if (FUNC_0(VAR_15, VAR_3, VAR_2, VAR_0, VAR_1)) {
                FUNC_3(VAR_5, VAR_4, VAR_6, VAR_7, 0, "Standard output types socket, fd:, file:, append: are not supported as defaults, ignoring: %s", VAR_12);
                return 0;
        }

        *VAR_16 = VAR_15;
        return 0;
}
