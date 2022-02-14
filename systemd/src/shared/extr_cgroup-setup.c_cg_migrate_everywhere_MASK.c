
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* (* cg_migrate_callback_t ) (int ,void*) ;
typedef int CGroupMask ;
typedef scalar_t__ CGroupController ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char const*,int ,char const*,int ) ;
 int FUNC_5 (int ,char const*,int ,char const*,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char const*,char const*) ;

int FUNC_8(CGroupMask VAR_4, const char *VAR_5, const char *VAR_6, cg_migrate_callback_t VAR_7, void *VAR_8) {
        CGroupController VAR_9;
        CGroupMask VAR_10;
        int VAR_11 = 0, VAR_12;

        if (!FUNC_7(VAR_5, VAR_6)) {
                VAR_11 = FUNC_4(VAR_2, VAR_5, VAR_2, VAR_6, VAR_1);
                if (VAR_11 < 0)
                        return VAR_11;
        }

        VAR_12 = FUNC_3();
        if (VAR_12 < 0)
                return VAR_12;
        if (VAR_12 > 0)
                return VAR_11;

        VAR_4 &= VAR_0;
        VAR_10 = 0;

        for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
                CGroupMask VAR_13 = FUNC_0(VAR_9);
                const char *VAR_14 = ((void*)0);

                if (!FUNC_2(VAR_4, VAR_13))
                        continue;

                if (FUNC_2(VAR_10, VAR_13))
                        continue;

                if (VAR_7)
                        VAR_14 = VAR_7(VAR_13, VAR_8);
                if (!VAR_14)
                        VAR_14 = VAR_6;

                (void) FUNC_5(VAR_2, VAR_6, FUNC_6(VAR_9), VAR_14, 0);
                VAR_10 |= FUNC_1(VAR_13);
        }

        return VAR_11;
}
