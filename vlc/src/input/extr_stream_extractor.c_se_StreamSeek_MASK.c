
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int (* pf_seek ) (TYPE_2__*,int ) ;} ;
struct stream_extractor_private {TYPE_2__ extractor; } ;
struct TYPE_4__ {struct stream_extractor_private* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_1( stream_t* VAR_0, uint64_t VAR_1 )
{
    struct stream_extractor_private* VAR_2 = VAR_0->p_sys;
    return VAR_2->extractor.pf_seek( &VAR_2->extractor, VAR_1 );
}
