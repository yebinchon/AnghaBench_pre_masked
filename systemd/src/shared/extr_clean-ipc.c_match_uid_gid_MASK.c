
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(uid_t VAR_0, gid_t VAR_1, uid_t VAR_2, gid_t VAR_3) {

        if (FUNC_1(VAR_2) && VAR_0 == VAR_2)
                return 1;

        if (FUNC_0(VAR_3) && VAR_1 == VAR_3)
                return 1;

        return 0;
}
