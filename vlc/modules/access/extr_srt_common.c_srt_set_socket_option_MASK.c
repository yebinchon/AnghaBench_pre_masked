
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int SRT_SOCKOPT ;
typedef int SRTSOCKET ;


 int FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,void const*,int) ;

int FUNC_3(vlc_object_t *VAR_0, const char *VAR_1,
        SRTSOCKET VAR_2, SRT_SOCKOPT VAR_3, const void *VAR_4, int VAR_5)
{
    int VAR_6 = 0;

    VAR_6 = FUNC_2( VAR_2, 0, VAR_3, VAR_4, VAR_5 );
    if (VAR_6)
    FUNC_0( VAR_0, "Failed to set socket option %s (reason: %s)", VAR_1,
            FUNC_1() );

    return VAR_6;
}
