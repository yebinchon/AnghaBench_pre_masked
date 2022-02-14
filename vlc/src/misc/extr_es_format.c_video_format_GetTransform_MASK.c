
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_transform_t ;
typedef scalar_t__ video_orientation_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,unsigned int*,int*) ;
 int FUNC_2 (int ) ;

video_transform_t FUNC_3( video_orientation_t VAR_0,
                                             video_orientation_t VAR_1 )
{
    unsigned VAR_2, VAR_3;
    bool VAR_4, VAR_5;

    FUNC_1( (video_transform_t)VAR_0, &VAR_2, &VAR_4 );
    FUNC_1( FUNC_2( (video_transform_t)VAR_1 ),
                           &VAR_3, &VAR_5 );

    int VAR_6 = (VAR_2 + VAR_3) % 360;
    bool VAR_7 = VAR_4 ^ VAR_5;

    return FUNC_0(VAR_6, VAR_7);
}
