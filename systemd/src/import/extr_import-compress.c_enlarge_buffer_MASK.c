
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (int,size_t) ;
 void* FUNC_1 (void*,size_t) ;

__attribute__((used)) static int FUNC_2(void **VAR_1, size_t *VAR_2, size_t *VAR_3) {
        size_t VAR_4;
        void *VAR_5;

        if (*VAR_3 > *VAR_2)
                return 0;

        VAR_4 = FUNC_0(16*1024U, (*VAR_2 * 2));
        VAR_5 = FUNC_1(*VAR_1, VAR_4);
        if (!VAR_5)
                return -VAR_0;

        *VAR_1 = VAR_5;
        *VAR_3 = VAR_4;

        return 1;
}
