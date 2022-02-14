
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {char* psz_file_template; scalar_t__ psz_token; } ;
typedef TYPE_2__ filter_sys_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,size_t,int,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,char*,unsigned long,char*) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_9 (char*,int ) ;
 char* FUNC_10 (TYPE_1__*,char*) ;
 int * FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12( filter_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_1->p_sys;
    char *VAR_3 = ((void*)0);
    char *VAR_4 = FUNC_10( VAR_1, "svg-template-file" );
    if( VAR_4 && VAR_4[0] )
    {

        FILE *VAR_5 = FUNC_11( VAR_4, "rt" );
        if( !VAR_5 )
        {
            FUNC_8( VAR_1, "SVG template file %s does not exist.",
                                         VAR_4 );
        }
        else
        {
            struct stat VAR_6;
            if( FUNC_4( FUNC_1( VAR_5 ), &VAR_6 ) || ((signed)VAR_6.st_size) < 0 )
            {
                FUNC_7( VAR_1, "SVG template invalid" );
            }
            else
            {
                FUNC_6( VAR_1, "reading %ld bytes from template %s",
                         (unsigned long)VAR_6.st_size, VAR_4 );

                VAR_3 = FUNC_5( VAR_6.st_size + 1 );
                if( VAR_3 )
                {
                    VAR_3[ VAR_6.st_size ] = 0;
                    ssize_t VAR_7 = FUNC_2( VAR_3, VAR_6.st_size, 1, VAR_5 );
                    if( VAR_7 != 1 )
                    {
                        FUNC_3( VAR_3 );
                        VAR_3 = ((void*)0);
                    }
                }
            }
            FUNC_0( VAR_5 );
        }
    }
    FUNC_3( VAR_4 );

    if( VAR_3 )
    {
        VAR_2->psz_token = FUNC_9( VAR_3, VAR_0 );
        if( !VAR_2->psz_token )
        {
            FUNC_7( VAR_1, "'%s' not found in SVG template", VAR_0 );
            FUNC_3( VAR_3 );
        }
        else *((char*)VAR_2->psz_token) = 0;
    }

    VAR_2->psz_file_template = VAR_3;
}
