
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_res {void (* release ) (void*) ;void* payload; } ;


 int VAR_0 ;
 int FUNC_0 (int,size_t,size_t*) ;
 int VAR_1 ;
 struct vlc_res* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int ) ;

void *FUNC_3(size_t VAR_2, void (*VAR_3)(void *))
{
    if (FUNC_2(FUNC_0(sizeof (struct vlc_res), VAR_2, &VAR_2)))
    {
        VAR_1 = VAR_0;
        return ((void*)0);
    }

    struct vlc_res *VAR_4 = FUNC_1(VAR_2);
    if (FUNC_2(VAR_4 == ((void*)0)))
        return ((void*)0);

    VAR_4->release = VAR_3;
    return VAR_4->payload;
}
