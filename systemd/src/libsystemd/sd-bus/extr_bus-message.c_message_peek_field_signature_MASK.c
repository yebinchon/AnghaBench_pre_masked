
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t sd_bus_message ;


 scalar_t__ FUNC_0 (size_t*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (size_t*) ;
 int FUNC_2 (size_t*,size_t*,int,size_t,void**) ;
 int FUNC_3 (void*,size_t) ;

__attribute__((used)) static int FUNC_4(
                sd_bus_message *VAR_2,
                size_t *VAR_3,
                size_t VAR_4,
                const char **VAR_5) {

        size_t VAR_6;
        int VAR_7;
        void *VAR_8;

        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        if (FUNC_0(VAR_2)) {

                if (VAR_4 <= 0)
                        return -VAR_0;

                VAR_7 = FUNC_2(VAR_2, VAR_3, 1, VAR_4, &VAR_8);
                if (VAR_7 < 0)
                        return VAR_7;

                VAR_6 = VAR_4 - 1;
        } else {
                VAR_7 = FUNC_2(VAR_2, VAR_3, 1, 1, &VAR_8);
                if (VAR_7 < 0)
                        return VAR_7;

                VAR_6 = *(uint8_t*) VAR_8;
                if (VAR_6 == VAR_1)

                        return -VAR_0;

                VAR_7 = FUNC_2(VAR_2, VAR_3, 1, VAR_6+1, &VAR_8);
                if (VAR_7 < 0)
                        return VAR_7;
        }

        if (!FUNC_3(VAR_8, VAR_6))
                return -VAR_0;

        if (VAR_5)
                *VAR_5 = VAR_8;

        return 0;
}
