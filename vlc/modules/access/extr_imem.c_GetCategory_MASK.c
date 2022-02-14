
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static inline int FUNC_2(vlc_object_t *VAR_4)
{
    const int VAR_5 = FUNC_1(VAR_4, "imem-cat");
    switch (VAR_5)
    {
    case 1:
        return VAR_0;
    case 2:
        return VAR_3;
    case 3:
        return VAR_1;
    default:
        FUNC_0(VAR_4, "Invalid ES category");

    case 4:
        return VAR_2;
    }
}
