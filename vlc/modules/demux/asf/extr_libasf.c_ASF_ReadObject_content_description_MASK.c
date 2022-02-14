
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int stream_t ;
typedef int ssize_t ;
struct TYPE_5__ {scalar_t__ i_object_size; void* psz_rating; void* psz_description; void* psz_copyright; void* psz_artist; void* psz_title; } ;
struct TYPE_4__ {TYPE_2__ content_description; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_content_description_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int const*,scalar_t__) ;
 int FUNC_3 (int *,char*,void*,void*,void*,void*,void*) ;
 int FUNC_4 (int *,int const**,scalar_t__) ;

__attribute__((used)) static int FUNC_5(stream_t *VAR_4, asf_object_t *VAR_5)
{
    asf_object_content_description_t *VAR_6 = &VAR_5->content_description;
    const uint8_t *VAR_7, *VAR_8;
    uint16_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    if( VAR_6->i_object_size > VAR_1 )
        return VAR_2;

    ssize_t VAR_14 = FUNC_4( VAR_4, &VAR_7, VAR_6->i_object_size );
    if( VAR_14 < 34 )
       return VAR_2;

    VAR_8 = VAR_7 + VAR_0;

    VAR_9 = FUNC_1();
    VAR_10 = FUNC_1();
    VAR_11 = FUNC_1();
    VAR_12 = FUNC_1();
    VAR_13 = FUNC_1();

    if( !FUNC_0( VAR_9+VAR_10+VAR_11+VAR_12+VAR_13 ) )
        return VAR_2;

    VAR_6->psz_title = FUNC_2( VAR_8, VAR_9 );
    VAR_6->psz_artist = FUNC_2( VAR_8, VAR_10 );
    VAR_6->psz_copyright = FUNC_2( VAR_8, VAR_11 );
    VAR_6->psz_description = FUNC_2( VAR_8, VAR_12 );
    VAR_6->psz_rating = FUNC_2( VAR_8, VAR_13 );
    return VAR_3;
}
