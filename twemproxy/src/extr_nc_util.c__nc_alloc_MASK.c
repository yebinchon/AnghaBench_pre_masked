
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,size_t,void*,char const*,int) ;
 int FUNC_2 (char*,size_t,char const*,int) ;
 void* FUNC_3 (size_t) ;

void *
FUNC_4(size_t VAR_1, const char *VAR_2, int VAR_3)
{
    void *VAR_4;

    FUNC_0(VAR_1 != 0);

    VAR_4 = FUNC_3(VAR_1);
    if (VAR_4 == ((void*)0)) {
        FUNC_2("malloc(%zu) failed @ %s:%d", VAR_1, VAR_2, VAR_3);
    } else {
        FUNC_1(VAR_0, "malloc(%zu) at %p @ %s:%d", VAR_1, VAR_4, VAR_2, VAR_3);
    }

    return VAR_4;
}
