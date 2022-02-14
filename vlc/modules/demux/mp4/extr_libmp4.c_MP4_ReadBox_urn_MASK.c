
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {int psz_location; int psz_name; } ;
struct TYPE_5__ {TYPE_4__* p_urn; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    FUNC_2( VAR_0, VAR_1 );

    FUNC_1( VAR_3->data.p_urn );

    FUNC_0( VAR_3->data.p_urn->psz_name );
    FUNC_0( VAR_3->data.p_urn->psz_location );






    FUNC_3( 1 );
}
