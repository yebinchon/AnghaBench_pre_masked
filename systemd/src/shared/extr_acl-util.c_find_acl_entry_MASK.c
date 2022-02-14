
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(acl_t VAR_3, acl_entry_t VAR_4, acl_entry_t *VAR_5) {
        acl_entry_t VAR_6;
        int VAR_7;

        for (VAR_7 = FUNC_1(VAR_3, VAR_0, &VAR_6);
             VAR_7 > 0;
             VAR_7 = FUNC_1(VAR_3, VAR_1, &VAR_6)) {

                VAR_7 = FUNC_0(VAR_6, VAR_4);
                if (VAR_7 < 0)
                        return VAR_7;
                if (VAR_7 > 0) {
                        *VAR_5 = VAR_6;
                        return 1;
                }
        }
        if (VAR_7 < 0)
                return -VAR_2;
        return 0;
}
