
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int acl_t ;
typedef int acl_permset_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (char const*,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (char const*) ;
 int VAR_4 ;
 int FUNC_13 (int ) ;

int FUNC_14(const char *VAR_5,
                bool VAR_6,
                bool VAR_7, uid_t VAR_8,
                bool VAR_9, uid_t VAR_10) {

        acl_t VAR_11;
        int VAR_12 = 0;
        bool VAR_13 = 0;

        FUNC_12(VAR_5);

        VAR_11 = FUNC_6(VAR_5, VAR_1);
        if (!VAR_11)
                return -VAR_4;

        if (VAR_6) {

                VAR_12 = FUNC_13(VAR_11);
                if (VAR_12 < 0)
                        goto finish;
                if (VAR_12 > 0)
                        VAR_13 = 1;

        } else if (VAR_7 && VAR_8 > 0) {
                acl_entry_t VAR_14;

                VAR_12 = FUNC_4(VAR_11, VAR_8, &VAR_14);
                if (VAR_12 < 0)
                        goto finish;

                if (VAR_12 > 0) {
                        if (FUNC_3(VAR_11, VAR_14) < 0) {
                                VAR_12 = -VAR_4;
                                goto finish;
                        }

                        VAR_13 = 1;
                }
        }

        if (VAR_9 && VAR_10 > 0) {
                acl_entry_t VAR_15;
                acl_permset_t VAR_16;
                int VAR_17, VAR_18;

                VAR_12 = FUNC_4(VAR_11, VAR_10, &VAR_15);
                if (VAR_12 < 0)
                        goto finish;

                if (VAR_12 == 0) {
                        if (FUNC_2(&VAR_11, &VAR_15) < 0) {
                                VAR_12 = -VAR_4;
                                goto finish;
                        }

                        if (FUNC_11(VAR_15, VAR_2) < 0 ||
                            FUNC_10(VAR_15, &VAR_10) < 0) {
                                VAR_12 = -VAR_4;
                                goto finish;
                        }
                }

                if (FUNC_8(VAR_15, &VAR_16) < 0) {
                        VAR_12 = -VAR_4;
                        goto finish;
                }

                VAR_17 = FUNC_7(VAR_16, VAR_0);
                if (VAR_17 < 0) {
                        VAR_12 = -VAR_4;
                        goto finish;
                }

                VAR_18 = FUNC_7(VAR_16, VAR_3);
                if (VAR_18 < 0) {
                        VAR_12 = -VAR_4;
                        goto finish;
                }

                if (!VAR_17 || !VAR_18) {

                        if (FUNC_0(VAR_16, VAR_0|VAR_3) < 0) {
                                VAR_12 = -VAR_4;
                                goto finish;
                        }

                        VAR_13 = 1;
                }
        }

        if (!VAR_13)
                goto finish;

        if (FUNC_1(&VAR_11) < 0) {
                VAR_12 = -VAR_4;
                goto finish;
        }

        if (FUNC_9(VAR_5, VAR_1, VAR_11) < 0) {
                VAR_12 = -VAR_4;
                goto finish;
        }

        VAR_12 = 0;

finish:
        FUNC_5(VAR_11);

        return VAR_12;
}
