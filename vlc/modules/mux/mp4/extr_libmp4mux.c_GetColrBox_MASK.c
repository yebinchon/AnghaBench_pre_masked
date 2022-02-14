
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ color_range; int space; int transfer; int primaries; } ;
typedef TYPE_1__ video_format_t ;
typedef int bo_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bo_t *FUNC_7(const video_format_t *VAR_1, bool VAR_2)
{
    bo_t *VAR_3 = FUNC_3("colr");
    if(VAR_3)
    {
        FUNC_2(VAR_3, 4, VAR_2 ? "nclc" : "nclx");
        FUNC_0(VAR_3, FUNC_5(VAR_1->primaries));
        FUNC_0(VAR_3, FUNC_6(VAR_1->transfer));
        FUNC_0(VAR_3, FUNC_4(VAR_1->space));
        FUNC_1(VAR_3, VAR_1->color_range == VAR_0 ? 0x80 : 0x00);
    }
    return VAR_3;
}
