
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef int video_format_t ;
typedef int picture_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int,int,int,int,int,int) ;

picture_t *FUNC_3( vlc_fourcc_t VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4 )
{
    video_format_t VAR_5;

    FUNC_1( &VAR_5, 0 );
    FUNC_2( &VAR_5, VAR_0, VAR_1, VAR_2,
                        VAR_1, VAR_2, VAR_3, VAR_4 );

    return FUNC_0( &VAR_5 );
}
