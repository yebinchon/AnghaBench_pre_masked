
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,char const*,char*) ;

__attribute__((used)) static int FUNC_5(
                sd_bus *VAR_1,
                const char *VAR_2) {

        int VAR_3;

        if (FUNC_2(VAR_2, "/"))
                return FUNC_1(FUNC_0(VAR_0),
                                       "Refusing to operate on root directory: %s", VAR_2);

        if (!FUNC_3(VAR_2))
                return FUNC_1(FUNC_0(VAR_0),
                                       "Path contains non-normalized components: %s", VAR_2);

        VAR_3 = FUNC_4(VAR_1, VAR_2, ".mount");
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_4(VAR_1, VAR_2, ".automount");
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
