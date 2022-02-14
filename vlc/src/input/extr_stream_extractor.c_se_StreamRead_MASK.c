
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* pf_read ) (TYPE_2__*,void*,size_t) ;} ;
struct stream_extractor_private {TYPE_2__ extractor; } ;
struct TYPE_4__ {struct stream_extractor_private* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_2__*,void*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1( stream_t* VAR_0, void* VAR_1, size_t VAR_2 )
{
    struct stream_extractor_private* VAR_3 = VAR_0->p_sys;
    return VAR_3->extractor.pf_read( &VAR_3->extractor, VAR_1, VAR_2 );
}
