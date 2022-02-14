
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct archive_entry {int dummy; } ;
struct TYPE_3__ {int b_seekable_archive; int * p_archive; scalar_t__ b_seekable_source; int p_obj; int p_entry; } ;
typedef TYPE_1__ private_sys_t ;
typedef int libarchive_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_entry*) ;
 char* FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct archive_entry**) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int const,char*,char const*) ;
 int FUNC_7 (int ,char*,int ) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10( private_sys_t* VAR_4, char const* VAR_5 )
{
    libarchive_t* VAR_6 = VAR_4->p_archive;

    struct archive_entry* VAR_7;
    int VAR_8;

    while( !( VAR_8 = FUNC_4( VAR_6, &VAR_7 ) ) )
    {
        char const* VAR_9 = FUNC_1( VAR_7 );

        if( FUNC_8( VAR_9, VAR_5 ) == 0 )
        {
            VAR_4->p_entry = FUNC_0( VAR_7 );

            if( FUNC_9( !VAR_4->p_entry ) )
                return VAR_2;

            break;
        }

        FUNC_3( VAR_6 );
    }

    switch( VAR_8 )
    {
        case 128:
            FUNC_7( VAR_4->p_obj,
              "libarchive: %s", FUNC_2( VAR_6 ) );

        case 131:
        case 130:
        case 129:
            FUNC_6( VAR_6, 130,
                "archive does not contain >>> %s <<<", VAR_5 );

            return VAR_1;
    }



    if( VAR_4->b_seekable_source )
    {
        if( FUNC_5( VAR_4->p_archive, 0, VAR_0 ) >= 0 )
            VAR_4->b_seekable_archive = 1;
    }

    return VAR_3;
}
