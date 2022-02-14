
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,size_t) ;
 int FUNC_2 (size_t,size_t,size_t*) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int *,size_t) ;

void *FUNC_5(vlc_object_t *VAR_2, size_t VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    if (FUNC_3(FUNC_2(VAR_3, VAR_4, &VAR_5)))
    {
        VAR_1 = VAR_0;
        return ((void*)0);
    }

    void *VAR_6 = FUNC_4(VAR_2, VAR_5);
    if (FUNC_0(VAR_6 != ((void*)0)))
        FUNC_1(VAR_6, 0, VAR_5);
    return VAR_6;
}
