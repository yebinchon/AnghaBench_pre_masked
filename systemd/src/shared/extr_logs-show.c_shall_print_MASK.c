
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OutputFlags ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,size_t) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_2, size_t VAR_3, OutputFlags VAR_4) {
        FUNC_0(VAR_2);

        if (VAR_4 & VAR_0)
                return 1;

        if (VAR_3 >= VAR_1)
                return 0;

        if (!FUNC_1(VAR_2, VAR_3))
                return 0;

        return 1;
}
