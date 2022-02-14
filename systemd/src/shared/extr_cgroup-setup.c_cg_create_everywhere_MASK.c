
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGroupMask ;
typedef scalar_t__ CGroupController ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 char const* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*,int) ;
 char* FUNC_6 (scalar_t__) ;

int FUNC_7(CGroupMask VAR_3, CGroupMask VAR_4, const char *VAR_5) {
        CGroupController VAR_6;
        CGroupMask VAR_7;
        bool VAR_8;
        int VAR_9;
        VAR_9 = FUNC_4(VAR_1, VAR_5);
        if (VAR_9 < 0)
                return VAR_9;
        VAR_8 = VAR_9;


        VAR_9 = FUNC_3();
        if (VAR_9 < 0)
                return VAR_9;
        if (VAR_9 > 0)
                return VAR_8;

        VAR_3 &= VAR_0;
        VAR_4 = FUNC_1(VAR_4);
        VAR_7 = 0;


        for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
                CGroupMask VAR_10 = FUNC_0(VAR_6);
                const char *VAR_11;

                if (!FUNC_2(VAR_3, VAR_10))
                        continue;

                if (FUNC_2(VAR_7, VAR_10))
                        continue;

                VAR_11 = FUNC_6(VAR_6);
                if (FUNC_2(VAR_4, VAR_10))
                        (void) FUNC_4(VAR_11, VAR_5);
                else
                        (void) FUNC_5(VAR_11, VAR_5, 1);

                VAR_7 |= FUNC_1(VAR_10);
        }

        return VAR_8;
}
