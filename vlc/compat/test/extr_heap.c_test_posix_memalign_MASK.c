
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void**,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(size_t VAR_0, size_t VAR_1)
{
    void *VAR_2;
    int VAR_3 = FUNC_2(&VAR_2, VAR_0, VAR_1);

    if (VAR_0 >= sizeof (void *)) {
        if (VAR_3 == 0) {
            FUNC_0(((uintptr_t)VAR_2 & (VAR_0 - 1)) == 0);
            FUNC_1(VAR_2);
        }
    } else
        FUNC_0(VAR_3 != 0);
}
