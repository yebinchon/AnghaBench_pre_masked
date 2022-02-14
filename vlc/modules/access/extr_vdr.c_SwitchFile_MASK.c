
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int fd; unsigned int i_current_file; } ;
typedef TYPE_2__ access_sys_t ;


 unsigned int VAR_0 ;
 char* FUNC_0 (TYPE_1__*,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,int ,int ,char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static bool FUNC_13( stream_t *VAR_3, unsigned VAR_4 )
{
    access_sys_t *VAR_5 = VAR_3->p_sys;


    if( VAR_5->fd != -1 && VAR_5->i_current_file == VAR_4 )
        return 1;


    if( VAR_5->fd != -1 )
    {
        FUNC_8( VAR_5->fd );
        VAR_5->fd = -1;
    }


    if( VAR_4 >= VAR_0 )
        return 0;
    VAR_5->i_current_file = VAR_4;


    char *VAR_6 = FUNC_0( VAR_3, VAR_4 );
    if( !VAR_6 )
        return 0;
    VAR_5->fd = FUNC_10( VAR_6, VAR_1 );

    if( VAR_5->fd == -1 )
    {
        FUNC_7( VAR_3, "Failed to open %s: %s", VAR_6,
                 FUNC_12(VAR_2) );
        goto error;
    }


    struct stat VAR_7;
    if( FUNC_5( VAR_5->fd, &VAR_7 ) || !FUNC_2( VAR_7.st_mode ) )
    {
        FUNC_7( VAR_3, "%s is not a regular file", VAR_6 );
        goto error;
    }

    FUNC_1( VAR_5->fd );

    FUNC_6( VAR_3, "opened %s", VAR_6 );
    FUNC_4( VAR_6 );
    return 1;

error:
    FUNC_9 (VAR_3, FUNC_3("File reading failed"), FUNC_3("VLC could not"
        " open the file \"%s\" (%s)."), VAR_6, FUNC_11(VAR_2) );
    if( VAR_5->fd != -1 )
    {
        FUNC_8( VAR_5->fd );
        VAR_5->fd = -1;
    }
    FUNC_4( VAR_6 );
    return 0;
}
