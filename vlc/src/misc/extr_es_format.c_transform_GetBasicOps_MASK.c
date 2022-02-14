
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_transform_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2( video_transform_t VAR_0,
                                   unsigned *restrict VAR_1,
                                   bool *restrict VAR_2 )
{
    *VAR_2 = FUNC_0(VAR_0);

    switch ( VAR_0 )
    {
        case 130:
        case 129:
            *VAR_1 = 90;
            break;
        case 132:
        case 128:
            *VAR_1 = 180;
            break;
        case 131:
        case 135:
            *VAR_1 = 270;
            break;
        case 134:
        case 133:
            *VAR_1 = 0;
            break;
        default:
            FUNC_1 ();
    }
}
