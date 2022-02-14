
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int*,int*) ;

__attribute__((used)) static inline int FUNC_1( const char *VAR_2,
                                     int *VAR_3,
                                     int *VAR_4 )
{
    int VAR_5, VAR_6;
    if( FUNC_0( VAR_2, "size: %dx%d", &VAR_5, &VAR_6 ) == 2 )
    {
        *VAR_3 = VAR_5;
        *VAR_4 = VAR_6;
        return VAR_1;
    }
    else
    {
        return VAR_0;
    }
}
