
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_transform_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static video_transform_t FUNC_0( unsigned VAR_8, bool VAR_9 )
{
    switch ( VAR_8 )
    {
        case 90:
            return VAR_9 ? VAR_6 : VAR_5;
        case 180:
            return VAR_9 ? VAR_7 : VAR_3;
        case 270:
            return VAR_9 ? VAR_0 : VAR_4;
        default:
            return VAR_9 ? VAR_1 : VAR_2;
    }
}
