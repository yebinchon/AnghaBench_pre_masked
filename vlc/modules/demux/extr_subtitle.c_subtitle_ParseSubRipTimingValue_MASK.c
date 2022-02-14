
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_tick_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int*,int*,int*,...) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(vlc_tick_t *VAR_2,
                                           const char *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7 = 0;

    if ( FUNC_1( VAR_3, "%d:%d:%d,%d",
                 &VAR_4, &VAR_5, &VAR_6, &VAR_7 ) == 4 ||
         FUNC_1( VAR_3, "%d:%d:%d.%d",
                 &VAR_4, &VAR_5, &VAR_6, &VAR_7 ) == 4 ||
         FUNC_1( VAR_3, "%d:%d:%d",
                 &VAR_4, &VAR_5, &VAR_6) == 3 )
    {
        (*VAR_2) = FUNC_2( VAR_4 * 3600 + VAR_5 * 60 + VAR_6) +
                          FUNC_0( VAR_7 );

        return VAR_1;
    }

    return VAR_0;
}
