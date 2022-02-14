
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_device ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const**) ;
 scalar_t__ FUNC_2 (char const*,char const**) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static sd_device *FUNC_4(sd_device *VAR_0, const char *VAR_1) {
        sd_device *VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        for (VAR_2 = VAR_0; ; ) {
                const char *VAR_3;

                if (FUNC_2(VAR_2, &VAR_3) < 0)
                        break;

                if (!FUNC_3(VAR_3, VAR_1))
                        break;

                VAR_0 = VAR_2;
                if (FUNC_1(VAR_0, &VAR_2) < 0)
                        break;
        }

        return VAR_0;
}
