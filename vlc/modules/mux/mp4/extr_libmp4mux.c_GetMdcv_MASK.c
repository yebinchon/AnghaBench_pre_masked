
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int min_luminance; int max_luminance; int * white_point; int * primaries; } ;
struct TYPE_5__ {TYPE_1__ mastering; } ;
typedef TYPE_2__ video_format_t ;
typedef int bo_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (char*) ;

__attribute__((used)) static bo_t *FUNC_3(const video_format_t *VAR_0)
{
    if(!VAR_0->mastering.max_luminance)
        return ((void*)0);
    bo_t *VAR_1 = FUNC_2("mdcv");
    if(VAR_1)
    {
        for(int VAR_2=0; VAR_2<6; VAR_2++)
            FUNC_0(VAR_1, VAR_0->mastering.primaries[VAR_2]);
        FUNC_0(VAR_1, VAR_0->mastering.white_point[0]);
        FUNC_0(VAR_1, VAR_0->mastering.white_point[1]);
        FUNC_1(VAR_1, VAR_0->mastering.max_luminance);
        FUNC_1(VAR_1, VAR_0->mastering.min_luminance);
    }
    return VAR_1;
}
