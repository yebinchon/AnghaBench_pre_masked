
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MaxFALL; int MaxCLL; } ;
struct TYPE_5__ {TYPE_1__ lighting; } ;
typedef TYPE_2__ video_format_t ;
typedef int bo_t ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (char*) ;

__attribute__((used)) static bo_t *FUNC_2(const video_format_t *VAR_0)
{
    if(!VAR_0->lighting.MaxFALL)
        return ((void*)0);
    bo_t *VAR_1 = FUNC_1("clli");
    if(VAR_1)
    {
        FUNC_0(VAR_1, VAR_0->lighting.MaxCLL);
        FUNC_0(VAR_1, VAR_0->lighting.MaxFALL);
    }
    return VAR_1;
}
