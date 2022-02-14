
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
struct TYPE_8__ {int date; } ;
typedef TYPE_1__ picture_t ;
typedef int libvlc_picture_type_t ;
struct TYPE_9__ {int type; int fmt; int converted; int time; int rc; } ;
typedef TYPE_2__ libvlc_picture_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;



 TYPE_2__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,int *,TYPE_1__*,int ,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

libvlc_picture_t* FUNC_7( vlc_object_t* VAR_4, picture_t* VAR_5,
                                      libvlc_picture_type_t VAR_6,
                                      unsigned int VAR_7, unsigned int VAR_8,
                                      bool VAR_9 )
{
    libvlc_picture_t *VAR_10 = FUNC_2( sizeof( *VAR_10 ) );
    if ( FUNC_4( VAR_10 == ((void*)0) ) )
        return ((void*)0);
    FUNC_6( &VAR_10->rc );
    VAR_10->type = VAR_6;
    VAR_10->time = FUNC_0( VAR_5->date );
    vlc_fourcc_t VAR_11;
    switch ( VAR_6 )
    {
        case 130:
            VAR_11 = VAR_0;
            break;
        case 129:
            VAR_11 = VAR_1;
            break;
        case 128:
            VAR_11 = VAR_2;
            break;
        default:
            FUNC_5();
    }
    if ( FUNC_3( VAR_4, &VAR_10->converted, &VAR_10->fmt,
                         VAR_5, VAR_11, VAR_7, VAR_8, VAR_9 ) != VAR_3 )
    {
        FUNC_1( VAR_10 );
        return ((void*)0);
    }

    return VAR_10;
}
