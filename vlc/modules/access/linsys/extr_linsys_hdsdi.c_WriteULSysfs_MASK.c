
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int psz_file ;
typedef int psz_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char const*,unsigned int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_5( const char *VAR_2, unsigned int VAR_3,
                             unsigned int VAR_4 )
{
    char VAR_5[VAR_0], VAR_6[VAR_0];
    int VAR_7;
    ssize_t VAR_8;

    FUNC_0( VAR_5, sizeof(VAR_5) -1, VAR_2, VAR_3 );

    FUNC_0( VAR_6, sizeof(VAR_6) -1, "%u\n", VAR_4 );

    if ( (VAR_7 = FUNC_3( VAR_5, VAR_1 )) < 0 )
        return VAR_7;

    VAR_8 = FUNC_4( VAR_7, VAR_6, FUNC_1(VAR_6) + 1 );
    FUNC_2( VAR_7 );
    return VAR_8;
}
