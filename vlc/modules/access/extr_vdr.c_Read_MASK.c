
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_11__ {int fd; int i_current_file; int offset; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_6 (int,void*,size_t) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_10( stream_t *VAR_3, void *VAR_4, size_t VAR_5 )
{
    access_sys_t *VAR_6 = VAR_3->p_sys;

    if( VAR_6->fd == -1 )

        return 0;

    ssize_t VAR_7 = FUNC_6( VAR_6->fd, VAR_4, VAR_5 );

    if( VAR_7 > 0 )
    {

        VAR_6->offset += VAR_7;
        FUNC_3( VAR_3 );
        FUNC_0( VAR_3 );
        return VAR_7;
    }
    else if( VAR_7 == 0 )
    {

        if( VAR_6->i_current_file >= VAR_1 - 1 )
            FUNC_1( VAR_3 );

        FUNC_2( VAR_3, VAR_6->i_current_file + 1 );
        return -1;
    }
    else if( VAR_2 == VAR_0 )
    {

        return -1;
    }
    else
    {

        FUNC_5( VAR_3, "failed to read (%s)", FUNC_9(VAR_2) );
        FUNC_7( VAR_3, FUNC_4("File reading failed"),
            FUNC_4("VLC could not read the file (%s)."),
            FUNC_8(VAR_2) );
        FUNC_2( VAR_3, -1 );
        return 0;
    }
}
