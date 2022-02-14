
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
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(acl_t VAR_4) {
        acl_entry_t VAR_5;
        int VAR_6;
        bool VAR_7 = 0;

        FUNC_3(VAR_4);

        for (VAR_6 = FUNC_1(VAR_4, VAR_0, &VAR_5);
             VAR_6 > 0;
             VAR_6 = FUNC_1(VAR_4, VAR_1, &VAR_5)) {

                acl_tag_t VAR_8;

                if (FUNC_2(VAR_5, &VAR_8) < 0)
                        return -VAR_3;

                if (VAR_8 != VAR_2)
                        continue;

                if (FUNC_0(VAR_4, VAR_5) < 0)
                        return -VAR_3;

                VAR_7 = 1;
        }

        if (VAR_6 < 0)
                return -VAR_3;

        return VAR_7;
}
