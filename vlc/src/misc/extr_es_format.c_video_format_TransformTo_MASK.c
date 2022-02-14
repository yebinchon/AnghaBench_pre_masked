
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_transform_t ;
typedef int video_orientation_t ;
struct TYPE_4__ {int orientation; } ;
typedef TYPE_1__ video_format_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2( video_format_t *restrict VAR_0,
                               video_orientation_t VAR_1 )
{
    video_transform_t VAR_2 = FUNC_0(VAR_0->orientation,
                                                            VAR_1);
    FUNC_1(VAR_0, VAR_2);
}
