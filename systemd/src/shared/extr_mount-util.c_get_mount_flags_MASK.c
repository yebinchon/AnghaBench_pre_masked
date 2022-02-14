
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {unsigned long f_flag; } ;
struct libmnt_table {int dummy; } ;
struct libmnt_fs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int,char*,char const*) ;
 char* FUNC_2 (struct libmnt_fs*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,unsigned long*,int ) ;
 struct libmnt_fs* FUNC_5 (struct libmnt_table*,char const*,int ) ;
 scalar_t__ FUNC_6 (char const*,struct statvfs*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_4, unsigned long *VAR_5, struct libmnt_table *VAR_6) {
        struct statvfs VAR_7 = {};
        struct libmnt_fs *VAR_8 = ((void*)0);
        const char *VAR_9 = ((void*)0);
        int VAR_10 = 0;

        VAR_8 = FUNC_5(VAR_6, VAR_4, VAR_0);
        if (!VAR_8) {
                FUNC_0("Could not find '%s' in mount table", VAR_4);
                goto fallback;
        }

        VAR_9 = FUNC_2(VAR_8);
        VAR_10 = FUNC_4(VAR_9, VAR_5, FUNC_3(VAR_1));
        if (VAR_10 != 0) {
                FUNC_1(VAR_10, "Could not get flags for '%s': %m", VAR_4);
                goto fallback;
        }


        *VAR_5 &= ~VAR_2;
        return 0;

fallback:
        if (FUNC_6(VAR_4, &VAR_7) < 0)
                return -VAR_3;

        *VAR_5 = VAR_7.f_flag;
        return 0;
}
