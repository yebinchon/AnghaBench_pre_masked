
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {int (* pf_control ) (TYPE_2__*,int,int ) ;} ;
struct stream_extractor_private {TYPE_2__ extractor; } ;
struct TYPE_4__ {struct stream_extractor_private* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int
FUNC_1( stream_t* VAR_0, int VAR_1, va_list VAR_2 )
{
    struct stream_extractor_private* VAR_3 = VAR_0->p_sys;
    return VAR_3->extractor.pf_control( &VAR_3->extractor, VAR_1, VAR_2 );
}
