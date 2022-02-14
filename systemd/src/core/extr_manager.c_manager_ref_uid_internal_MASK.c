
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uid_t ;
typedef int gid_t ;
typedef int * Manager ;
typedef int Hashmap ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_4 ;
 int ** FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(
                Manager *VAR_5,
                Hashmap **VAR_6,
                uid_t VAR_7,
                bool VAR_8) {

        uint32_t VAR_9, VAR_10;
        int VAR_11;

        FUNC_3(VAR_5);
        FUNC_3(VAR_6);
        FUNC_3(FUNC_8(VAR_7));




        FUNC_4(sizeof(uid_t) == sizeof(gid_t));
        FUNC_4(VAR_3 == (uid_t) VAR_2);

        if (VAR_7 == 0)
                return 0;

        VAR_11 = FUNC_5(VAR_6, &VAR_4);
        if (VAR_11 < 0)
                return VAR_11;

        VAR_9 = FUNC_0(FUNC_6(*VAR_6, FUNC_1(VAR_7)));

        VAR_10 = VAR_9 & ~VAR_0;
        VAR_10++;

        if (VAR_10 & VAR_0)
                return -VAR_1;

        VAR_9 = VAR_10 | (VAR_9 & VAR_0) | (VAR_8 ? VAR_0 : 0);

        return FUNC_7(*VAR_6, FUNC_1(VAR_7), FUNC_2(VAR_9));
}
