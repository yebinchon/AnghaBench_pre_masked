
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_fast32_t ;
struct vlc_h2_parser {int opaque; TYPE_1__* cbs; } ;
struct TYPE_2__ {int (* error ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vlc_h2_parser *VAR_0, uint_fast32_t VAR_1)
{
    VAR_0->cbs->error(VAR_0->opaque, VAR_1);
    return -1;
}
