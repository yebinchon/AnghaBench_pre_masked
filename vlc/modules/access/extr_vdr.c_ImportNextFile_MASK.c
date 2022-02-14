
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int size; int file_sizes; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 char* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*,char*,...) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7( stream_t *VAR_2 )
{
    access_sys_t *VAR_3 = VAR_2->p_sys;

    char *VAR_4 = FUNC_1( VAR_2, VAR_0 );
    if( !VAR_4 )
        return 0;

    struct stat VAR_5;
    if( FUNC_5( VAR_4, &VAR_5 ) )
    {
        FUNC_4( VAR_2, "could not stat %s: %s", VAR_4,
                 FUNC_6(VAR_1) );
        FUNC_3( VAR_4 );
        return 0;
    }
    if( !FUNC_2( VAR_5.st_mode ) )
    {
        FUNC_4( VAR_2, "%s is not a regular file", VAR_4 );
        FUNC_3( VAR_4 );
        return 0;
    }
    FUNC_4( VAR_2, "%s exists", VAR_4 );
    FUNC_3( VAR_4 );

    FUNC_0( VAR_3->file_sizes, VAR_5.st_size );
    VAR_3->size += VAR_5.st_size;

    return 1;
}
