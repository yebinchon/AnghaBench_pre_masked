
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,size_t,void*,char const*,int) ;
 int FUNC_2 (char*,size_t,char const*,int) ;
 void* FUNC_3 (void*,size_t) ;

void *
FUNC_4(void *VAR_1, size_t VAR_2, const char *VAR_3, int VAR_4)
{
    void *VAR_5;

    FUNC_0(VAR_2 != 0);

    VAR_5 = FUNC_3(VAR_1, VAR_2);
    if (VAR_5 == ((void*)0)) {
        FUNC_2("realloc(%zu) failed @ %s:%d", VAR_2, VAR_3, VAR_4);
    } else {
        FUNC_1(VAR_0, "realloc(%zu) at %p @ %s:%d", VAR_2, VAR_5, VAR_3, VAR_4);
    }

    return VAR_5;
}
