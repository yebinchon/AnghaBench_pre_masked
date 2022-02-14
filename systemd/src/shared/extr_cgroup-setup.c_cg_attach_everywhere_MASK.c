
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef char* (* cg_migrate_callback_t ) (int ,void*) ;
typedef int CGroupMask ;
typedef scalar_t__ CGroupController ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(CGroupMask VAR_3, const char *VAR_4, pid_t VAR_5, cg_migrate_callback_t VAR_6, void *VAR_7) {
        CGroupController VAR_8;
        CGroupMask VAR_9;
        int VAR_10;

        VAR_10 = FUNC_4(VAR_1, VAR_4, VAR_5);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_3();
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 > 0)
                return 0;

        VAR_3 &= VAR_0;
        VAR_9 = 0;

        for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
                CGroupMask VAR_11 = FUNC_0(VAR_8);
                const char *VAR_12 = ((void*)0);

                if (!FUNC_2(VAR_3, VAR_11))
                        continue;

                if (FUNC_2(VAR_9, VAR_11))
                        continue;

                if (VAR_6)
                        VAR_12 = VAR_6(VAR_11, VAR_7);
                if (!VAR_12)
                        VAR_12 = VAR_4;

                (void) FUNC_5(FUNC_6(VAR_8), VAR_12, VAR_5);
                VAR_9 |= FUNC_1(VAR_11);
        }

        return 0;
}
