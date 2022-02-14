
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int i_vcdimage_handle; char* psz_dev; int i_device_handle; int toc; } ;
typedef TYPE_1__ vcddev_t ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,char const*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,int) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 int FUNC_11 (int *,char const*,TYPE_1__*) ;

vcddev_t *FUNC_12( vlc_object_t *VAR_2, const char *VAR_3 )
{
    int VAR_4;
    int VAR_5;
    vcddev_t *VAR_6;

    struct stat VAR_7;


    if( !VAR_3 ) return ((void*)0);




    VAR_6 = FUNC_4( sizeof(*VAR_6) );
    if( VAR_6 == ((void*)0) )
        return ((void*)0);
    VAR_6->i_vcdimage_handle = -1;
    VAR_6->psz_dev = ((void*)0);
    FUNC_5( &VAR_6->toc, 0, sizeof(VAR_6->toc) );
    VAR_5 = 1;
    if( FUNC_10( VAR_3, &VAR_7 ) < 0 )
    {
        FUNC_3( VAR_6 );
        return ((void*)0);
    }


    if( FUNC_1( VAR_7.st_mode ) || FUNC_2( VAR_7.st_mode ) )
        VAR_5 = 0;


    if( VAR_5 )
    {
        VAR_4 = FUNC_0( VAR_2, VAR_3, VAR_6 );
    }
    else
    {
        VAR_6->i_device_handle = -1;
        VAR_6->i_device_handle = FUNC_9( VAR_3, VAR_1 | VAR_0 );
        VAR_4 = (VAR_6->i_device_handle == -1) ? -1 : 0;

    }

    if( VAR_4 == 0 )
    {
        VAR_6->psz_dev = (char *)FUNC_7( VAR_3 );
    }
    else
    {
        FUNC_3( VAR_6 );
        VAR_6 = ((void*)0);
    }

    return VAR_6;
}
