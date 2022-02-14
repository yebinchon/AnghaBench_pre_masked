
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* source; } ;
struct stream_extractor_private {TYPE_3__ directory; } ;
struct TYPE_6__ {int psz_url; int pf_control; int pf_readdir; } ;
typedef TYPE_2__ stream_t ;
typedef TYPE_3__ stream_directory_t ;
struct TYPE_5__ {int psz_url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2( struct stream_extractor_private* VAR_4, stream_t* VAR_5 )
{
    stream_directory_t* VAR_6 = &VAR_4->directory;

    VAR_5->pf_readdir = VAR_3;
    VAR_5->pf_control = VAR_2;
    VAR_5->psz_url = FUNC_0( VAR_6->source->psz_url );

    if( FUNC_1( !VAR_5->psz_url ) )
        return VAR_0;

    return VAR_1;
}
