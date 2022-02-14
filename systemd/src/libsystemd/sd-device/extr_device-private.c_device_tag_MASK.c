
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const**) ;
 int VAR_4 ;
 char* FUNC_2 (char*,char const*,char*,char const*) ;
 int FUNC_3 (char*,int,int ,int ,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(sd_device *VAR_5, const char *VAR_6, bool VAR_7) {
        const char *VAR_8;
        char *VAR_9;
        int VAR_10;

        FUNC_0(VAR_5);
        FUNC_0(VAR_6);

        VAR_10 = FUNC_1(VAR_5, &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_9 = FUNC_2("/run/udev/tags/", VAR_6, "/", VAR_8);

        if (VAR_7) {
                VAR_10 = FUNC_3(VAR_9, 1, VAR_3, VAR_2, VAR_1, 0444);
                if (VAR_10 < 0)
                        return VAR_10;
        } else {
                VAR_10 = FUNC_4(VAR_9);
                if (VAR_10 < 0 && VAR_4 != VAR_0)
                        return -VAR_4;
        }

        return 0;
}
