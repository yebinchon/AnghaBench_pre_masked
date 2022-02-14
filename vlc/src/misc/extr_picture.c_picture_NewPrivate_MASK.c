
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int video_format_t ;
struct TYPE_10__ {int refs; int format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_9__ {int * opaque; } ;
struct TYPE_11__ {TYPE_1__ gc; TYPE_2__ picture; } ;
typedef TYPE_3__ picture_priv_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int const*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static picture_priv_t *FUNC_6(const video_format_t *restrict VAR_0,
                                          size_t VAR_1)
{

    picture_priv_t *VAR_2 = FUNC_2(sizeof (*VAR_2) + VAR_1);
    if( FUNC_5(VAR_2 == ((void*)0)) )
        return ((void*)0);

    picture_t *VAR_3 = &VAR_2->picture;

    FUNC_3( VAR_3, 0, sizeof( *VAR_3 ) );

    VAR_3->format = *VAR_0;

    if( FUNC_4( VAR_3, VAR_0 ) )
    {
        FUNC_1( VAR_3 );
        return ((void*)0);
    }

    FUNC_0(&VAR_3->refs, 1);
    VAR_2->gc.opaque = ((void*)0);

    return VAR_2;
}
