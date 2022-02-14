
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acl_tag_t ;
typedef int acl_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;

int FUNC_5(acl_t *VAR_6) {
        acl_entry_t VAR_7;
        int VAR_8;
        bool VAR_9 = 0;

        FUNC_4(VAR_6);

        for (VAR_8 = FUNC_2(*VAR_6, VAR_0, &VAR_7);
             VAR_8 > 0;
             VAR_8 = FUNC_2(*VAR_6, VAR_3, &VAR_7)) {
                acl_tag_t VAR_10;

                if (FUNC_3(VAR_7, &VAR_10) < 0)
                        return -VAR_5;

                if (VAR_10 == VAR_2)
                        return 0;

                if (FUNC_0(VAR_10, VAR_4, VAR_1))
                        VAR_9 = 1;
        }
        if (VAR_8 < 0)
                return -VAR_5;

        if (VAR_9 && FUNC_1(VAR_6) < 0)
                return -VAR_5;

        return VAR_9;
}
