
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, bool VAR_2, const char *VAR_3) {
        struct stat VAR_4;

        if (FUNC_3(VAR_1, &VAR_4) != 0)
                return -VAR_0;

        if (VAR_2) {
                if (!VAR_3)
                        VAR_3 = "INFO_";
                FUNC_2("%sMAJOR=%u\n"
                       "%sMINOR=%u\n",
                       VAR_3, FUNC_0(VAR_4.st_dev),
                       VAR_3, FUNC_1(VAR_4.st_dev));
        } else
                FUNC_2("%u:%u\n", FUNC_0(VAR_4.st_dev), FUNC_1(VAR_4.st_dev));
        return 0;
}
