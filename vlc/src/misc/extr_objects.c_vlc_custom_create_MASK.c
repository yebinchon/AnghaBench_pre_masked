
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void vlc_object_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (size_t,int) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (void*,void*,char const*) ;

void *(FUNC_5)(vlc_object_t *VAR_0, size_t VAR_1,
                          const char *VAR_2)
{
    FUNC_0(VAR_1 >= sizeof (vlc_object_t));

    vlc_object_t *VAR_3 = FUNC_1(VAR_1, 1);
    if (FUNC_3(VAR_3 == ((void*)0) || FUNC_4(VAR_3, VAR_0, VAR_2))) {
        FUNC_2(VAR_3);
        VAR_3 = ((void*)0);
    }
    return VAR_3;
}
