
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t sd_bus_message ;


 scalar_t__ FUNC_0 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t*) ;
 int FUNC_2 (size_t*,size_t*,int,int*) ;
 int FUNC_3 (size_t*,size_t*,int,int,void**) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (void*,int) ;

__attribute__((used)) static int FUNC_6(
                sd_bus_message *VAR_2,
                bool (*VAR_3)(const char *VAR_4),
                size_t *VAR_5,
                size_t VAR_6,
                const char **VAR_7) {

        uint32_t VAR_8;
        int VAR_9;
        void *VAR_10;

        FUNC_1(VAR_2);
        FUNC_1(VAR_5);

        if (FUNC_0(VAR_2)) {

                if (VAR_6 <= 0)
                        return -VAR_0;

                VAR_9 = FUNC_3(VAR_2, VAR_5, 1, VAR_6, &VAR_10);
                if (VAR_9 < 0)
                        return VAR_9;

                VAR_8 = VAR_6 - 1;
        } else {
                VAR_9 = FUNC_2(VAR_2, VAR_5, 4, &VAR_8);
                if (VAR_9 < 0)
                        return VAR_9;

                if (VAR_8 == VAR_1)

                        return -VAR_0;

                VAR_9 = FUNC_3(VAR_2, VAR_5, 1, VAR_8+1, &VAR_10);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        if (VAR_3) {
                if (!FUNC_4(VAR_10, VAR_8))
                        return -VAR_0;

                if (!VAR_3(VAR_10))
                        return -VAR_0;
        } else {
                if (!FUNC_5(VAR_10, VAR_8))
                        return -VAR_0;
        }

        if (VAR_7)
                *VAR_7 = VAR_10;

        return 0;
}
