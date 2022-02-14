
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_playlist_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_4__ {int * playlist; } ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,int ,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,char**) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,char*,int *) ;
 int FUNC_5 (char*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9( intf_thread_t *VAR_5, DBusMessageIter *VAR_6 )
{
    DBusMessageIter VAR_7;
    char *VAR_8 = ((void*)0);
    vlc_playlist_t *VAR_9 = VAR_5->p_sys->playlist;

    FUNC_4( VAR_6, VAR_0, "o",
                                      &VAR_7 );

    FUNC_7(VAR_9);
    size_t VAR_10 = FUNC_6(VAR_9);
    FUNC_8(VAR_9);
    for (size_t VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    {
        if (FUNC_0(&VAR_8, VAR_2, VAR_11) == -1 ||
            !FUNC_2( &VAR_7,
                                             VAR_1,
                                             &VAR_8 ) )
        {
            FUNC_1( VAR_6, &VAR_7 );
            return VAR_3;
        }

        FUNC_5( VAR_8 );
    }

    if( !FUNC_3( VAR_6, &VAR_7 ) )
        return VAR_3;

    return VAR_4;
}
