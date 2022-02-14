
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb2_context {int dummy; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_5__ {TYPE_1__ read; } ;
struct TYPE_6__ {int eof; TYPE_2__ res; } ;


 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct smb2_context *VAR_1, int VAR_2, void *VAR_3,
             void *VAR_4)
{
    FUNC_1(VAR_3);
    FUNC_0();

    if (VAR_2 == 0)
        VAR_0->eof = 1;
    else
        VAR_0->res.read.len = VAR_2;
}
