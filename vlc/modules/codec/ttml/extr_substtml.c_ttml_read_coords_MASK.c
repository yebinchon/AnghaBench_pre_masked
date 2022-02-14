
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double member_0; scalar_t__ member_1; scalar_t__ unit; } ;
typedef TYPE_1__ ttml_length_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char*,char**) ;
 TYPE_1__ FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4( const char *VAR_1, ttml_length_t *VAR_2, ttml_length_t *VAR_3 )
{
    ttml_length_t VAR_4[2] = { { 0.0, VAR_0 },
                              { 0.0, VAR_0 } };
    char *VAR_5 = FUNC_1( VAR_1 );
    char* VAR_6 = ((void*)0);
    char* VAR_7 = (VAR_5) ? FUNC_2( VAR_5, " ", &VAR_6 ) : ((void*)0);
    for(int VAR_8=0; VAR_8<2 && VAR_7 != ((void*)0); VAR_8++)
    {
        VAR_4[VAR_8] = FUNC_3( VAR_7 );
        VAR_7 = FUNC_2( ((void*)0), " ", &VAR_6 );
    }
    FUNC_0( VAR_5 );

    if( VAR_4[0].unit != VAR_0 &&
        VAR_4[1].unit != VAR_0 )
    {
        *VAR_2 = VAR_4[0];
        *VAR_3 = VAR_4[1];
        return 1;
    }
    return 0;
}
