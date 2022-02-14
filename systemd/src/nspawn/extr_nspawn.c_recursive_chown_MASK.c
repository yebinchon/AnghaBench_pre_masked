
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_7, uid_t VAR_8, uid_t VAR_9) {
        int VAR_10;

        FUNC_0(VAR_7);

        if (VAR_6 == VAR_2 || !VAR_5)
                return 0;

        VAR_10 = FUNC_3(VAR_7, VAR_4, VAR_3);
        if (VAR_10 == -VAR_1)
                return FUNC_2(VAR_10, "Automatic UID/GID adjusting is only supported for UID/GID ranges starting at multiples of 2^16 with a range of 2^16.");
        if (VAR_10 == -VAR_0)
                return FUNC_2(VAR_10, "Upper 16 bits of root directory UID and GID do not match.");
        if (VAR_10 < 0)
                return FUNC_2(VAR_10, "Failed to adjust UID/GID shift of OS tree: %m");
        if (VAR_10 == 0)
                FUNC_1("Root directory of image is already owned by the right UID/GID range, skipping recursive chown operation.");
        else
                FUNC_1("Patched directory tree to match UID/GID range.");

        return VAR_10;
}
