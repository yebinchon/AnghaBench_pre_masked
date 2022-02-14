
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ acl_tag_t ;
typedef int * acl_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *,int ,int *) ;
 scalar_t__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

int FUNC_5(acl_t VAR_4, uid_t VAR_5, acl_entry_t *VAR_6) {
        acl_entry_t VAR_7;
        int VAR_8;

        FUNC_4(VAR_4);
        FUNC_4(VAR_6);

        for (VAR_8 = FUNC_1(VAR_4, VAR_0, &VAR_7);
             VAR_8 > 0;
             VAR_8 = FUNC_1(VAR_4, VAR_1, &VAR_7)) {

                acl_tag_t VAR_9;
                uid_t *VAR_10;
                bool VAR_11;

                if (FUNC_3(VAR_7, &VAR_9) < 0)
                        return -VAR_3;

                if (VAR_9 != VAR_2)
                        continue;

                VAR_10 = FUNC_2(VAR_7);
                if (!VAR_10)
                        return -VAR_3;

                VAR_11 = *VAR_10 == VAR_5;
                FUNC_0(VAR_10);

                if (VAR_11) {
                        *VAR_6 = VAR_7;
                        return 1;
                }
        }
        if (VAR_8 < 0)
                return -VAR_3;

        return 0;
}
