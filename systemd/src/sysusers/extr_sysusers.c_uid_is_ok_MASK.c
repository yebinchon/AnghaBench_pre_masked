
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct passwd {int dummy; } ;
struct group {char const* gr_name; } ;
typedef int gid_t ;
struct TYPE_3__ {char const* name; } ;
typedef TYPE_1__ Item ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct group* FUNC_3 (int ) ;
 struct passwd* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ,int ) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (char const*,char const*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(uid_t VAR_7, const char *VAR_8, bool VAR_9) {
        struct passwd *VAR_10;
        struct group *VAR_11;
        const char *VAR_12;
        Item *VAR_13;


        if (FUNC_7(VAR_6, FUNC_2(VAR_7)))
                return 0;



        if (VAR_9) {
                VAR_13 = FUNC_7(VAR_5, FUNC_0(VAR_7));
                if (VAR_13 && !FUNC_8(VAR_13->name, VAR_8))
                        return 0;
        }


        if (FUNC_5(VAR_3, FUNC_2(VAR_7)))
                return 0;

        if (VAR_9) {
                VAR_12 = FUNC_6(VAR_2, FUNC_0(VAR_7));
                if (VAR_12 && !FUNC_8(VAR_12, VAR_8))
                        return 0;
        }


        if (!VAR_1) {
                VAR_4 = 0;
                VAR_10 = FUNC_4(VAR_7);
                if (VAR_10)
                        return 0;
                if (!FUNC_1(VAR_4, 0, VAR_0))
                        return -VAR_4;

                if (VAR_9) {
                        VAR_4 = 0;
                        VAR_11 = FUNC_3((gid_t) VAR_7);
                        if (VAR_11) {
                                if (!FUNC_8(VAR_11->gr_name, VAR_8))
                                        return 0;
                        } else if (!FUNC_1(VAR_4, 0, VAR_0))
                                return -VAR_4;
                }
        }

        return 1;
}
