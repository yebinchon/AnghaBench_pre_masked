
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_thread {scalar_t__ cancel_sock; } ;
struct timeval {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_3 () ;
 struct vlc_thread* FUNC_4 () ;

__attribute__((used)) static int FUNC_5( int VAR_0, fd_set *VAR_1, fd_set *VAR_2, fd_set *VAR_3,
                       struct timeval *VAR_4 )
{
    struct vlc_thread *VAR_5 = FUNC_4( );

    int VAR_6;

    if( VAR_5 )
    {
        FUNC_0( VAR_5->cancel_sock, VAR_1 );

        VAR_0 = FUNC_1( VAR_0, VAR_5->cancel_sock + 1 );
    }

    VAR_6 = FUNC_2( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 );

    FUNC_3();

    return VAR_6;

}
