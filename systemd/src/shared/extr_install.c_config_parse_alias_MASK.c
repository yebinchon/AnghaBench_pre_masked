
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UnitType ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,unsigned int,char const*,unsigned int,char const*,int,char const*,void*,void*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int ,char*,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        UnitType VAR_11;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);

        VAR_11 = FUNC_3(VAR_1);
        if (!FUNC_4(VAR_11))
                return FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3, 0,
                                  "Alias= is not allowed for %s units, ignoring.",
                                  FUNC_5(VAR_11));

        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                                 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
